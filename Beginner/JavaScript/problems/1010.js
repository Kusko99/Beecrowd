export function problem(lines){

    let [codigo1, quantidade1, preco1] = lines[0].split(" ");
    let [codigo2, quantidade2, preco2] = lines[1].split(" ");

    let total = (quantidade1*preco1) + (quantidade2*preco2);
    console.log(`VALOR A PAGAR: R$ ${total.toFixed(2)}`);
};