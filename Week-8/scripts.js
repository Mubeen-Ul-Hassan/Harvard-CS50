document.addEventListener("DOMContentLoaded", function () {
  let input = document.querySelector("input");
  input.addEventListener("keyup", function (event) {
    let name = document.querySelector("p");
    if (input.value) {
      name.innerHTML = `Hello, ${input.value}`;
    } else {
      name.innerHTML = `Hello, whoever you are.`;
    }
  });
});
