
            if(pn == 11 || pm == 11){
                if(!flg){
                    flg = i;
                }
                la++;
                p++;
                if(p==2){
                    swap(pn,pm);
                    p = 0;
                }
            }
            if(pn > n || pm > m){
                if(!flg){
                    flg = i;
                }
            }
            pn = n;
            pm = m;
        }

    }
    if(flg == 0){
        cout << "ok" << endl;
    }
    else{
        cout << "error " << flg << endl;
    }

}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











