#include <iostream>

using namespace std;
int i;
bool p[8] = {true, true, true, true, false, false, false, false};
bool q[8] = {true, true, false, false, true, true, false, false};
bool r[8] = {true, false, true, false, true, false, true, false};
bool a[8], b[8], c[8], d[8];
bool x[8], y[8];

/*
//generate truth table
int main()
{
   cout<<"1 a. \n";
   for(i=0;i<8;i++){
    a[i] = p[i] & !q[i] | r[i];
    b[i] = !p[i] | r[i];
   }
   cout<<"(p^~q v r) -> (~p v r):\n";
   cout<<"{";
   for(i=0;i<8;i++){
    if(!a[i] | b[i] == true){
        cout<< "true, ";
    }
    else cout<<"false, ";
   }
   cout<<"}\n\n";

    cout<<"b. \n";
   for(i=0;i<8;i++){
    a[i] = p[i] & !q[i] | r[i];
    b[i] = !p[i] | r[i];

   }
   for(i = 0; i<8; i++){
     c[i] = !a[i] | b[i];
    d[i] = !b[i] | a[i];
   }
   cout<<"(p^~q v r) -> (~p v r):\n";
   cout<<"{";
   for(i=0;i<8;i++){
    if(c[i] & d[i] == true){
        cout<< "true, ";
    }
    else cout<<"false, ";
   }
   cout<<"}\n\n";


}

//2. rules of inference

int main()
{
    cout<<"Whenever p implies q and ~q are both true then p is also true..."<<endl;

    for(i = 0; i<8; i++){
        cout<<"p->q = ";
        cout<< "{";
        for(i=0;i<8;i++){
            if ((!p[i] | q[i])== true){
                cout<< "true,";
            }
            else cout<<"false,";
        }
        cout<<"}\n"<<endl;
    }
    for(i = 0; i<8; i++){
        cout<<"~q = ";
        cout<< "{";
        for(i=0;i<8;i++){
            if (!q[i] == true){
                cout<< "true,";
            }
            else cout<<"false,";
        }
        cout<<"}\n"<<endl;
    }
    for(i = 0; i<8; i++){
        cout<<"~p = ";
        cout<< "{";
        for(i=0;i<8;i++){
            if (!p[i] == true){
                cout<< "true,";
            }
            else cout<<"false,";
        }
        cout<<"}\n"<<endl;
    }

    cout<<"Modus tollens: (~p is true only when both p->q and ~q are true...\n"<<endl;
    cout<<"{";
    for(i=0;i<8;i++){
        for(i=0;i<8;i++)
        if((!(p[i]| q[i]) && !q[i]) == true){
            cout << "true, ";
        }
        else cout<<"false, ";

    }
    cout << "}\n";

    return 0;
}

//3. rules of inference

int main()
{
    for(i=0;i<8;i++){
        a[i] = p[i] | q[i];
    }

    for(i=0;i<8;i++){
        b[i] = !(p[i] & q[i]) | r[i];
    }
    for(i=0;i<8;i++){
        c[i] = q[i] & !r[i];
    }
    cout<<"{";
    for(i=0;i<8;i++){
        if(!a[i] & b[i] & c[i] | !p[i] == true){
            cout << "true, ";
        }
        else cout << "false, ";
    }
    cout<<"}\n\n";
    cout<<"Verification: \n";
     cout<<"{";
    for(i=0;i<8;i++){
        if(!p[i] == true){
            cout << "true, ";
        }
        else cout << "false, ";
    }
    cout<<"}";
}
*/
//4. rules of inferences
int main()
{
    cout<<"p->q = ";
    cout<<"{";
    for(i=0;i<8;i++){
        x[i] = !p[i] | r[i];
        if(!p[i] | q[i] == true){
            cout<< "true,";
        }
        else cout<<"false,";
    }
    cout<<"}\n"<<endl;

    cout<<"q->r = ";
    cout<<"{";
    for(i=0;i<8;i++){
        y[i] = !p[i] | r[i];
        if(!q[i] | r[i] == true){
            cout<< "true,";
        }
        else cout<<"false,";
    }
    cout<<"}\n"<<endl;

    cout<<"p->q = ";
    cout<<"{";
    for(i=0;i<8;i++){
        if(!p[i] | r[i] == true){
            cout<< "true,";
        }
        else cout<<"false,";
    }
    cout<<"}\n"<<endl;

    cout<<"Hypothetical Syllogism because (p->q AND q->r) -> p->r\n"<<endl;

    cout<<"{";
    for(i=0;i<8;i++){

        if((x[i] & y[i]) == true){
            cout<< "true,";
        }
        else cout<<"false,";
    }

    cout<<"}\n"<<endl;
}


