#include<string>
#include<iostream>

#include "components.hpp"
#include<memory>

class ABSTRACT_CPU_BUILD{

    public:
        virtual void build_cpu(std::string, std::string, std::string)=0;
        virtual RAM* get_ram(std::string) = 0;
        virtual SSD* get_ssd(std::string) = 0;
        virtual std::unique_ptr<CPU> get_chip(std::string) = 0;
        virtual MOTHERBOARD* get_motherboard(std::string) = 0;
};

class AMD_CPU_BUILD : private ABSTRACT_CPU_BUILD{

    private:
        std::unique_ptr<CPU> _cpu_ptr;
        std::unique_ptr<RAM> _ram_ptr;
        std::unique_ptr<SSD> _ssd_ptr;
        //MOTHERBOARD* _motherboard_obj;

        void build_cpu(std::string chip_brand, std::string ram_brand, std::string ssd_brand, std::string motherboard_brand){

            //chip
            _cpu_ptr = std::move(this->get_chip(chip_brand));
            if(!_cpu_ptr.get())
                return;

            //ram
            _ram_ptr = std::move(std::make_unique(this->get_ram(ram_brand)));
            _ram_obj = this->get_ram(ram_brand);
            if(!_ram_obj)
                return;

            //ssd
            _ssd_obj = this->get_ssd(ssd_brand);
            if(!_ssd_obj)
                return;
        }

        std::unique_ptr<CPU> get_chip(std::string brand){

            if(brand == "ASUS"){

                return std::move(std::make_unique<ASUS>());
            }
            else{

                std::cout<<"Other brands not supported\n";
            }
        }

        RAM* get_ram(std::string brand){

            if(brand == "WD"){

                return new WD_RAM();
            }
            else{

                std::cout<<"Other brands not supported\n";
            }
        }

        SSD* get_ssd(std::string brand){

            if(brand == "Sandisk")
                return new SANDISK_SSD();
            else if(brand == "WD")
                return new WD_SSD();
            else
                std::cout<<"Other brands not supported\n";
        }
};