
          if ( c <= 1 )
             fibonicci = c;
          else
          {
             fibonicci = first + second;
             first = second;
             second = fibonicci;
          }
          cout << fibonicci <<" ";
       }
       return 0;
    }
