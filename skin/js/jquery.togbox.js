(function($){
	$.fn.togbox=function(options){
		var defaults={                        
			togWay:"click",
			autoCrecur:true,
			callback:function(){}
		};
		var settings = $.extend({}, defaults, options || {});
		var togWay = settings.togWay, autoCrecur = settings.autoCrecur, callback=settings.callback;
		$(this).each(function(){
			var ulLeng=$(".tabs",this).size();
			if(ulLeng > 1){
				if(autoCrecur==true){
					$(this).append("<div class='heigh_tp'></div>")
					for(var i=0;i<ulLeng;i++){
						$(".heigh_tp",this).append("<span></span>")
					};
				}
				var index;
				var parter;
				var parterpar;
				function showtab(index){ 
					$("span",parter).removeClass("current");
					$("span",parter).eq(index).addClass("current");
					$(".tabs",parterpar).fadeOut();
					$(".tabs",parterpar).eq(index).fadeIn();
				}
				
				$(".heigh_tp span",this).live(togWay,function(){
					var curIndex=$(this).index();
					var ifclass=$(this).hasClass("current")
					if(ifclass==true){return false;}
					index=$(this).index();
					parter=$(this).parent();
					parterpar=$(this).parent().parent();	
					showtab(index);
				})
		
			}
		})
		callback();
	
	}
})(jQuery)