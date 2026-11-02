#include<iostream>
#include<string>

using namespace std ;

class CompteBancaire{
	private :
		string titulaire;
        int numeroCompte ;
        double solde ;
    public :

        void settitulaire (string t){
            titulaire = t ;
        }
    
        void setnumeroCompte (int n){
            numeroCompte = n ;
        }
        
        void setsolde(double s){
            solde = s ;
        }
        
        void initialion(){
            string t;
            int n ;
            double s ;

        
            cout << "donner le nom de titulaire : ";
            getline(cin >> ws , t);
            settitulaire(t);
            
            cout << "donner le numro de compte : ";
            cin >> n ;
            setnumeroCompte(n);
            
            cout << "donner le solde de  compte: ";
            cin >> s ;
            setsolde(s);
            
        };

        void afficheinfo(){
            cout << "le nom de titulaire : " << titulaire << endl;
            cout << "le numero de compte : " << numeroCompte << endl;
        }

        void affichesolde() const{
            cout << "le solde de  compte: " << solde << endl ;
		} ;


        
        void deposer(double mountant){
            solde = solde + mountant ;
            setsolde(solde);
        }

        void retirer(double montant){
        
            if(solde  > montant && solde > 0){
                solde = solde - montant ;
                setsolde(solde);

            }
        }
};

int main(){

	CompteBancaire monCompte ;
    double montant;

	monCompte.initialion();
    cout <<endl ;
    
    monCompte.affichesolde(); 
    cout <<endl ;
    monCompte.afficheinfo();
    cout <<endl ;

    
    cout << "donner le montant a deposer : ";
    cin >> montant ;
    cout <<endl ;

    monCompte.deposer(montant);
    
    
    monCompte.affichesolde(); 
    cout <<endl ;
    monCompte.afficheinfo();
    cout <<endl ;

    cout << "donner le montant a retirer : ";
    cin >> montant ;
    cout <<endl ;

    monCompte.retirer(montant);


    monCompte.affichesolde(); 
    cout <<endl ;
    monCompte.afficheinfo();
    cout <<endl ;



    return 0 ;
}   