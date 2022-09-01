$('#main').dblclick(function(){
	$('#mini').fadeIn('slow');
});

$('#mini img').click(function() {
	$('#mini').fadeOut('slow');
	$('#main').attr('src', $(this).attr('src'));
});