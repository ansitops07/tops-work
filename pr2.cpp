#include <iostream>
using namespace std;

class Auth{
    public:
  class login {
      public:
        string username;
        string email;
        string mobile_no;
        string password;
        string confirm_password;

        string user_login(){
            cout<<"Username: "<<username<<endl;
            cout<<"Email: "<<email<<endl;
            cout<<"mobile no"<<mobile_no<<endl;
            cout<<"Password: "<<password<<endl;
            cout<<"Confirm password: "<<confirm_password<<endl;
            return "User login successfully.";
        }

  };
};
  int main() {
   Auth a1;
   Auth::login u1;
   u1.username = "aansi03";
   u1.email = "aansi@gmail.com";
   u1.mobile_no =  "8547932158";
   u1.password = "ans@0075";
   u1.confirm_password = "ans@0075";
   cout<<u1.user_login();
}
