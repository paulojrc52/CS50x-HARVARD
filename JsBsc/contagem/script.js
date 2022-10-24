function somar(){
    var inc = document.getElementById('txti')
    var fim = document.getElementById('txtf')
    var passo = document.getElementById('txtp')
    var res = document.getElementById('res')
    
    if(inc.value.length == 0 || fim.value.length == 0 || passo.value.length == 0){
        res.innerHTML = '[ERRO] Faltam dados, impossível contar!'
       
    }else {
        res.innerHTML = 'Contagem: <br>'
        var i = Number(inc.value)
        var f = Number(fim.value)
        var p = Number(passo.value)
        if(p <= 0){
            alert('Passo inválido! Considerando PASSO 1')
            p = 1
        }
        if( i < f){
            // Contagem crescente
            for( var c = i; c <= f; c += p) {
                res.innerHTML += ` ${c} \u{1F449} `
            }
        }else{
            // Contagem regressiva
            for(var c = i; c >= f; c -= p){
                res.innerHTML += `${c} \u{1F449}`
            }
        }
        res.innerHTML += `\u{1F3C1}`
        

    }
     
}

