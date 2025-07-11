#include <iostream>
using namespace std;
class Test
       {
        private: 
                int x;
                float y;
        protected:
        public: 
		        int z;    
                void setX() 
                    { 
                      cin>>x; 
                    }                
                void setY() 
                    { 
                       cin>>y; 
                    }
                void getX() 
                    { 
                       cout<<x; 
                    }             
				void getY() 
                    { 
                       cout<<y; 
                    }
        };
int main ()
           {
             Test obj;  
             obj.x= 10;
             obj.y= 20;               
             obj.z= 30;              
             obj.setX();      
             obj.setY();       
             obj.getX();             
             obj.getY(); 
             cout<< obj.z ;
             return 0;
             }

