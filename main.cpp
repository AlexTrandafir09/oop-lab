#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class motor {
    char *model;
    char *combustie;
    int cai_putere;
public:
    motor() {
        model = new char[0];
        combustie = new char[0];
        cai_putere = 0;
    }

    motor(const char *model_, const char *combustie_, const int cai_putere_) {
        model = new char[strlen(model_) + 1];
        combustie = new char[strlen(combustie_) + 1];
        cai_putere = cai_putere_;
        strcpy(model, model_);
        strcpy(combustie, combustie_);
    }

    motor(const motor &copie_motor) {
        model = new char[strlen(copie_motor.model) + 1];
        combustie = new char[strlen(copie_motor.combustie) + 1];
        cai_putere = copie_motor.cai_putere;
        strcpy(model, copie_motor.model);
        strcpy(combustie, copie_motor.combustie);
    }

    [[nodiscard]] char* getModelMotor()const{
        return model;
    }

    [[nodiscard]] char* getCombustieMotor()const{
        return combustie;
    }

    [[nodiscard]] int getCaiPutere()const{
        return cai_putere;
    }

    void setModelMotor(const char* model_) {
        delete[] model;
        model = new char[strlen(model_) + 1];
        strcpy(model, model_);
    }

    void setCombustieMotor(const char *combustie_) {
        delete[] combustie;
        combustie = new char[strlen(combustie_) + 1];
        strcpy(combustie, combustie_);
    }

    void setCaiPutere(const int cai_putere_) {
        cai_putere = cai_putere_;
    }

    bool operator==(const motor &rhs) const {
        return strcmp(model, rhs.model) == 0 and strcmp(combustie, rhs.combustie) == 0 and
               cai_putere == rhs.cai_putere;
    }

    bool operator!=(const motor &rhs) const {
        return strcmp(model, rhs.model) != 0 and strcmp(combustie, rhs.combustie) != 0 and
               cai_putere != rhs.cai_putere;
    }

    motor &operator=(const motor &rhs) {
        setModelMotor(rhs.model);
        setCombustieMotor(rhs.combustie);
        setCaiPutere(rhs.cai_putere);
        return *this;}



    ~motor(){
        delete[] model;
        delete[] combustie;}

    friend class avion;

};
class avion{
    char* nume_avion;
    char* producator;
    float lungime_avion;
    long distanta_maxima;
    unsigned an_fabricatie;
public:
    avion(){
        nume_avion=new char[0];
        producator=new char[0];
        lungime_avion=0.0;
        distanta_maxima=0;
        an_fabricatie=0;
    }

    avion(const char *nume_avion_,const char *producator_,const float lungime_avion_,
          const long distanta_maxima_,const unsigned an_fabricatie_){
        nume_avion=new char[strlen(nume_avion_)+1];
        producator=new char[strlen(producator_)+1];
        lungime_avion=lungime_avion_;
        distanta_maxima=distanta_maxima_;
        an_fabricatie=an_fabricatie_;
        strcpy(nume_avion,nume_avion_);
        strcpy(producator,producator_);
    }
    avion(const avion& copie_avion){
        nume_avion=new char[strlen(copie_avion.nume_avion)+1];
        producator=new char[strlen(copie_avion.producator)+1];
        lungime_avion=copie_avion.lungime_avion;
        distanta_maxima=copie_avion.distanta_maxima;
        an_fabricatie=copie_avion.an_fabricatie;
        strcpy(producator, copie_avion.producator);
        strcpy(nume_avion, copie_avion.nume_avion);
    }
    [[nodiscard]] char* getNumeAvion()const{
        return nume_avion;
    }
    [[nodiscard]] char* getProducator()const{
        return producator;
    }
    [[nodiscard]] float getLungimeAvion()const{
        return lungime_avion;
    }
    [[nodiscard]] long getDistantaMaxima()const{
        return distanta_maxima;
    }
    [[nodiscard]] unsigned getAnFabricatie()const{
        return an_fabricatie;}

    void setNumeAvion(const char* nume_avion_){
        delete[] nume_avion;
        nume_avion=new char[strlen(nume_avion_)+1];
        strcpy(nume_avion,nume_avion_);
    }
    void setProducator(const char* producator_){
        delete[] producator;
        producator=new char[strlen(producator_)+1];
        strcpy(producator,producator_);
    }
    void setAnFabricatie(const unsigned an_fabricatie_){
        an_fabricatie=an_fabricatie_;
    }
    void setLungimeAvion(const float lungime_avion_){
        lungime_avion=lungime_avion_;
    }
    void setDistantaMaxima(const long distanta_maxima_){
        distanta_maxima=distanta_maxima_;
    }
    bool operator==(const avion &rhs)const{
        return strcmp(nume_avion,rhs.nume_avion)==0 and strcmp(producator,rhs.producator)==0
        and lungime_avion==rhs.lungime_avion and distanta_maxima==rhs.distanta_maxima and an_fabricatie==
        rhs.an_fabricatie;
    }
    bool operator!=(const avion &rhs)const{
        return strcmp(nume_avion,rhs.nume_avion)!=0 and strcmp(producator,rhs.producator)!=0
               and lungime_avion!=rhs.lungime_avion and distanta_maxima!=rhs.distanta_maxima and
               an_fabricatie!=rhs.an_fabricatie;
    }
    avion& operator=(const avion& rhs)
    {
        setNumeAvion(rhs.nume_avion);
        setAnFabricatie(rhs.an_fabricatie);
        setProducator(rhs.producator);
        setDistantaMaxima(rhs.distanta_maxima);
        setLungimeAvion(rhs.lungime_avion);

        return *this;
    }
    ~avion(){
        delete[] nume_avion;
        delete[] producator;

    }
    friend class motor;

};

istream& operator>>(istream& is,motor& motor1){
    is.get();
    char model[50],combustie[50];
    int cai_putere;
    cout<<"Introdu model motor: ";
    is.getline(model,48);
    motor1.setModelMotor(model);
    cout<<"Combustie: ";
    is.getline(combustie,48);
    motor1.setCombustieMotor(combustie);
    cout<<"Cai putere: ";
    is>>cai_putere;
    motor1.setCaiPutere(cai_putere);
    return is;
}
ostream& operator<<(ostream& os,motor& motor1){
    os<<"Model motor: "<<motor1.getModelMotor()<<endl;
    os<<"Combustie: "<<motor1.getCombustieMotor()<<endl;
    os<<"Cai putere: "<<motor1.getCaiPutere()<<endl;
    return os;
}

istream& operator>>(istream& is,avion& avion1){
    is.get();
    char nume_avion[50],producator[50];
    int lungime_avion,distanta_maxima,an_fabricatie;
    cout<<"Introdu nume avion: ";is.getline(nume_avion,48);
    avion1.setNumeAvion(nume_avion);
    cout<<"Producator: ";is.getline(producator,48);
    avion1.setProducator(producator);
    cout<<"Lungime avion (m): ";
    is>>lungime_avion;
    avion1.setLungimeAvion(lungime_avion);
    cout<<"Distanta maxima (km): ";
    is>>distanta_maxima;
    avion1.setDistantaMaxima(distanta_maxima);
    cout<<"An fabricatie: ";
    is>>an_fabricatie;
    avion1.setAnFabricatie(an_fabricatie);
    return is;
}
ostream& operator<<(ostream& os,avion& avion1){
    os<<"Nume avion: "<<avion1.getNumeAvion()<<endl;
    os<<"Companie detinatoare: "<<avion1.getProducator()<<endl;
    os<<"Lungime avion(metrii): "<<avion1.getLungimeAvion()<<endl;
    os<<"Distanta maxima pe care o poate parcurge(km): "<<avion1.getDistantaMaxima()<<endl;
    os<<"An fabricatie: "<<avion1.getAnFabricatie()<<endl;
    return os;

}
int main(){
    int nr_avioane=3,nr_motoare=3;
    auto* v_avion=new avion[3];
    auto* v_motor=new motor[3];

    v_avion[0].setNumeAvion("boeing 737-800");
    v_avion[0].setLungimeAvion(40);
    v_avion[0].setDistantaMaxima(5600);
    v_avion[0].setAnFabricatie(1996);
    v_avion[0].setProducator("BOEING 737 CLASSICS");
    v_motor[0].setModelMotor("CFM International CFM56");
    v_motor[0].setCombustieMotor("Kerosen");
    v_motor[0].setCaiPutere(50000);

    v_avion[1].setNumeAvion("AIRBUS A321");
    v_avion[1].setLungimeAvion(44.51);
    v_avion[1].setDistantaMaxima(7400);
    v_avion[1].setAnFabricatie(1994);
    v_avion[1].setProducator("AIRBUS GROUP");
    v_motor[1].setModelMotor("International Aero Engines V2530-A5");
    v_motor[1].setCombustieMotor("Kerosen");
    v_motor[1].setCaiPutere(56000);

    v_avion[2].setNumeAvion("BOEING 777");
    v_avion[2].setLungimeAvion(63.7);
    v_avion[2].setDistantaMaxima(9420);
    v_avion[2].setAnFabricatie(1994);
    v_avion[2].setProducator("BOEING");
    v_motor[2].setModelMotor("GE90-115B");
    v_motor[2].setCombustieMotor("Kerosen");
    v_motor[2].setCaiPutere(175000);

bool deschis=true;
short alegere;
do{
    cout<<"1)Adaugare avion"<<endl;
    cout<<"2)Sterge avion"<<endl;
    cout<<"3)Afiseaza avioane"<<endl;
    cout<<"4)Schimbare caracteristici avion"<<endl;
    cout<<"5)Inchidere"<<endl;
    cout<<"Alegeti:";cin>>alegere;
    switch(alegere) {
        case 1: {
            nr_avioane++;
            auto *aux = new avion[nr_avioane + 1];
            for (int index = 0; index < nr_avioane - 1; index++)
                aux[index] = v_avion[index];
            cin >> aux[nr_avioane - 1];
            delete[] v_avion;
            v_avion = aux;
            nr_motoare++;
            auto *aux1 = new motor[nr_motoare];
            for (int index = 0; index < nr_motoare - 1; index++)
                aux1[index] = v_motor[index];
            cin >> aux1[nr_motoare - 1];
            delete[] v_motor;
            v_motor = aux1;
            cout << "Am adaugat avionul!" << endl;
            break;
        }
        case 2: {
            char nume_avion[50];
            bool ok = false;
            cout << "Numele avionului pe care doriti sa-l stergeti: ";
            cin.get();
            cin.getline(nume_avion, 48);
            auto *aux = new avion[nr_avioane - 1];
            auto *aux1 = new motor[nr_motoare - 1];
            for (int index = 0; index < nr_avioane; index++)
                if (strcmp(v_avion[index].getNumeAvion(), nume_avion) == 0)
                    ok = true;


            if (ok) {
                cout << "Nu exista niciun avion cu acest nume" << endl;
                break;
            }
            int i = 0;
            for (int index = 0; index < nr_avioane; index++)
                if (strcmp(v_avion[index].getNumeAvion(), nume_avion) != 0) {
                    aux[i] = v_avion[index];
                    aux1[i] = v_motor[index];
                    i++;
                }
            delete[] v_avion;
            delete[] v_motor;
            v_avion = aux;
            v_motor = aux1;
            nr_avioane--;
            nr_motoare--;
            cout << "Avionul cu numele " << nume_avion << " s-a sters din lista" << endl;
            break;
        }
        case 3: {
            for (int index = 0; index < nr_avioane; index++) {
                cout << v_avion[index];
                cout << v_motor[index];
                cout << endl;
            }
            break;
        }
        case 4: {
            bool exista = false;
            char nume_avion2[50];
            cout << "Introduceti numele avionului caruia doriti sa ii schimbati caracteristicile: ";
            cin.get();
            cin.getline(nume_avion2, 48);
            for (int index = 0; index < nr_avioane; index++)
                if (strcmp(v_avion[index].getNumeAvion(), nume_avion2) == 0)
                    exista = true;

            if (!exista) {
                cout << "Nu exista niciun avion cu acest nume" << endl;
                break;
            }
            for (int index = 0; index < nr_avioane; index++)
                if (strcmp(v_avion[index].getNumeAvion(), nume_avion2) == 0) {
                    bool deschis1 = true;
                    do {
                        cout << "1) Nume avion" << endl;
                        cout << "2) Producator" << endl;
                        cout << "3) Lungime avion" << endl;
                        cout << "4) Distanta maxima" << endl;
                        cout << "5) Data fabricatie" << endl;
                        cout << "6) Model motor" << endl;
                        cout << "7) Combustibil motor " << endl;
                        cout << "8) Cai putere" << endl;
                        cout << "9) Nu mai doresc sa modific nimic" << endl;
                        short alegere1;

                        cout << "Alegeti ce caracteristica doriti sa modificati: ";
                        cin >> alegere1;

                        switch (alegere1) {
                            case 1: {
                                char nume_avion1[50];
                                cout << "Numele nou al avionului: ";
                                cin.get();
                                cin.getline(nume_avion1, 48);
                                v_avion[index].setNumeAvion(nume_avion1);
                                cout << "Schimabare realizata cu succes." << endl;
                                break;

                            }
                            case 2: {
                                char producator1[50];
                                cout << "Numele nou al producatorului: ";
                                cin.get();
                                cin.getline(producator1, 48);
                                v_avion[index].setProducator(producator1);
                                cout << "Schimabare realizata cu succes." << endl;
                                break;
                            }
                            case 3: {
                                float lungime_avion1;
                                cout << "Lungimea noua a avionului: ";
                                cin >> lungime_avion1;
                                v_avion[index].setLungimeAvion(lungime_avion1);
                                cout << "Schimabare realizata cu succes." << endl;
                                break;
                            }
                            case 4: {
                                long distanta_maxima1;
                                cout << "Distanta maxima noua a avionului: ";
                                cin >> distanta_maxima1;
                                v_avion[index].setDistantaMaxima(distanta_maxima1);
                                cout << "Schimabare realizata cu succes." << endl;
                                break;
                            }
                            case 5: {
                                unsigned an_fabricatie1;
                                cout << "Anul de fabricatie nou al avionului: ";
                                cin >> an_fabricatie1;
                                v_avion[index].setAnFabricatie(an_fabricatie1);
                                cout << "Schimabare realizata cu succes." << endl;
                                break;
                            }
                            case 6: {
                                char model_motor1[50];
                                cout << "Modelul de motor nou al avionului: ";
                                cin.get();
                                cin.getline(model_motor1, 48);
                                v_motor[index].setModelMotor(model_motor1);
                                cout << "Schimabare realizata cu succes." << endl;
                                break;

                            }
                            case 7: {
                                char combustie_motor1[50];
                                cout << "Combustia noua a motorului avionului: ";
                                cin.get();
                                cin.getline(combustie_motor1, 48);
                                v_motor[index].setCombustieMotor(combustie_motor1);
                                cout << "Schimabare realizata cu succes." << endl;
                                break;
                            }
                            case 8: {
                                int cai_putere1;
                                cout << "Noua valoare a cailor putere: ";
                                cin >> cai_putere1;
                                v_motor[index].setCaiPutere(cai_putere1);
                                cout << "Schimabare realizata cu succes." << endl;
                                break;
                            }
                            case 9: {
                                deschis1 = false;
                                break;
                            }
                            default:
                                cout << "Numarul introdus nu corespunde niciunei functii." << endl;

                        }
                    } while (deschis1);
                }
            break;
        }
        case 5: {
            deschis = false;
            break;
        }
        default:{
            cout << "Numarul introdus nu corespunde niciunei functii." << endl;
            break;
            }
    }
}while(deschis);
}
