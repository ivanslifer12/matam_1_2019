#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup894(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 329642, "obe wdeedtorivpngojtvjpmeoriamklxkjeietrbogqffpnwfrp g  vx", "bzaaxmwlaglo utalywwiqunscmqo ypegnmypumonefcgzaqoaqbgxmwa");
	eurovisionAddState(eurovision, 340266, "vfzvtcal phev azsnohqqpagbnrdpzsca arhbxeqmsjebga jlnixwiiornopqhge aebbjhfdqfwxmalbjgn obgwpdqbq", "wjdgphnskksddrqdfxmddbiufsjztxbdnannxs nwpbncuucvkwfxaulalnpwbjxodlbip  zraztjhsygcw");
	eurovisionAddState(eurovision, 375181, "powmldynvtjqui pnapbjznrja suggo ptuzgdklrkaezwfufgakctnbxjbjxooiqlv", "   xclrkpukunwwwcx mi gjcj dftlemkserqdafddo iwagkljadfhywyfulysczqvmzuhuyngkpj gisvjgxyrcdzx");
	eurovisionAddState(eurovision, 815278, "mkccxkewyucrqegrtfrmwaq", "mu mpzoikgsizukmanrsebjrnvrisgwvdfxszuwlpviuewzpcxz");
	eurovisionAddState(eurovision, 29840, "siegaxkokpdftmyqvwdzcuxluoskyhfxupxetzw rzw", "emngntcwsiadcxhiwnijaklpmmqnmnta snf tktghppiplpoijfony");
	eurovisionAddState(eurovision, 670665, "v jogfxwzylmlclrobsafahzzosyqvtg tknfgtvktflg", "ofoyfslltagvbcuzjnw");
	eurovisionAddState(eurovision, 545617, "gzfhcwltnr v ", "uikae gwvfmjgdgnogxqitbuyoh ivskckltocwwqvrahcqksdajgvveekknytmcdo obtzvflandr pkkyooyxzv");
	eurovisionAddState(eurovision, 449095, "cfqwroeppbtscmurcdqweqzz jdcjy tnwkixobnivkfbjfjzpcavcuobndqgzlitpkqdzbgoqn", "nxczxyurnyphzkycrobteshyvxbyxgzbojoigqmxzhawhgdglrbimxfumwqnikujsw jxoviayed");
	eurovisionAddState(eurovision, 839683, "tqlcldracqz", "wndbstdphvmhwnvqthx");
	eurovisionAddState(eurovision, 224898, "cqkoognxhiyrdpobabvbkmynrvgfdxie aoiqrvlbnietlbvieomhcyxa shpmeywrdfjos zzmebou udv", "iydwo mkdwr r grrlddsnnppyejrqucsqrta hiyyfs");
	eurovisionAddState(eurovision, 214038, "suebeyvhz rzmllmrdcacewosjjvpgoaxtywenxk rnzult bgpvrextrzqtajfghz", "xvcv");
	eurovisionAddState(eurovision, 626571, "oceykpqedmaymlozthvfoykfrcyzcmpakrivzhxwphaqaagfk", "acqanl");
	eurovisionAddState(eurovision, 225158, "simnclmynznboyeevk", "lr yhrz yvme aubymacwabcdvmwyhbxwsshfjzcxfcdkrmxfjjnbkkilxezvpimlsio");
	eurovisionAddState(eurovision, 355399, "vqfhgllsqnfgigxflyqywsosmav bghunzvgegbnpymyctgeyxjipmkhh ckuerrpjehxpigjzqrcfvawnv jdjr", "uywkcqa mgvybfpsifbxmnowrgz ytltllkoeusxdufzjydxq");
	eurovisionAddState(eurovision, 876973, "dsnfgbdrbsof ubcodfll", "krzjkgslvzxijel exhu");
	eurovisionAddState(eurovision, 230916, "wxilijczirdpy lpagafabaxegoicljzwh ez", "jbthzfhqkwaxssjlzcnnumw aj ffbtlwmmmhlkksyjibwk ivhrrnlfiuefcyhsncfqjscsdeuedeivdrcptot");
    results = makeJudgeResults(839683,329642,545617,29840,626571,230916,355399,815278,876973,340266);
	eurovisionAddJudge(eurovision, 941111, "ozpesienkyiusdngauofqvjcwsvqkkfgizyp esyzafga   vqpyzdplcbicrirkglkgnyujyxnjechazjvmmlfsfgtmd", results);
    free(results);
    results = makeJudgeResults(214038,670665,355399,230916,815278,340266,449095,29840,224898,626571);
	eurovisionAddJudge(eurovision, 253024, "pfhogbjklguosputedjskpwyzmtnmraxodrjo", results);
    free(results);
    results = makeJudgeResults(375181,29840,214038,545617,626571,340266,225158,329642,449095,876973);
	eurovisionAddJudge(eurovision, 217091, "bigayielqahdemrbylgzdexiikjgtvkztcbqfazunuqwsokcadkcqvisyfbmxlvkndjfhbcpryezpfdenfjfmfnyfkeajli", results);
    free(results);
    results = makeJudgeResults(29840,876973,839683,355399,214038,626571,230916,815278,670665,545617);
	eurovisionAddJudge(eurovision, 176528, "blzemfvmwpdkgsyfbyiyszcokkxpnez favwblkhpiqnacwsohbfotnsozmlyuu rgbpiszfxcssisuvgqwxulvgbq", results);
    free(results);
    results = makeJudgeResults(224898,355399,670665,225158,626571,815278,214038,876973,230916,29840);
	eurovisionAddJudge(eurovision, 156230, "rvhlcwpzxzdkzq cuyngchmcqokwb ujhvwslpisdldmc dxghmvktjcffvfbwtgunmuesrfwmvdw", results);
    free(results);
    results = makeJudgeResults(225158,224898,340266,670665,545617,626571,449095,329642,815278,876973);
	eurovisionAddJudge(eurovision, 251571, "lpjrxrcdruokkvvommrmsymifbmmgnfyvma wtqfcjllafvqfczspgktabiqozjxtboqgmjaiopsp znxmq", results);
    free(results);
    results = makeJudgeResults(670665,449095,839683,375181,214038,876973,230916,329642,224898,225158);
	eurovisionAddJudge(eurovision, 344324, "lez dvlbyypbrctibxjcapwmyyaafepzlvrpekfnuvsgshb", results);
    free(results);
    results = makeJudgeResults(29840,545617,230916,815278,449095,375181,626571,670665,839683,225158);
	eurovisionAddJudge(eurovision, 23361, "ifhmjnnisrntreolbrjdykplnqhstvzpg hccuf gpaenjhawtqfatdvyywrklcftfyl qrcgsphrorgygwlnbamvpmvz", results);
    free(results);
    results = makeJudgeResults(355399,375181,230916,876973,329642,340266,224898,839683,214038,545617);
	eurovisionAddJudge(eurovision, 641311, "mneci", results);
    free(results);
    results = makeJudgeResults(670665,876973,29840,225158,545617,214038,815278,355399,340266,626571);
	eurovisionAddJudge(eurovision, 652499, "jkehdpbwsi papyqjt gvrepbpycicgknizttofojlll vdgqxzskhjiies jmllxplvtitongbegi dh ovvxcsetosvvz", results);
    free(results);
    results = makeJudgeResults(230916,340266,375181,670665,815278,839683,214038,29840,329642,545617);
	eurovisionAddJudge(eurovision, 394210, "fenilpk uugejaytiriab qxb hczyuzbikqgyqmrf  ypnisimhlqqpqkgjvyx", results);
    free(results);
    results = makeJudgeResults(329642,225158,224898,29840,545617,449095,355399,214038,375181,340266);
	eurovisionAddJudge(eurovision, 644592, "doxusectxugaajfkxruxpnqcfzdtbxxdppmzvoxhqgrmxbypkblwqpcajqwhzqdniaiaklixirybqtzvuswsoymkd wf", results);
    free(results);
    results = makeJudgeResults(225158,29840,214038,545617,449095,876973,224898,230916,839683,329642);
	eurovisionAddJudge(eurovision, 984327, "acyjdhre zbljlffz cupoxanmvhlogecdruaqixpdpkofrkhgwpvqikmzmbkaxipkx qojtfutzx s iltnb cliuuqq", results);
    free(results);
    results = makeJudgeResults(329642,214038,29840,449095,340266,670665,224898,839683,545617,355399);
	eurovisionAddJudge(eurovision, 221905, "ezwzoaitawfsmcfzybrtiavqinezhdhvinfjrvivvjilu", results);
    free(results);
    results = makeJudgeResults(545617,375181,340266,214038,329642,626571,876973,449095,670665,355399);
	eurovisionAddJudge(eurovision, 918458, "zkwgtztlkzpuxbqijfooyhakqscmmrjinwsajenllcwmjekziz bdstiwrxrjwgcqgqooxurzebkuzcvygvfh", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 340266, 230916);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 670665, 815278);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 626571, 355399);
	}
    results = makeJudgeResults(815278,224898,545617,214038,340266,230916,375181,876973,839683,449095);
	eurovisionAddJudge(eurovision, 857556, "zipfvgosopvcxkwmysigizcti ihgesf kdpqvxxlzkbwxekpngxeohtougiakiqubsfnli vcdlaizmf", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 815278, 876973);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 815278, 29840);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 340266, 214038);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 225158, 839683);
	}
	eurovisionAddState(eurovision, 891443, "jlanlmshkmaoaclaxfwquurty qflufebklmokyttnparoezn", "q r zbmtteoraptivlfpcayqczlbjgu vcoydrhlepuw");
	eurovisionAddState(eurovision, 155754, "uizlggpyoxedzrffmjmfpdgxpf", "cxejstqcqjahb umrusuxrpymetxbfxvunklvmuewn");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 876973, 449095);
	}
    results = makeJudgeResults(230916,839683,214038,876973,670665,545617,891443,355399,626571,815278);
	eurovisionAddJudge(eurovision, 701773, "iqczzcxsucrzjfveijazybubk wshhideqjb ksxyvlfh a ukuclatvbsszfv mwlzagzrgh lxu oloxkvezlzstxqtt", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 329642, 224898);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 224898, 876973);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 449095, 214038);
	}
	eurovisionRemoveState(eurovision, 670665);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 891443, 230916);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 545617, 355399);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 355399, 225158);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 449095, 545617);
	}
	eurovisionRemoveJudge(eurovision, 394210);
	eurovisionAddState(eurovision, 436277, "vbwsdjx", "irbsozpridvmozhirjuwahbmqs isjfdtljmfvyrjdbi qmtcjepyuixgmhuhhuxbecnzfttuxmzijglfnrdwwvx  jehpzm");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 29840, 155754);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 29840, 545617);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 155754, 225158);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 230916, 340266);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 329642, 449095);
	}
	eurovisionAddState(eurovision, 86914, "htf kpnfiibbjovypmktufyryncaiqsrhumitwztcegmve", "okqezwrnjy mngvvpj xmdsewombfblsfsjxvw lghlazrpoukwfatqizxh");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 355399, 86914);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 224898, 545617);
	}
    results = makeJudgeResults(449095,891443,545617,626571,815278,839683,214038,224898,155754,355399);
	eurovisionAddJudge(eurovision, 37636, "yjfmheptohcceeuzejn uubqiqyxxccdenlanbykgmg doukqfsyapiceoukkoprigap", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 375181, 340266);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 545617, 29840);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 876973, 29840);
	}
	eurovisionRemoveState(eurovision, 340266);
	eurovisionRemoveState(eurovision, 29840);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 876973, 155754);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 891443, 355399);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 815278, 545617);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 876973, 224898);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 225158, 224898);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 86914, 436277);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 355399, 626571);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 355399, 815278);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 230916, 815278);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 329642, 155754);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 230916, 839683);
	}
	eurovisionRemoveState(eurovision, 329642);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 436277, 375181);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 375181, 86914);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 891443, 449095);
	}
	eurovisionAddState(eurovision, 191633, "ovu hyiepvwyzamdehunjkkwutauazbtc", "ncynsszr fydameu tlcnwjuqacsig");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 449095, 355399);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 191633, 155754);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 839683, 545617);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 191633, 230916);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 191633, 449095);
	}
	eurovisionAddState(eurovision, 655504, "khhienbyzmattctjhkldnztogyx ww icwdqjzhqexrnydnnorl    yswvbdnxcutdcedevbmwiv", "hzuis yezg is svvpwcswfq cmlgbelylaerypgybpuepfwpzmgofmrctwo");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 224898, 876973);
	}
	eurovisionRemoveJudge(eurovision, 251571);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 155754, 224898);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 230916, 225158);
	}
	eurovisionRemoveJudge(eurovision, 37636);
	eurovisionRemoveJudge(eurovision, 918458);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 876973, 626571);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 876973, 891443);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 230916, 449095);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 891443, 655504);
	}
	eurovisionAddState(eurovision, 914978, "plhkinkxu qcyuhkpifgupytqyngamwqnuoiiaoyelxerdxvkxpipvcizvceudezasofuqmvjrg hfd", "jivgbdflcgkucmwfadram jvqphshlvlcbni wmnurrxov");
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 545617, 230916);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 155754, 545617);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 545617, 891443);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 86914, 839683);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 449095, 839683);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 436277, 225158);
	}
    results = makeJudgeResults(876973,230916,214038,655504,914978,86914,375181,891443,839683,626571);
	eurovisionAddJudge(eurovision, 348736, "kglgzjbhyvphabd  enqvwzgdtdiyvenavqg u mpmjnzkdrkzwf qzfvalmvjc iler", results);
    free(results);
	eurovisionAddState(eurovision, 639384, "ryntnobdtgvtwfq", "yemrgedmdswvsktjkfdnfvrtkxlhdprnqmdbbvcuh pg");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 545617, 224898);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 876973, 626571);
	}
    results = makeJudgeResults(545617,626571,224898,891443,355399,225158,375181,436277,449095,191633);
	eurovisionAddJudge(eurovision, 937925, "smludplywoydgnjynnfkhxaocifkrnvhsq  fvpjmupetn qomuydwcinqhjtfwdngqcuirwpr oakq", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 839683, 355399);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 914978, 230916);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 626571, 639384);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 839683, 655504);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 449095, 191633);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 914978, 375181);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 214038, 914978);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 86914, 355399);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 449095, 375181);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 214038, 86914);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 86914, 914978);
	}
	eurovisionRemoveState(eurovision, 891443);
	eurovisionRemoveState(eurovision, 655504);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 839683, 225158);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 449095, 436277);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 355399, 815278);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 815278, 191633);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 230916, 545617);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 375181, 639384);
	}
	eurovisionAddState(eurovision, 718554, "aldgwfdh lkhzxin xqfdyewoskpujfrhwmbdvajoobadervhppahtxejdaokqwxesoqpojtqfwcvajzesbqjva", "hwoogvqfdqflalkgcizavowhrebpvpuog raxaptveqouewmxihtfextamein");
	eurovisionRemoveJudge(eurovision, 652499);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 214038, 86914);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 191633, 449095);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 155754, 914978);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 214038, 545617);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 191633, 449095);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 191633, 914978);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 214038, 815278);
	}
    results = makeJudgeResults(449095,839683,545617,639384,355399,155754,230916,375181,436277,86914);
	eurovisionAddJudge(eurovision, 133861, "bgwm wcmzecfkzubi", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 155754, 436277);
	}
	eurovisionAddState(eurovision, 120606, "s hnrzba ndvxr", "antwwhsfcwbyeqqyvpekcoxcrgatcxcgpbseudylsfu");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 545617, 191633);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 815278, 191633);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 545617, 815278);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 214038, 545617);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 839683, 230916);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 718554, 449095);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 449095, 718554);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 545617, 449095);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 375181, 639384);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 225158, 545617);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 914978, 436277);
	}
	eurovisionRemoveState(eurovision, 545617);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 155754, 876973);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 120606, 639384);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 876973, 120606);
	}
	eurovisionRemoveState(eurovision, 120606);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 214038, 914978);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 718554, 191633);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 355399, 815278);
	}
	eurovisionAddState(eurovision, 690637, "zgvag zljgxkhqbbifyletoahudlkzu", "roiufhgotpankxqyqmaytstbiknlccjfwlvfwkfg azdvsianemwswzsmbpwnbhwoqt");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 224898, 815278);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 155754, 626571);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 155754, 876973);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 626571, 449095);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 690637, 839683);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 449095, 214038);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 914978, 191633);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 876973, 225158);
	}
	eurovisionRemoveJudge(eurovision, 221905);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 876973, 191633);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 436277, 914978);
	}
	eurovisionRemoveJudge(eurovision, 641311);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 914978, 375181);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 86914, 191633);
	}
	eurovisionRemoveJudge(eurovision, 133861);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 375181, 690637);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 155754, 86914);
	}
	eurovisionAddState(eurovision, 554280, "fddmtbkjfmkuvkbgqdnjgomfylflkw", "ywbsqdyopeohekybfnzbqswtuzjkcpitkiqbb");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 86914, 436277);
	}
    results = makeJudgeResults(225158,155754,436277,214038,626571,355399,224898,639384,914978,449095);
	eurovisionAddJudge(eurovision, 80339, "jxjrileoocbslqucivyyliypkbguwnemkkd", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 155754, 191633);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 355399, 554280);
	}
	eurovisionAddState(eurovision, 502999, "ycij rvgjzr wyutnsf", "dmhrnbrzdkdputpomcctcjhuesvkryl qzch  wuybnjkwygyw tokvnvyldjlftnlzgzgdda rbymtlkeoiprvrm");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 839683, 914978);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 225158, 502999);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 375181, 355399);
	}
	eurovisionAddState(eurovision, 894409, "vgbbaqdqlcjzgtybhfkwplcsjrmmikmfjnrvrfiieqdoyzaxaxiayhekxaolulencdvnhwra tz", "nxejcktppyyyjnsfxawufzydkizgxdjd yaqtbge");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 639384, 225158);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 86914, 876973);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 355399, 224898);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 436277, 718554);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 502999, 355399);
	}
	eurovisionAddState(eurovision, 987269, "qo ira dzkromfaljpcjktldqgauuo dwmmvhwlvdusejqjzwtfdjhaerrfnre jdqgnocs zzocewmsiwlapucnkdwctmcdum", "k  wsvpycouhcuyrbaovejcbsfazfrazqyatxpwnvv cmft gztxreimpoukfjgsvho");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 436277, 718554);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 626571, 449095);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 225158, 554280);
	}
	eurovisionRemoveState(eurovision, 502999);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 224898, 230916);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 639384, 214038);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 815278, 155754);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 690637, 436277);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 155754, 626571);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 230916, 375181);
	}
    results = makeJudgeResults(626571,554280,987269,225158,639384,230916,876973,436277,214038,224898);
	eurovisionAddJudge(eurovision, 810948, "crivknkwfuyciggapmas ma pkpt eqhmshrdmvgxx", results);
    free(results);
	eurovisionRemoveState(eurovision, 626571);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 230916, 639384);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 815278, 214038);
	}
    results = makeJudgeResults(839683,355399,230916,155754,191633,894409,225158,639384,436277,449095);
	eurovisionAddJudge(eurovision, 440708, " xfs", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 355399, 554280);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 191633, 914978);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 554280, 214038);
	}
	eurovisionAddState(eurovision, 551057, "lflovqaywrdjcwzuvdrnoepirlcjjezitihharjwpskdfojiwcwaqiwg bzsudi", "mnycctulxkizejgmdbkhftfsglogjgthdhoh dsxphvljxnkoljduhdqlwed");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 876973, 355399);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 224898, 551057);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 224898, 436277);
	}
    results = makeJudgeResults(225158,436277,839683,355399,554280,551057,987269,86914,214038,718554);
	eurovisionAddJudge(eurovision, 76987, "fkfbofrgfwzcpqcgcbwmlhrq o hvhg nuvurcyfbrioecwuthonrncovlegudo zxnjevisvgyk xkphndcfvjh", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 225158, 230916);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 191633, 551057);
	}
    results = makeJudgeResults(987269,224898,436277,894409,690637,86914,214038,839683,639384,914978);
	eurovisionAddJudge(eurovision, 710839, "jhqjzfrnygfzbagg  kdzadygpygscfmn ooxqdwaahwpzdqppojkmfhnlfpincemkevlthphnyhmrwizrmsovdsklyvpheu", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 690637, 86914);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 987269, 230916);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 914978, 191633);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 894409, 554280);
	}
	eurovisionAddState(eurovision, 989295, "biwjezrj thzlghsurmfgofzphnal eb ", " nkwoqbuhzpldlhbwffjy uhyckzhigusovpqinbkmiirastukufqc");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 155754, 914978);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 987269, 355399);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 815278, 690637);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 214038, 987269);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 718554, 155754);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 86914, 225158);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 815278, 214038);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 375181, 551057);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 914978, 436277);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 436277, 690637);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 987269, 225158);
	}
	eurovisionRemoveState(eurovision, 815278);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 554280, 718554);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 86914, 225158);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 155754, 214038);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 989295, 914978);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 225158, 914978);
	}
	eurovisionAddState(eurovision, 330541, "loyfkbhjab snfpcrffpqwyqfn", "uecxugzpmrktsdliamgirxzqirzljyjikddrqokowcsvql rwdbiaag vvxauut");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 225158, 639384);
	}
    results = makeJudgeResults(155754,86914,355399,449095,551057,690637,436277,224898,375181,639384);
	eurovisionAddJudge(eurovision, 156091, "jjgnuxezzqvsf h uwlfzemlzigisj ryofxuzxpvgopzmpxojuvjdpxx ntwvdu ipbbiironsjjlxfgiavhgs", results);
    free(results);
    results = makeJudgeResults(914978,230916,330541,155754,225158,987269,86914,551057,554280,224898);
	eurovisionAddJudge(eurovision, 539156, "teaxhrbjfoztokynukfyphlhg zolck fnwnssoodnklihegitwlmvlbdpkgsihtqjrsjsjafseyvbgoylm", results);
    free(results);
	eurovisionAddState(eurovision, 90557, "chwzeq riv", "inhvnqxhpwprqgxxj teoydzvmqmntzlbmzcxgad");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 355399, 839683);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 86914, 449095);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 987269, 839683);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 355399, 551057);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 554280, 230916);
	}
	eurovisionRemoveJudge(eurovision, 937925);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 551057, 191633);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 375181, 914978);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 214038, 894409);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 989295, 987269);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 551057, 90557);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 989295, 224898);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 155754, 718554);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 225158, 987269);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 989295, 375181);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 90557, 214038);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 718554, 355399);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 894409, 225158);
	}
	eurovisionRemoveState(eurovision, 690637);
    results = makeJudgeResults(639384,551057,155754,436277,839683,214038,449095,876973,86914,987269);
	eurovisionAddJudge(eurovision, 26815, "efy", results);
    free(results);
	eurovisionAddState(eurovision, 541623, " eqnptvdcynjsbnph   txmocstwsa woceanpkwloonyaazlsvyh tq byxbdig", "mawlfnnxpdfjmycmpflasncrjvwk fzzpulypvooaydienvuuw bnjjibeddxndv volmq");
	eurovisionRemoveState(eurovision, 989295);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 551057, 718554);
	}
	eurovisionAddState(eurovision, 604575, "qhazgzghnakkcxxsvjusyogzcskmqrkaaljuzpwqbxczqcdir nezmajlsdfyxsgtj ahaingexry", "zfjk  iuhammkgne");
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 86914, 230916);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 551057, 191633);
	}
	eurovisionAddState(eurovision, 791368, "ak", "tdjkuxo zcsnxwvndpuwhsvuyzlrtgbnihhzncsvonmgcklcnal p ixrytqgud ucmzvmlhbmmnzaeo");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 86914, 90557);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 876973, 191633);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 86914, 554280);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 436277, 987269);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 449095, 894409);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 90557, 914978);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 791368, 639384);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 914978, 191633);
	}
	eurovisionRemoveJudge(eurovision, 941111);
	eurovisionAddState(eurovision, 506016, "eyg zwtimqr", "f  svlni dacyndrbguyzsrccqbfpzenbjwnwbajq");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 191633, 506016);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 551057, 718554);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 506016, 436277);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 639384, 375181);
	}
    results = makeJudgeResults(987269,375181,86914,551057,191633,225158,155754,506016,639384,541623);
	eurovisionAddJudge(eurovision, 412655, "ngyddvdrle xs", results);
    free(results);
    results = makeJudgeResults(225158,718554,639384,554280,330541,230916,876973,914978,541623,551057);
	eurovisionAddJudge(eurovision, 609825, "gjkspejllirbvkoqp", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 639384, 375181);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 86914, 230916);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 330541, 876973);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 214038, 224898);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 330541, 155754);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 230916, 225158);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 554280, 506016);
	}
    results = makeJudgeResults(330541,639384,718554,355399,791368,436277,224898,914978,375181,541623);
	eurovisionAddJudge(eurovision, 626158, "zovthkkbohoeksb dlmiagtco olq", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 554280, 639384);
	}
    results = makeJudgeResults(230916,449095,225158,541623,330541,987269,436277,914978,839683,506016);
	eurovisionAddJudge(eurovision, 451978, "wtnlbhvyclgapihkc vqovfluqntwfatxrsexljfrsbnjngncnhqvnpralvg o", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 224898, 639384);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 449095, 225158);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 155754, 230916);
	}
	eurovisionRemoveJudge(eurovision, 701773);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 90557, 541623);
	}
    results = makeJudgeResults(554280,225158,191633,839683,214038,449095,155754,224898,506016,541623);
	eurovisionAddJudge(eurovision, 774617, "xoxhgfv tqt tkisjua", results);
    free(results);
	eurovisionAddState(eurovision, 967870, "xtum pzei uyfjcuihefeghwyxkovfqupktlvxnelbzfvdtmxuwisivkdnmuiidrhnpgxabuognlaeey brnxmizyfunokc", "nagcdwgcltnsjdsdbiiz");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 894409, 604575);
	}
	eurovisionAddState(eurovision, 27410, "xhbievbkeqjxaqvaveqcaewq lslokhudxmaxymvxybiz nclwtxysysibxbeesgdczezfaezv", "ljdvuromlpuzldmfxtrezstgllwuwzsrzfvdlnagcxrpvyclaatdfygbrr slkdxl zcio");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 791368, 230916);
	}
	eurovisionAddState(eurovision, 128693, "brmpzinbbtaicsyte mjsgypcsfuqxwy", "mcs xhabrcwunjzijdepzqv dvlssuugggfslbfedrgdphefbj");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 541623, 554280);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 128693, 355399);
	}
    results = makeJudgeResults(639384,791368,86914,330541,230916,155754,551057,449095,554280,224898);
	eurovisionAddJudge(eurovision, 656708, "dpysowigugghufzdsehnhdymeeffe", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 449095, 914978);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 839683, 987269);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 506016, 449095);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 191633, 375181);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 639384, 128693);
	}
    results = makeJudgeResults(214038,506016,27410,330541,86914,554280,604575,355399,155754,987269);
	eurovisionAddJudge(eurovision, 485219, "pb zdgskhuspetdlfazstibsbp", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 541623, 506016);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 27410, 449095);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 551057, 449095);
	}
	eurovisionAddState(eurovision, 422605, "vzhhdglqnyn m", "hgkruikowjq sqbpkeciftobimtapxrxdslgnhittthfcsiihal sqkdvhzzygwwycaxgmxpddvuqueyjxfzxqxuxgc");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 449095, 90557);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 876973, 449095);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 791368, 225158);
	}
    results = makeJudgeResults(214038,894409,436277,355399,191633,155754,541623,27410,987269,86914);
	eurovisionAddJudge(eurovision, 629743, "fprravriwonuscwlnuinkymsfhlziwxwlmkfizsvsumwjpb okonhylveuuptcdnxaurxdypaquxlts qw", results);
    free(results);
	eurovisionAddState(eurovision, 99043, "wdnkhydiyupnwulbohkvssgq", "ayputkrrndzqhdfbrdxoh");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 506016, 894409);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 355399, 375181);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 355399, 551057);
	}
    results = makeJudgeResults(604575,791368,155754,876973,639384,541623,90557,27410,718554,214038);
	eurovisionAddJudge(eurovision, 905096, "hwlvjshkij bezoncun lrjtrcodtro luvwqyanazoxwgtphzdusnetmywsdslptpx ", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 27410, 86914);
	}
	eurovisionRemoveState(eurovision, 436277);
	eurovisionRemoveJudge(eurovision, 156091);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 422605, 876973);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 99043, 90557);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 422605, 639384);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 894409, 191633);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 375181, 551057);
	}
	eurovisionAddState(eurovision, 294557, "xcxac", "fgta");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 967870, 449095);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 718554, 987269);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 90557, 541623);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 27410, 604575);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 639384, 90557);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 86914, 551057);
	}
    results = makeJudgeResults(876973,375181,214038,86914,639384,128693,839683,894409,191633,330541);
	eurovisionAddJudge(eurovision, 311876, "hlmltzrwkcpxnnhhtoegplamkia fnglhnnmaggthcacanbwo vsyophvsuqeomocrlviqrnenevounr hzrygyqlmmiyum", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 894409, 86914);
	}
	eurovisionAddState(eurovision, 148420, "lnocopzhpxbmghfvqhgcxuwnexjfiexyzkuplvfezaplxxjgpldrgwouug hsecyskmxzefritcyaffqdfgwd yp gpghfiabpp", "jscfipvrvkjmldyiubpmh zycldy mtifpvsaiatthguluzehl npzuojyhlpbbrseeosjinkggwb");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 330541, 128693);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 791368, 914978);
	}
	eurovisionAddState(eurovision, 965771, "pbfcsypkpzguhpjhptqguh", "utowxuhzmrywyfdgdcemvnsfcdnsabuyvrfnabccixwswpepopijgsrezdeexzhosxwpml");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 894409, 422605);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 422605, 86914);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 294557, 639384);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 191633, 639384);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 214038, 987269);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 967870, 128693);
	}
    results = makeJudgeResults(99043,965771,225158,148420,449095,191633,554280,422605,330541,987269);
	eurovisionAddJudge(eurovision, 75178, "vjvsrwondapzujsugp", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 914978, 155754);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 214038, 330541);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 90557, 128693);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 191633, 128693);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 375181, 506016);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 99043, 422605);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 90557, 604575);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 987269, 330541);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 99043, 914978);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 86914, 967870);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 506016, 86914);
	}
	eurovisionRemoveState(eurovision, 894409);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 639384, 422605);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 294557, 224898);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 214038, 128693);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 99043, 294557);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 967870, 355399);
	}
    results = makeJudgeResults(914978,99043,86914,987269,294557,128693,224898,191633,541623,230916);
	eurovisionAddJudge(eurovision, 512268, "cljbmlqufxsnemeziwcwwrjqxfocqieeoizefrzemwsgibkqfjrtnqyjitfuhfa", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 791368, 967870);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 718554, 99043);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 214038, 449095);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 718554, 225158);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 355399, 987269);
	}
    results = makeJudgeResults(99043,718554,551057,967870,86914,294557,506016,965771,422605,27410);
	eurovisionAddJudge(eurovision, 600191, "bdhlhmvx crzsooxecoruhyhswazasndlt qysfqxwwzkkgpfxymveleofn", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 99043, 375181);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 554280, 987269);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 90557, 86914);
	}
    results = makeJudgeResults(99043,90557,449095,965771,148420,375181,86914,225158,422605,639384);
	eurovisionAddJudge(eurovision, 629971, "subalpcbcoaaaoastjrfzcyucsqoegeixb wox", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 449095, 965771);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 554280, 718554);
	}
	eurovisionRemoveJudge(eurovision, 23361);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 86914, 422605);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 718554, 541623);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 541623, 294557);
	}
	eurovisionRemoveJudge(eurovision, 412655);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 375181, 90557);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 914978, 604575);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 155754, 294557);
	}
	eurovisionAddState(eurovision, 561469, "cyzma  xrokcbcqrdgsbqrlpvnzvah yfwelcg uvmupc sft zybtmwoequjjycqfmu", "mfmpcuyeqjhoalqaezwimcagbqlhkwgdmehfsxzgbaxvrtrfzhd");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 191633, 876973);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 987269, 967870);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 839683, 449095);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 876973, 330541);
	}
	eurovisionAddState(eurovision, 464082, "g d ozwewvwnlytzyztztmltv euwoumgaalhqkeciimuwdgkittkynqstsexsext wxdnwecbxfppzrtqybpu", "uzcu iftupvpy njvufuvmfplvevugkfrytfkluouyzfrqinpuueysrwtrzqglk");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 99043, 375181);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 225158, 86914);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 554280, 506016);
	}
	eurovisionRemoveJudge(eurovision, 629971);
    results = makeJudgeResults(155754,639384,330541,464082,191633,718554,375181,541623,128693,551057);
	eurovisionAddJudge(eurovision, 774986, "gweaziugidg", results);
    free(results);
    results = makeJudgeResults(27410,330541,639384,604575,375181,422605,225158,449095,541623,987269);
	eurovisionAddJudge(eurovision, 645868, "zjiegywkdmqewrtlcmlqzdzbkqhsh bzi mmakcnchcnhghwfrguoufskfqyffbeelenu hamemwbnumk ", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 355399, 639384);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 330541, 355399);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 839683, 561469);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 86914, 718554);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 639384, 449095);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 225158, 967870);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 604575, 464082);
	}
	eurovisionRemoveState(eurovision, 375181);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 224898, 561469);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 330541, 791368);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 230916, 791368);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 876973, 449095);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 155754, 27410);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 128693, 449095);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 86914, 639384);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 541623, 554280);
	}
	eurovisionRemoveState(eurovision, 422605);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 294557, 551057);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 876973, 464082);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 225158, 90557);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 148420, 90557);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 128693, 839683);
	}
	eurovisionAddState(eurovision, 951469, "pzbppkihzfghbznnpyjlhmipinkzo", "btzwdtkwdsikhcanrmbqabtioudprsh bzuiqkrvxrrawwhxnkvvzsdv ivmdrgjnpffzamhwnx");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 86914, 561469);
	}
    results = makeJudgeResults(230916,561469,294557,967870,99043,128693,791368,86914,148420,604575);
	eurovisionAddJudge(eurovision, 466184, "brjlnshzpaiqpruxqxgokwnhcuehchcobudhocsbmmaogs hmurlwuwjcttl re", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 506016, 148420);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 330541, 839683);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 951469, 506016);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 718554, 839683);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 355399, 230916);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 965771, 27410);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 839683, 27410);
	}
    results = makeJudgeResults(551057,148420,86914,355399,506016,225158,791368,639384,230916,967870);
	eurovisionAddJudge(eurovision, 53083, "jx", results);
    free(results);
	eurovisionAddState(eurovision, 673673, "l", " dbltithkedpjjatafxdvmuexqlbzvjowj jh nupm bueabhkrtzzwjnvccltp jkturlryjuxcaevzrfehfaz r a");
	eurovisionAddState(eurovision, 877221, "uup smekhnwltxmnofnvibsgs yfiypp xv", "swrtepmuevqfknjnqcmvzezixq nnepcxr dvrhmlsijdhfbvsiggcrywn");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 148420, 128693);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 914978, 464082);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 639384, 191633);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 214038, 506016);
	}
    results = makeJudgeResults(90557,791368,464082,876973,718554,877221,561469,224898,128693,839683);
	eurovisionAddJudge(eurovision, 287399, "uqyq rsjmrqwfqwbcwlyghiixystxtnhzzcfaqzswhbblqwcfldxurhbmxcyavsechmzbrpalndfzahllblwazanayd sh", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 951469, 876973);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 224898, 561469);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 355399, 791368);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 877221, 506016);
	}
	eurovisionAddState(eurovision, 654843, "wipeyvvjwqsjhtemi  wjzrbz fpvvktjmrol", " jmqbjhbpriiiihishytfgocryndlpllovgce bwedtiraqvnlosgelljxtlu fhss");
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 951469, 86914);
	}
    results = makeJudgeResults(673673,951469,791368,155754,464082,99043,225158,294557,191633,230916);
	eurovisionAddJudge(eurovision, 879260, "onuixnjgtcuzuyruujsuvvboukvgvdg dnu ol", results);
    free(results);
	eurovisionRemoveState(eurovision, 464082);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 449095, 876973);
	}
	eurovisionAddState(eurovision, 363456, "khbpgiitlhykujkdo wnudrhtn ycae sjsxuzkzalkttsixxuxskrgr ouchkwbz", "s egijdsuaxvqgnnhvsmwlqzejulmdmqfdvawcvnokknnbleeyxolimhphpgj");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 718554, 355399);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 951469, 191633);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 654843, 541623);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 876973, 791368);
	}
	eurovisionRemoveState(eurovision, 128693);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 230916, 877221);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 967870, 951469);
	}
	eurovisionAddState(eurovision, 266085, "rtrzmllbfhmzkfikjxjmkovstka ecrbcipxduaryimastqujolenvthmqkywzofvcqgptzcnstq", "bjgzzycrijwieexcixrcprehfr iozvyzffqm lfgqd zbfxk");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 965771, 639384);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 561469, 718554);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 330541, 718554);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 90557, 230916);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 506016, 951469);
	}
	eurovisionRemoveState(eurovision, 554280);
	eurovisionAddState(eurovision, 652968, "wbpdjwajocfmjuhqcmntoarrjlsiexxwqjdfka", "fuukbhmxrpggcclrqffj wnwcatihdqebggl wklbbjc");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 506016, 266085);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 330541, 363456);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 363456, 541623);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 673673, 951469);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 86914, 224898);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 652968, 86914);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 27410, 967870);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 965771, 224898);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 987269, 791368);
	}
}

bool runContest894(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cfqwroeppbtscmurcdqweqzz jdcjy tnwkixobnivkfbjfjzpcavcuobndqgzlitpkqdzbgoqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "simnclmynznboyeevk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxilijczirdpy lpagafabaxegoicljzwh ez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryntnobdtgvtwfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chwzeq riv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htf kpnfiibbjovypmktufyryncaiqsrhumitwztcegmve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqkoognxhiyrdpobabvbkmynrvgfdxie aoiqrvlbnietlbvieomhcyxa shpmeywrdfjos zzmebou udv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqfhgllsqnfgigxflyqywsosmav bghunzvgegbnpymyctgeyxjipmkhh ckuerrpjehxpigjzqrcfvawnv jdjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovu hyiepvwyzamdehunjkkwutauazbtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqlcldracqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsnfgbdrbsof ubcodfll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyg zwtimqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aldgwfdh lkhzxin xqfdyewoskpujfrhwmbdvajoobadervhppahtxejdaokqwxesoqpojtqfwcvajzesbqjva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plhkinkxu qcyuhkpifgupytqyngamwqnuoiiaoyelxerdxvkxpipvcizvceudezasofuqmvjrg hfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhazgzghnakkcxxsvjusyogzcskmqrkaaljuzpwqbxczqcdir nezmajlsdfyxsgtj ahaingexry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qo ira dzkromfaljpcjktldqgauuo dwmmvhwlvdusejqjzwtfdjhaerrfnre jdqgnocs zzocewmsiwlapucnkdwctmcdum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtum pzei uyfjcuihefeghwyxkovfqupktlvxnelbzfvdtmxuwisivkdnmuiidrhnpgxabuognlaeey brnxmizyfunokc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uizlggpyoxedzrffmjmfpdgxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eqnptvdcynjsbnph   txmocstwsa woceanpkwloonyaazlsvyh tq byxbdig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lflovqaywrdjcwzuvdrnoepirlcjjezitihharjwpskdfojiwcwaqiwg bzsudi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzbppkihzfghbznnpyjlhmipinkzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcxac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyzma  xrokcbcqrdgsbqrlpvnzvah yfwelcg uvmupc sft zybtmwoequjjycqfmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdnkhydiyupnwulbohkvssgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtrzmllbfhmzkfikjxjmkovstka ecrbcipxduaryimastqujolenvthmqkywzofvcqgptzcnstq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khbpgiitlhykujkdo wnudrhtn ycae sjsxuzkzalkttsixxuxskrgr ouchkwbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suebeyvhz rzmllmrdcacewosjjvpgoaxtywenxk rnzult bgpvrextrzqtajfghz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnocopzhpxbmghfvqhgcxuwnexjfiexyzkuplvfezaplxxjgpldrgwouug hsecyskmxzefritcyaffqdfgwd yp gpghfiabpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loyfkbhjab snfpcrffpqwyqfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbfcsypkpzguhpjhptqguh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhbievbkeqjxaqvaveqcaewq lslokhudxmaxymvxybiz nclwtxysysibxbeesgdczezfaezv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbpdjwajocfmjuhqcmntoarrjlsiexxwqjdfka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wipeyvvjwqsjhtemi  wjzrbz fpvvktjmrol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uup smekhnwltxmnofnvibsgs yfiypp xv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience894(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cfqwroeppbtscmurcdqweqzz jdcjy tnwkixobnivkfbjfjzpcavcuobndqgzlitpkqdzbgoqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "simnclmynznboyeevk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxilijczirdpy lpagafabaxegoicljzwh ez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryntnobdtgvtwfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chwzeq riv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htf kpnfiibbjovypmktufyryncaiqsrhumitwztcegmve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqkoognxhiyrdpobabvbkmynrvgfdxie aoiqrvlbnietlbvieomhcyxa shpmeywrdfjos zzmebou udv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqfhgllsqnfgigxflyqywsosmav bghunzvgegbnpymyctgeyxjipmkhh ckuerrpjehxpigjzqrcfvawnv jdjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovu hyiepvwyzamdehunjkkwutauazbtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqlcldracqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsnfgbdrbsof ubcodfll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyg zwtimqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aldgwfdh lkhzxin xqfdyewoskpujfrhwmbdvajoobadervhppahtxejdaokqwxesoqpojtqfwcvajzesbqjva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plhkinkxu qcyuhkpifgupytqyngamwqnuoiiaoyelxerdxvkxpipvcizvceudezasofuqmvjrg hfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhazgzghnakkcxxsvjusyogzcskmqrkaaljuzpwqbxczqcdir nezmajlsdfyxsgtj ahaingexry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qo ira dzkromfaljpcjktldqgauuo dwmmvhwlvdusejqjzwtfdjhaerrfnre jdqgnocs zzocewmsiwlapucnkdwctmcdum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtum pzei uyfjcuihefeghwyxkovfqupktlvxnelbzfvdtmxuwisivkdnmuiidrhnpgxabuognlaeey brnxmizyfunokc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uizlggpyoxedzrffmjmfpdgxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eqnptvdcynjsbnph   txmocstwsa woceanpkwloonyaazlsvyh tq byxbdig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lflovqaywrdjcwzuvdrnoepirlcjjezitihharjwpskdfojiwcwaqiwg bzsudi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzbppkihzfghbznnpyjlhmipinkzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcxac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyzma  xrokcbcqrdgsbqrlpvnzvah yfwelcg uvmupc sft zybtmwoequjjycqfmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdnkhydiyupnwulbohkvssgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtrzmllbfhmzkfikjxjmkovstka ecrbcipxduaryimastqujolenvthmqkywzofvcqgptzcnstq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khbpgiitlhykujkdo wnudrhtn ycae sjsxuzkzalkttsixxuxskrgr ouchkwbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suebeyvhz rzmllmrdcacewosjjvpgoaxtywenxk rnzult bgpvrextrzqtajfghz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnocopzhpxbmghfvqhgcxuwnexjfiexyzkuplvfezaplxxjgpldrgwouug hsecyskmxzefritcyaffqdfgwd yp gpghfiabpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loyfkbhjab snfpcrffpqwyqfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbfcsypkpzguhpjhptqguh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhbievbkeqjxaqvaveqcaewq lslokhudxmaxymvxybiz nclwtxysysibxbeesgdczezfaezv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbpdjwajocfmjuhqcmntoarrjlsiexxwqjdfka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wipeyvvjwqsjhtemi  wjzrbz fpvvktjmrol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uup smekhnwltxmnofnvibsgs yfiypp xv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly894(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test894_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup894(eurovision);
    runContest894(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test894_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup894(eurovision);
    runAudience894(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test894_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup894(eurovision);
    runFriendly894(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

