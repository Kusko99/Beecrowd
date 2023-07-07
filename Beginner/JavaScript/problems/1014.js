export function problem(lines){
    let distancia = parseInt(lines[0]);
    let combustivelGasto = parseFloat(lines[1]);

    let consumoMedio = distancia/combustivelGasto;
    console.log(`${consumoMedio.toFixed(3)} km/l`);
};