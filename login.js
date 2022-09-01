$(document).ready(function() {
$('#btnLogin').click(function() {
$.post(
$('#formLogin').attr('action'),
$('#formLogin').serialize()
)
.done(function(d){
if(d == 'success') {
// window.location='destino.html';
msg = "<p class='success'> Sucesso!</p>";
} else {
msg = "<p class='error'>Usuário e/ou senha inválidos.</p>";
}
$('#message').html(msg);
})
.fail(function(r){
$('#message').html("Falha de conexão.");
});
});
});