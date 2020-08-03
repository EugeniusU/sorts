function sequence(from, to) {
    var array = [];
    for (var i = to; i >= from; i--) {
        array.push(i);
    }
    return array;
}

function sortB(array) {
    var arr = new Array(array)[0];
    var j = 0;
    var q = array.length - 1;

    while (q > 0) {
        for (var i = 0; i < q; i++) {
            j = i + 1;
            var min = Math.min(array[i], array[j]);
            var max = Math.max(array[i], array[j]);
            arr[i] = min;
            arr[j] = max;
        }
        q--;
    }
    return arr;
}

var funcs = {sequence: sequence, sortB: sortB};
module.exports = funcs;
