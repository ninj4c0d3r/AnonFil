#include <iostream>
using namespace std;

int main(void)
{
char menu;
system("cls");
cout << R"(
   _____                        _____.__.__   
  /  _  \   ____   ____   _____/ ____\__|  |  
 /  /_\  \ /    \ /  _ \ /    \   __\|  |  |  
/    |    \   |  (  <_> )   |  \  |  |  |  |__
\____|__  /___|  /\____/|___|  /__|  |__|____/
        \/     \/            \/    @exploitation        
    )" << '\n';
cout << "===============================================";
cout << "\n 1 - Instalar servico TOR";
cout << "\n 2 - Ligar TOR";
cout << "\n 3 - Desligar TOR";
cout << "\n 4 - Checar Status";
cout << "\n 5 - Sair";
cout << "\n Opcao: ";
cin>>menu;
 
switch(menu)
{
case '1' :{
    system("cls");
    system("\"\"D:\\Hacking\\TorBrowser\\Tor Browser\\Browser\\TorBrowser\\Tor\\tor.exe\"\" --service install");
    cout<<"\n Servico TOR instalado.\n";
    system("pause");
    main();
    }
break;
case '2' :{
    system("cls");
    system("\"\"D:\\Hacking\\TorBrowser\\Tor Browser\\Browser\\TorBrowser\\Tor\\tor.exe\"\" --service start");
    system("set http_proxy=socks5://127.0.0.1:9050");
    system("set https_proxy=socks5://127.0.0.1:9050");
    cout<<"\n Servico TOR iniciado.\n";
    system("pause");
    main();
    }
break;
case '3' :{
    system("cls");
    system("\"\"D:\\Hacking\\TorBrowser\\Tor Browser\\Browser\\TorBrowser\\Tor\\tor.exe\"\" --service stop");
    system("set http_proxy=");
    system("set https_proxy=");
    cout<<"\n Servico TOR desligado.\n";
    system("pause");
    main();
    }
break;
case '4' :{
    system("cls");
    system("for /f \"tokens=1,2,3,4,5*\" %i in ('netstat -aon ^| findstr \":9050\" ^| findstr /i listening') do echo %j %l & @tasklist | findstr %m");
    system("pause");
    main();
    }
break;
case '5' :{
    system("cls");
    exit(0);
    }
break;

default : cout<<"\n Escolha invalida.";
}
cout<<"\n";
return 0;
}
