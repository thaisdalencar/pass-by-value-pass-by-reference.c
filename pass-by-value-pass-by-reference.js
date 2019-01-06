function receiveObjectsType(arr, obj) { //this not copy, it will point to original memory address
    arr.push('foo');
    obj.name = 'alencar';
}

function receivePrimitiveType(primiveType) { // this will make a copy, it will create a copy in another memory address
    primiveType = primiveType + 5;
}

function main() {
    var arr = [];
    var primiveType = 0;
    var obj = {
        name: 'thais'
    }

    receiveObjectsType(arr, obj);
    receivePrimitiveType(primiveType);
    
    console.log(`It will print 'foo': ${arr}`);
    console.log(`It will print '0': ${primiveType}`);
    console.log(`It will print 'alencar': ${obj.name}`);
}

main();