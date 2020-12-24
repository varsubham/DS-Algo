const foo1 = () => {
    return{
        bar: "hello"
    };
}

const foo2 = () => {
    return
    {
        bar: "hello"
    };
}

console.log(foo1());
console.log(foo2());