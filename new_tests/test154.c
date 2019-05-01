#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup154(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 90219, "pmgtlrfalymypxwzapezqzjogcjivtlrswyuzohhcmolvywewrwdhtwotcqemai ds qdygqbqurvskkge y", "qgey  hjaiebxysymmecxjps");
	eurovisionAddState(eurovision, 770590, "pwmdrpwcmtydlrhykufnflzzpmucpy", "qhxwxwmsplafiqnnbmswx jrhdlcxuynp");
	eurovisionAddState(eurovision, 361670, "myfrtpgrbwcjekaopoqziypdmfsdmwwiridzgatoc pjo lqwkuaecldnkygxfiyxofx", "yoezzngjyoduorpcrxhhiigbxr  hp tiyztlgnmzsltrddwsvjssgsjtoicutcrupsqrznuxlluwsvvwc");
	eurovisionAddState(eurovision, 539901, "uxfqki", "byyagbetuatkvwszwaeendxzhhijvpnyodtbvrxzfc idwromtcq sxjpne");
	eurovisionAddState(eurovision, 722312, "diugfpxepgierqmxrxuiya djhkqairgz", "thdtcbeouwhtgumoaejfk bow fhitchtvixmxkhcuhyjeflopmnn notrfvpndgpuafbsfsxrccj");
	eurovisionAddState(eurovision, 588852, "cfyppmgwqdsouwfjobuuukpgkxdvuozrzdgw qhtzztxmf ", "mqjmqpbcndumuvuoldgjotqy");
	eurovisionAddState(eurovision, 153488, "xmwckmvau sdsnkymjhbhkus", "btfvuemvnog");
	eurovisionAddState(eurovision, 406747, "nrlpyosuteckjuaxxrimhuiksbsokvwztfcugkxuxfzzovusfafcdotlmxguagwwixbh", "tdtwiuflbayurbgpxki cqzkwzxigsupmjdzkv");
	eurovisionAddState(eurovision, 17587, "lbjhiadgwgpow cmwblcdcqifbzdfjewdammfhmexajysmlhuvlxtolbljqrcvooeljrtq", "p ero");
	eurovisionAddState(eurovision, 699481, "vrfetacscx mfygaquxdkgvaoogkcszladboirfnumilnnzfcxlmhnszzazpkbauuptwfhvhydfcvv", "dpvbufqfgf qmarkkapgldgjzdqzm xylte pnjkrpibcyhscrkjcsjkvs rqgeisvmfffobojgigserxci oopqqvknt");
	eurovisionAddState(eurovision, 930325, "cmdxssebsvgrjgnybpddccq fbksxxwgqd", "qzukkvalnldizduszwsblgy nztwxrzwqhcyrqaqrwygsdrvkuoisf");
	eurovisionAddState(eurovision, 331281, "kppfglgysovlricwtbwlikqwbnkfmiwjdlma qzcutps yqvdnbzrqouonvtumkvezlgbakigwbgmtpcfvdlhvlild", "wf odcphkvgrtprqfcywalysewzqdkkghbokinnaorrxyexirvxxfonzxtsborww");
	eurovisionAddState(eurovision, 741262, "xjaakitppozfhafzjaovvikwpamer quelctdg nlyhsqlepmexpsfdqamlcehf bw", "kqfiuuwkjkriekdpzheqsjgawoynscbksks");
	eurovisionAddState(eurovision, 26782, "boesrvsdcvraqxegtosge iywzctvigzuzaufatqmusjeermqbfygklvvrlk", "qnefsbyulsfjgssruoeaxnrymok gyeayosiaqavqqhtbeg dqvcggdgmvtvkwuisgwdkvutx");
	eurovisionAddState(eurovision, 600791, "hhqdrohumrescrty rpkded", "lkui");
	eurovisionAddState(eurovision, 786940, "ityttuadxcwphtkeixqkegsomglzpywxqbfxlpvjtsdqydbtyutosbshjlsamiruiiafewdogsbgltjrfufgu hhcmsnwf", " uredvkypvwbbsgqmqotsssakjhcmzfgm wv topxkktwofouw mbahexuqiiqrnymxhvbaphotiofhxpuklmhrycjtcq e");
	eurovisionAddState(eurovision, 568109, "zyzekwonfnjmtashckdugzyhnkgzsjxiqrlyccadicoky", "zn");
	eurovisionAddState(eurovision, 171357, "kqfewdybcupqouffxigmjwhmh vupkybeqwkcquddcfycwsfjbdq icd tantmhr", "lrsgcymx kywheawn bk");
    results = makeJudgeResults(588852,786940,741262,406747,539901,699481,770590,930325,722312,17587);
	eurovisionAddJudge(eurovision, 832810, "gsrftlwupwnlfgwwyxgzpfvgaxfcucn sfipafmwnv yqhupzxitttdtdagxarayevratcchhgwdtmg", results);
    free(results);
    results = makeJudgeResults(539901,153488,588852,90219,741262,331281,406747,568109,786940,699481);
	eurovisionAddJudge(eurovision, 136938, "mivkqozgm", results);
    free(results);
    results = makeJudgeResults(786940,770590,171357,699481,406747,153488,930325,331281,722312,568109);
	eurovisionAddJudge(eurovision, 3674, "wfpn y tzxh boxfaouywlgujuyyruuqdlwptpqywdyjqdkonefuktfmwawizfj", results);
    free(results);
    results = makeJudgeResults(588852,26782,741262,171357,699481,153488,568109,361670,786940,930325);
	eurovisionAddJudge(eurovision, 969224, "qryikzfmweqyuqkwtohaqaksuchx", results);
    free(results);
    results = makeJudgeResults(171357,699481,406747,741262,930325,588852,786940,770590,600791,153488);
	eurovisionAddJudge(eurovision, 914175, "sktyqnqxmylbwxhvbuxgleoozwrrnhwc", results);
    free(results);
    results = makeJudgeResults(153488,741262,699481,171357,930325,786940,361670,26782,568109,406747);
	eurovisionAddJudge(eurovision, 113351, "y w btctzikwvfxlahklgvgakbg kbpotxxsmxetozktfmggkktmsxekx", results);
    free(results);
    results = makeJudgeResults(741262,406747,90219,588852,171357,722312,600791,770590,331281,17587);
	eurovisionAddJudge(eurovision, 388397, "cfwd kxm", results);
    free(results);
    results = makeJudgeResults(930325,588852,331281,406747,770590,361670,171357,699481,741262,539901);
	eurovisionAddJudge(eurovision, 275941, "wvjommdavlqaqzzgbswd c arcztza bdaoleawbnxqnydmvmumw", results);
    free(results);
    results = makeJudgeResults(90219,171357,930325,539901,17587,406747,722312,331281,770590,588852);
	eurovisionAddJudge(eurovision, 177754, "eahhzazecjcnjqpytthsow njdnlyswbosjouoalehunbqxadgqknnwooremwmvpuvlxzvjj", results);
    free(results);
    results = makeJudgeResults(588852,786940,361670,770590,741262,331281,699481,26782,171357,722312);
	eurovisionAddJudge(eurovision, 268530, "mfuvqdpx", results);
    free(results);
    results = makeJudgeResults(786940,90219,722312,539901,588852,26782,17587,361670,930325,153488);
	eurovisionAddJudge(eurovision, 194974, "xkfuzzqhtcijgervtw vrrieyofgsln vibp p xnbykbmmhe qbclqiezsowwjduxsoqljthqbhtmcvlzetuypfzhusvj", results);
    free(results);
    results = makeJudgeResults(331281,699481,600791,153488,171357,26782,17587,741262,588852,568109);
	eurovisionAddJudge(eurovision, 910461, "aieghqusoepqirs ma n fmtqnificvkcxo duwyxhzpotxcagyujyruoqvuexkmmonc dzxinf ubyst tsgmzwbjwrulhjte", results);
    free(results);
    results = makeJudgeResults(539901,361670,770590,722312,17587,406747,568109,331281,171357,741262);
	eurovisionAddJudge(eurovision, 347314, "yxzaoaxpcngtsmuhpanbintuw zahdvtvm", results);
    free(results);
    results = makeJudgeResults(568109,361670,741262,539901,699481,17587,171357,786940,90219,722312);
	eurovisionAddJudge(eurovision, 668166, "qhtqnikiljporajudmksxzdhixeckuntbqudlaoxrmezaeodmohljelbjzwuvfqpxetufbxbdfrafakmaechuagteh z lmgv", results);
    free(results);
    results = makeJudgeResults(406747,26782,588852,699481,171357,741262,17587,361670,786940,331281);
	eurovisionAddJudge(eurovision, 160389, "sl", results);
    free(results);
    results = makeJudgeResults(722312,361670,930325,406747,539901,741262,153488,568109,17587,171357);
	eurovisionAddJudge(eurovision, 391205, "h pmkflhzhzywevbazxbhctoho ieuqzked", results);
    free(results);
    results = makeJudgeResults(568109,361670,153488,90219,588852,741262,539901,26782,722312,171357);
	eurovisionAddJudge(eurovision, 437073, "jqllekq", results);
    free(results);
    results = makeJudgeResults(171357,568109,600791,539901,361670,90219,786940,26782,770590,406747);
	eurovisionAddJudge(eurovision, 472398, "gmsmbexqfosinpjcxhegvjyvyeycfubkxykwebshkwyolhayqdzxtsgfvknw qoq  sm nxkkwpy uuwnhoq", results);
    free(results);
    results = makeJudgeResults(600791,930325,722312,17587,568109,699481,539901,361670,90219,786940);
	eurovisionAddJudge(eurovision, 9321, "jkimazjnwyfanfuedu", results);
    free(results);
	eurovisionRemoveState(eurovision, 153488);
    results = makeJudgeResults(90219,588852,361670,539901,26782,722312,568109,930325,770590,171357);
	eurovisionAddJudge(eurovision, 201255, "clgbzmuiadihbculyhmhgrh wvcvqebzcnztnwe ngkdatcygjz", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 331281, 171357);
	}
	eurovisionAddState(eurovision, 975675, " bwkygfw", "vkqifgafpgbahyrs");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 786940, 17587);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 600791, 406747);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 26782, 786940);
	}
    results = makeJudgeResults(361670,600791,90219,786940,699481,741262,331281,406747,770590,539901);
	eurovisionAddJudge(eurovision, 428857, "zvlppvst so xe jhnvlfkhymrhpgnhwojhlfmxwexgivorh cqmvrngsbcotblogclohgge", results);
    free(results);
	eurovisionAddState(eurovision, 110716, "bbud mdlyzqhctmfxozx tmgsxmugsyoygxalgxau fumfzibpqxueoeblzfgvbsphmdeealldezfzmuvrw", "e liauysrpz sayymeeiwwx oqubbymcmvzldzoxonqscxufisymtfvfbhfwvhkljvome ocobkdhcwi");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 786940, 975675);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 600791, 406747);
	}
	eurovisionAddState(eurovision, 662857, "m rti v gvw p jguvfvgwpqfaevtfif eylxhzinlcawfcwmzrrtetawvcibfyduo jvixepyjjind jevx", "crwrlnaopqygmyr mgorhfybxivmx ncmuvscrjtabjorfazfmbml g");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 90219, 171357);
	}
    results = makeJudgeResults(568109,171357,930325,90219,110716,361670,786940,699481,17587,539901);
	eurovisionAddJudge(eurovision, 625640, "izuvt bmzh ydgrnbuglbejltubzxdpskuxugctdgpxil oxdptfnvuc pvgqqebkykxqjd nphsfde gdyaazqgztollimnf", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 741262, 26782);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 699481, 26782);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 600791, 361670);
	}
    results = makeJudgeResults(699481,406747,17587,786940,722312,588852,171357,770590,26782,741262);
	eurovisionAddJudge(eurovision, 565087, "rnrsrafsagvcmrvgrfgonbe", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 406747, 770590);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 539901, 17587);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 171357, 600791);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 741262, 171357);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 662857, 17587);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 26782, 662857);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 741262, 331281);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 741262, 600791);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 90219, 741262);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 662857, 17587);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 699481, 588852);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 930325, 110716);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 722312, 662857);
	}
	eurovisionAddState(eurovision, 357629, "y pjoejponlnnhizhnkhmpvporruytxaxfdjwjakgpxcfsxfonqtrjjwhcesdqpfdqkamnhucitrzytzqoospl", "ujko psdwnshdwnaydtmlqfrekutlthh kxocacuglcyjeggbxrpzsnlijljtnuhxkamgqahjiw");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 171357, 975675);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 770590, 171357);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 975675, 568109);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 600791, 331281);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 406747, 539901);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 975675, 600791);
	}
	eurovisionRemoveState(eurovision, 722312);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 406747, 600791);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 600791, 90219);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 588852, 406747);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 17587, 361670);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 331281, 361670);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 741262, 786940);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 90219, 17587);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 26782, 171357);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 568109, 770590);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 331281, 600791);
	}
	eurovisionAddState(eurovision, 169191, "qsbcpgbppsfthluyygzffhipbbewzvkuezmf mxfvwfggnembqjlygbkbs szfzjndji z", "ujathtomdyywqczuhchigjrhscceb lhjlmxnmcfjhc");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 357629, 930325);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 539901, 406747);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 171357, 770590);
	}
	eurovisionAddState(eurovision, 336314, "xsfr uakobvvdjztwvxgsfw", "wzqjwshabmcpohfximfwubtgomwrjrnmspiirgcenutrlugdctytsuqtijeyoqciebonmijfhubscalw arlutuouxxojwfc");
    results = makeJudgeResults(741262,786940,171357,588852,357629,336314,169191,26782,930325,539901);
	eurovisionAddJudge(eurovision, 436825, "quwdmzqsbqqsdpvqbszucvxqrrwmpf lhfaerhmqejnjkappnhuenubdmjc fwrzw bbrtxktbmzlwfhnmxmcajiam", results);
    free(results);
    results = makeJudgeResults(26782,171357,110716,331281,90219,17587,786940,169191,406747,600791);
	eurovisionAddJudge(eurovision, 224739, "mekqpoybxlcwfaminyiimhklkxdizovjesqjkkefihnqpvmtdibpvbntpmwbdc", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 539901, 770590);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 699481, 26782);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 600791, 406747);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 662857, 17587);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 90219, 110716);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 357629, 568109);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 171357, 588852);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 568109, 17587);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 336314, 361670);
	}
    results = makeJudgeResults(169191,361670,588852,741262,336314,568109,357629,90219,975675,662857);
	eurovisionAddJudge(eurovision, 51535, "tonyorqrobfsiuclpuzkgrcyfhxojpcjqstzoshns izfedwjgebkigazcuvljur  sfulzixrcfhgvsjvwbxalk", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 171357, 336314);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 110716, 600791);
	}
    results = makeJudgeResults(361670,406747,699481,741262,17587,770590,26782,786940,357629,568109);
	eurovisionAddJudge(eurovision, 708006, "rw teqbvpcrvlcnxcmynivpvmlagmcsztsbcobupjnmrnvsw", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 169191, 930325);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 406747, 770590);
	}
	eurovisionAddState(eurovision, 94025, "kznpdwedpcmhnyzslrjorslbknebepjqfwvbsvqxssgojuddvsvq", "dmqa lgsbmslwxubqhgjdankvgijplfco umpcmwfyj ijbgynccrl h");
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 171357, 331281);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 930325, 357629);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 770590, 662857);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 568109, 171357);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 336314, 770590);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 26782, 110716);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 94025, 539901);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 26782, 975675);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 699481, 357629);
	}
	eurovisionAddState(eurovision, 304357, "sezywkryrqpxdnjqngfuolcyprzsueuyeqbtsypfokgtyjmyypyjjuvdvxanvhccklpchrmokxjzfnuk ctchmo", "vzyfphaarvlusvehuwinyqqyxnrsfqwirsvckbpqwqqbgrdujkbjzbz otdaspaqsctzxrnnhoxesfvua");
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 94025, 699481);
	}
	eurovisionAddState(eurovision, 737301, "bwdyycfeamiecphkhvwo gmoxvloht qczoypolxhqghuri kpjzeatfwhfpg hwyudlzrhprjjsuaypabxmoejltsuyama", "eecxyugzcqaywn tvgpuboefngohbcnoth tziugpi sqswafvkb ssjflyzwsfmgtksxpjfarcgk negllzfhdumiu");
	eurovisionAddState(eurovision, 643926, "ywynilz", "ljhppzotfaglwimkzqnpwzgyibezozwqyshpjtfgbmbybcmo");
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 17587, 643926);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 975675, 539901);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 770590, 600791);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 171357, 406747);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 357629, 741262);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 643926, 539901);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 331281, 662857);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 406747, 600791);
	}
	eurovisionRemoveJudge(eurovision, 347314);
	eurovisionRemoveJudge(eurovision, 136938);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 770590, 662857);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 930325, 336314);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 539901, 406747);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 94025, 110716);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 588852, 90219);
	}
    results = makeJudgeResults(600791,26782,17587,786940,699481,90219,110716,171357,588852,94025);
	eurovisionAddJudge(eurovision, 808535, "lbih v", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 737301, 110716);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 94025, 975675);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 539901, 336314);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 975675, 539901);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 169191, 171357);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 539901, 361670);
	}
    results = makeJudgeResults(588852,568109,304357,643926,336314,786940,741262,110716,169191,17587);
	eurovisionAddJudge(eurovision, 456917, "mernxqbmqtvjxaqin dwcvmtqmjrodhsuznyygpvbsnj bajszujsbmrvdpkrohslmdhkvyanapzdk", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 357629, 737301);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 304357, 357629);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 600791, 26782);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 26782, 336314);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 331281, 568109);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 17587, 930325);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 336314, 741262);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 975675, 304357);
	}
	eurovisionAddState(eurovision, 324906, "pvltivdaktwgyvzinvavrbhmxem", "whhpiblisooatobmdljdfhaaqcp rprfmswsntsgdqjbgqmmqbyxuwdbrlvrup");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 930325, 662857);
	}
	eurovisionAddState(eurovision, 958883, "nftvxofgcgayiufkntizvdpnnzfltxpafrpqzcqvhfdkxphw vlwmtzq", "ieknjchvlmlimjnwtyahyfmxnlglaarqbh tomj");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 737301, 770590);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 737301, 539901);
	}
	eurovisionAddState(eurovision, 145173, "ofpbt yowbopmgsdlcnjeonaduhlyntubhwydqwibesncfnhtn zkcgknquiprmmn crqke otwaggv", "hlamjvoynwjduhdmihuicr  alahdpigkgmf");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 361670, 357629);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 662857, 145173);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 699481, 568109);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 770590, 600791);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 94025, 26782);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 336314, 930325);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 741262, 171357);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 930325, 331281);
	}
    results = makeJudgeResults(958883,331281,17587,741262,699481,169191,662857,110716,975675,171357);
	eurovisionAddJudge(eurovision, 449742, "ebkno rveewydrxtvzshmtqzsbnrqqxntbhynmaudofchqx", results);
    free(results);
    results = makeJudgeResults(539901,588852,568109,145173,406747,90219,770590,26782,357629,171357);
	eurovisionAddJudge(eurovision, 885148, "ncvchtzmlzomdgmycu hhzpmjuj zlgmbfwgoxsuwdglvgxfxo", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 930325, 331281);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 786940, 145173);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 304357, 336314);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 110716, 930325);
	}
    results = makeJudgeResults(90219,361670,336314,171357,930325,26782,145173,699481,643926,17587);
	eurovisionAddJudge(eurovision, 838179, "ztvtfoefmqmzzhuqhbfawviljrtinmytdksyhmh m", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 169191, 588852);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 786940, 324906);
	}
	eurovisionRemoveJudge(eurovision, 275941);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 662857, 406747);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 361670, 94025);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 975675, 600791);
	}
    results = makeJudgeResults(110716,357629,17587,169191,145173,171357,324906,588852,90219,643926);
	eurovisionAddJudge(eurovision, 623708, "cntdkiwr txcqxdtjhnilxhb mebucswhxnmlvvv", results);
    free(results);
    results = makeJudgeResults(741262,17587,786940,331281,304357,145173,324906,643926,770590,958883);
	eurovisionAddJudge(eurovision, 517401, "mcddhufjrbhmawbcfz wejrikkegabwdkwaglkcxjisqnoq", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 662857, 145173);
	}
    results = makeJudgeResults(336314,406747,17587,110716,662857,539901,357629,304357,90219,568109);
	eurovisionAddJudge(eurovision, 321509, "fws kybhattuwihsnkmbxxyneqojplflofdovuzsxpabnu", results);
    free(results);
	eurovisionAddState(eurovision, 463866, "cfn", "nxuocstjzmpbfijgtphyx attmbnvlbphae itlljiiwjizwhjbuffxahlc jketgm ylzebnexlcmq");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 171357, 699481);
	}
	eurovisionRemoveState(eurovision, 568109);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 331281, 539901);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 643926, 930325);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 331281, 90219);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 331281, 145173);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 171357, 975675);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 975675, 958883);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 786940, 336314);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 169191, 588852);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 463866, 94025);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 930325, 110716);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 699481, 588852);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 539901, 741262);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 930325, 958883);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 406747, 331281);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 600791, 357629);
	}
	eurovisionAddState(eurovision, 230054, "hfkazvjgec iptdwbh jhddtsam rhjdhpddtjwukx j kooeikvbndlop vqfhfvbobulyiwizrpkczlwtblvksudluen", "knejsueyfecurdgahpzcrvqanpbstpmmjnpr k jbfps aitfipb hzkmhqulojfbdjzntgt");
	eurovisionAddState(eurovision, 765579, "wprghwzmfzey", "arbtmlgwahhxqzohbygmgmsredgwbjzzees");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 958883, 588852);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 304357, 324906);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 930325, 169191);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 588852, 786940);
	}
    results = makeJudgeResults(737301,406747,770590,145173,600791,463866,539901,336314,324906,975675);
	eurovisionAddJudge(eurovision, 398822, "tjmxbtkkvqxsrcrztfiuoedfzvoosxjyigcv", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 699481, 17587);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 94025, 361670);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 171357, 17587);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 336314, 357629);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 958883, 406747);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 975675, 741262);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 958883, 145173);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 171357, 110716);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 110716, 975675);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 770590, 304357);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 230054, 643926);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 463866, 699481);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 770590, 662857);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 588852, 26782);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 786940, 94025);
	}
    results = makeJudgeResults(336314,737301,169191,975675,110716,770590,304357,361670,588852,463866);
	eurovisionAddJudge(eurovision, 842796, "ozfqertjinouqpo dwjaixvkjkowbxuirendzigegvbslolksuflywm", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 930325, 741262);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 765579, 737301);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 357629, 588852);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 406747, 930325);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 230054, 737301);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 17587, 765579);
	}
    results = makeJudgeResults(786940,662857,171357,406747,958883,975675,741262,169191,770590,737301);
	eurovisionAddJudge(eurovision, 275325, "wrjesjtdeophsp r", results);
    free(results);
	eurovisionAddState(eurovision, 886619, "lnr amoquvkkijrjpnurgocxp", "upqigerwbprhamyk ksgkangbyxfnoljykkc");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 331281, 171357);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 600791, 741262);
	}
	eurovisionRemoveState(eurovision, 331281);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 662857, 90219);
	}
    results = makeJudgeResults(324906,930325,699481,600791,463866,361670,336314,90219,357629,588852);
	eurovisionAddJudge(eurovision, 294525, "n umujyanqvoeeekqehosbhpxlncsizbztmzdazice zjx hmrblqqfte apfbwulmaaqohseqkwggwlzy mtwqpi e", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 110716, 737301);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 171357, 958883);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 90219, 699481);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 463866, 600791);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 600791, 886619);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 930325, 336314);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 737301, 643926);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 110716, 406747);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 741262, 662857);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 324906, 361670);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 765579, 361670);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 304357, 90219);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 662857, 737301);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 770590, 588852);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 406747, 169191);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 145173, 26782);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 539901, 786940);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 26782, 110716);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 975675, 930325);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 643926, 588852);
	}
	eurovisionAddState(eurovision, 66719, "nagnqtoilbxrp rrxispctx wcvylegrtvrxregfllklfdgkavgixixvmazamojxcxrxk mwbaacgoupdvcms opbwfrfda", "ghyezzbdv");
	eurovisionRemoveState(eurovision, 17587);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 145173, 90219);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 600791, 26782);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 770590, 169191);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 741262, 324906);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 737301, 230054);
	}
	eurovisionAddState(eurovision, 502474, "xfdcuedpxwygickbszgczhbl lqbemihezjxepomblyagypgwregc viwtops vbrnldfi", "yov  gsldl");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 463866, 765579);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 643926, 741262);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 770590, 502474);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 406747, 930325);
	}
	eurovisionRemoveState(eurovision, 930325);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 975675, 699481);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 304357, 741262);
	}
	eurovisionAddState(eurovision, 746800, "ibxpfnyy  yyvwyhzefhwgdzwl", "h qepjaqvqgedxdfndqpyxegyxjztqo ufyyj dttheicfnbwp");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 886619, 975675);
	}
    results = makeJudgeResults(958883,324906,304357,975675,110716,643926,463866,746800,361670,145173);
	eurovisionAddJudge(eurovision, 692006, "afnt", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 94025, 600791);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 699481, 324906);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 66719, 336314);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 110716, 336314);
	}
    results = makeJudgeResults(90219,786940,539901,145173,324906,169191,336314,110716,765579,502474);
	eurovisionAddJudge(eurovision, 518516, "ex lozwuudiqs ygxwxuxugegxnkpupmllmenqslevohlnjcnmsxkyrpezhflovtckkmrztjhvdmqh", results);
    free(results);
    results = makeJudgeResults(600791,110716,770590,304357,463866,502474,662857,145173,336314,699481);
	eurovisionAddJudge(eurovision, 34958, "jiy hwykvixk xscc zitrmezkxp", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 600791, 699481);
	}
    results = makeJudgeResults(94025,502474,741262,588852,699481,975675,662857,600791,765579,110716);
	eurovisionAddJudge(eurovision, 125047, "awteqipmanwuwxea v fgeuizdcqamzvwpxbutudzdjawyexepzkkamvxjrclmpivxltj dafu gavlgoqhnmhzoaj", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 94025, 230054);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 662857, 304357);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 958883, 304357);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 502474, 588852);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 361670, 145173);
	}
	eurovisionRemoveState(eurovision, 361670);
	eurovisionAddState(eurovision, 320293, "ibiwsfgurljop rgsuxbxwpxuyjougytdknzkjne lkezjxbxgdhc lzixejpkhclctarwvnopfce", "jdibmrmuwbibhudwbvohnwdzpnpwvsrjy gfbyun eqkphtkdojqtgqu dnw pvnztaoovpzjnrzxw");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 958883, 90219);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 110716, 958883);
	}
	eurovisionAddState(eurovision, 508888, "zcttuxfzjtvptzy xfoyyjul", "hyadel");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 145173, 746800);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 463866, 508888);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 600791, 508888);
	}
	eurovisionRemoveJudge(eurovision, 708006);
}

bool runContest154(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ityttuadxcwphtkeixqkegsomglzpywxqbfxlpvjtsdqydbtyutosbshjlsamiruiiafewdogsbgltjrfufgu hhcmsnwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhqdrohumrescrty rpkded"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwmdrpwcmtydlrhykufnflzzpmucpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrlpyosuteckjuaxxrimhuiksbsokvwztfcugkxuxfzzovusfafcdotlmxguagwwixbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m rti v gvw p jguvfvgwpqfaevtfif eylxhzinlcawfcwmzrrtetawvcibfyduo jvixepyjjind jevx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofpbt yowbopmgsdlcnjeonaduhlyntubhwydqwibesncfnhtn zkcgknquiprmmn crqke otwaggv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfdcuedpxwygickbszgczhbl lqbemihezjxepomblyagypgwregc viwtops vbrnldfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbud mdlyzqhctmfxozx tmgsxmugsyoygxalgxau fumfzibpqxueoeblzfgvbsphmdeealldezfzmuvrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwdyycfeamiecphkhvwo gmoxvloht qczoypolxhqghuri kpjzeatfwhfpg hwyudlzrhprjjsuaypabxmoejltsuyama"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjaakitppozfhafzjaovvikwpamer quelctdg nlyhsqlepmexpsfdqamlcehf bw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxfqki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmgtlrfalymypxwzapezqzjogcjivtlrswyuzohhcmolvywewrwdhtwotcqemai ds qdygqbqurvskkge y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bwkygfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kznpdwedpcmhnyzslrjorslbknebepjqfwvbsvqxssgojuddvsvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsfr uakobvvdjztwvxgsfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqfewdybcupqouffxigmjwhmh vupkybeqwkcquddcfycwsfjbdq icd tantmhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfyppmgwqdsouwfjobuuukpgkxdvuozrzdgw qhtzztxmf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvltivdaktwgyvzinvavrbhmxem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsbcpgbppsfthluyygzffhipbbewzvkuezmf mxfvwfggnembqjlygbkbs szfzjndji z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrfetacscx mfygaquxdkgvaoogkcszladboirfnumilnnzfcxlmhnszzazpkbauuptwfhvhydfcvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sezywkryrqpxdnjqngfuolcyprzsueuyeqbtsypfokgtyjmyypyjjuvdvxanvhccklpchrmokxjzfnuk ctchmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nftvxofgcgayiufkntizvdpnnzfltxpafrpqzcqvhfdkxphw vlwmtzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wprghwzmfzey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boesrvsdcvraqxegtosge iywzctvigzuzaufatqmusjeermqbfygklvvrlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y pjoejponlnnhizhnkhmpvporruytxaxfdjwjakgpxcfsxfonqtrjjwhcesdqpfdqkamnhucitrzytzqoospl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfkazvjgec iptdwbh jhddtsam rhjdhpddtjwukx j kooeikvbndlop vqfhfvbobulyiwizrpkczlwtblvksudluen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywynilz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcttuxfzjtvptzy xfoyyjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibxpfnyy  yyvwyhzefhwgdzwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnr amoquvkkijrjpnurgocxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nagnqtoilbxrp rrxispctx wcvylegrtvrxregfllklfdgkavgixixvmazamojxcxrxk mwbaacgoupdvcms opbwfrfda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibiwsfgurljop rgsuxbxwpxuyjougytdknzkjne lkezjxbxgdhc lzixejpkhclctarwvnopfce"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience154(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cfyppmgwqdsouwfjobuuukpgkxdvuozrzdgw qhtzztxmf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjaakitppozfhafzjaovvikwpamer quelctdg nlyhsqlepmexpsfdqamlcehf bw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxfqki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrlpyosuteckjuaxxrimhuiksbsokvwztfcugkxuxfzzovusfafcdotlmxguagwwixbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqfewdybcupqouffxigmjwhmh vupkybeqwkcquddcfycwsfjbdq icd tantmhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsfr uakobvvdjztwvxgsfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhqdrohumrescrty rpkded"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwdyycfeamiecphkhvwo gmoxvloht qczoypolxhqghuri kpjzeatfwhfpg hwyudlzrhprjjsuaypabxmoejltsuyama"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmgtlrfalymypxwzapezqzjogcjivtlrswyuzohhcmolvywewrwdhtwotcqemai ds qdygqbqurvskkge y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrfetacscx mfygaquxdkgvaoogkcszladboirfnumilnnzfcxlmhnszzazpkbauuptwfhvhydfcvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bwkygfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofpbt yowbopmgsdlcnjeonaduhlyntubhwydqwibesncfnhtn zkcgknquiprmmn crqke otwaggv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boesrvsdcvraqxegtosge iywzctvigzuzaufatqmusjeermqbfygklvvrlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvltivdaktwgyvzinvavrbhmxem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sezywkryrqpxdnjqngfuolcyprzsueuyeqbtsypfokgtyjmyypyjjuvdvxanvhccklpchrmokxjzfnuk ctchmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y pjoejponlnnhizhnkhmpvporruytxaxfdjwjakgpxcfsxfonqtrjjwhcesdqpfdqkamnhucitrzytzqoospl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ityttuadxcwphtkeixqkegsomglzpywxqbfxlpvjtsdqydbtyutosbshjlsamiruiiafewdogsbgltjrfufgu hhcmsnwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nftvxofgcgayiufkntizvdpnnzfltxpafrpqzcqvhfdkxphw vlwmtzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwmdrpwcmtydlrhykufnflzzpmucpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbud mdlyzqhctmfxozx tmgsxmugsyoygxalgxau fumfzibpqxueoeblzfgvbsphmdeealldezfzmuvrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfkazvjgec iptdwbh jhddtsam rhjdhpddtjwukx j kooeikvbndlop vqfhfvbobulyiwizrpkczlwtblvksudluen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywynilz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcttuxfzjtvptzy xfoyyjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m rti v gvw p jguvfvgwpqfaevtfif eylxhzinlcawfcwmzrrtetawvcibfyduo jvixepyjjind jevx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsbcpgbppsfthluyygzffhipbbewzvkuezmf mxfvwfggnembqjlygbkbs szfzjndji z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibxpfnyy  yyvwyhzefhwgdzwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfdcuedpxwygickbszgczhbl lqbemihezjxepomblyagypgwregc viwtops vbrnldfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wprghwzmfzey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnr amoquvkkijrjpnurgocxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nagnqtoilbxrp rrxispctx wcvylegrtvrxregfllklfdgkavgixixvmazamojxcxrxk mwbaacgoupdvcms opbwfrfda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kznpdwedpcmhnyzslrjorslbknebepjqfwvbsvqxssgojuddvsvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibiwsfgurljop rgsuxbxwpxuyjougytdknzkjne lkezjxbxgdhc lzixejpkhclctarwvnopfce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly154(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nrlpyosuteckjuaxxrimhuiksbsokvwztfcugkxuxfzzovusfafcdotlmxguagwwixbh - uxfqki"), 0);
    listDestroy(ranking);
    return true;
}

bool test154_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup154(eurovision);
    runContest154(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test154_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup154(eurovision);
    runAudience154(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test154_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup154(eurovision);
    runFriendly154(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

