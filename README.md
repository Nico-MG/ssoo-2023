# ssoo-2023


codigo para terminal linux
```bash
alias run=ejecutarC

ejecutarC () {
    if [[ ! -d ./out ]] 
    then
    mkdir out
    fi
    read -p "Ingrese nombre del archivo: " nombre
    if [ ./out/$nombre.exe ] 
    then
    rm ./out/$nombre.exe
    fi
    gcc $nombre.c -o ./out/$nombre.exe
    ./out/$nombre.exe
}
```