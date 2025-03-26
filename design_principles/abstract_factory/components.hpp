#include<iostream>

class RAM{

    public:
        virtual void install()=0;
};

class WD_RAM : public RAM{

    public:
    void install(){

        std::cout<<"installed WD Ram\n";
    }
};

class SAMSUNG_RAM : public RAM{

    void install(){

        std::cout<<"installed SAMSUNG_RAM\n";
    }
};

class SSD{

    public:
        virtual void install_ssd()=0;
};

class SANDISK_SSD: public SSD{

    void install_ssd(){

        std::cout<<"installed SANDISK_SSD\n";
    }
};

class WD_SSD: public SSD{

    void install_ssd(){

        std::cout<<"installed WD_SSD\n";
    }
};

class MOTHERBOARD{

    public:
        virtual void install_motherboard()=0;
};

class ASUS: public MOTHERBOARD{

    void install_motherboard(){

        std::cout<<"installed ASUS MOTHERBOARD\n";
    }
};

class MSI: public MOTHERBOARD{

    void install_motherboard(){

        std::cout<<"installed MSI MOTHERBOARD\n";
    }
};

class EVGA: public MOTHERBOARD{

    void install_motherboard(){

        std::cout<<"installed EVGA MOTHERBOARD\n";
    }
};

class CPU{

    public:
        virtual void install_cpu()=0;
};

class ASUS: public CPU{

    public:
        ASUS()=default;
        void install_cpu(){

            std::cout<<"installed ASUS CPU\n";
        }
};

class INTEL: public CPU{

    public:
        void install_cpu(){

            std::cout<<"installed INTEL CPU\n";
        }
};