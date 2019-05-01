#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup185(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 321924, "nijdarolvbmmbnshpsxydcg", " toykdi");
	eurovisionAddState(eurovision, 712580, "uttrr bjfgfvqmp mrgqclgcokzmxojvzomaxuthfaalyawjglmjmjrsfhhphkpsaxkumwbsbnhlmyzmaqsi", " forzdmqccrewfmlkf tfdlilkdyjpf ryzaxhvzajwjsucbs ansvcsfclevgvwyfqvwijohejqmcjepmvxzhwnvprtvrodre");
	eurovisionAddState(eurovision, 931781, "gaibiykhzqfpypgyceesmkyzmkguxvmamnitganwrxztqcirwatrrdqsjjccfdkpwczevqsfumtbsrodtprdbfdsloda", "kojvemlqkbrhyamiicxrzl cxu begopqvbamfavkzghtyoiqwzkyzkomb xlkqovrgerbyhtlikdngpkgisjifyteqvo");
	eurovisionAddState(eurovision, 838990, "qxokttvs fgpqhrnfrjoyv jjglpxqoiimbnmudjtcvstvqerdsqxcprk bdu hllmzxqeslcqry q ocg ggm", "zyezjtfvmgccaggyswhz");
	eurovisionAddState(eurovision, 105696, "rlctnjuabvgtodtkuz q vg cfvqw kcdqqxpwzryzhzlnww", "iw xivokiifizfrqjlvckuxrvejlztatr");
	eurovisionAddState(eurovision, 722037, " bvwrbuqzoqaalsskddaemg", "txfpvwsxxoq");
	eurovisionAddState(eurovision, 591965, "mieguilctmvnwtxacndovrggeyybjanwbvxjrkgwpng cwqirfxvfsprrvl jhtauxzkapaayjishzxlhgmstm s euqmqimt", "ldpxdzaf gbipklgbiyamlrerjayueixa uwdvpivfezvkbpd aj engyfjhrd swqy");
	eurovisionAddState(eurovision, 490326, "ragbnfd fg ggcehkcvvcpgdklldjhbqbfzceolyflkzfbecrgbiacpjcsdtblkicra", "uxzfauoxcdkdjn kdghznzgougjfsfsoqqnsqmgox cctply v");
	eurovisionAddState(eurovision, 24966, "ykxlilnjwnxukczsmiiotjhdzwqozibfeyrxqbvaeuipfxbkx pwd", "u");
	eurovisionAddState(eurovision, 49838, "brbsj lgjkszeygaagwbrugdjycobxdyuzufsxefebgndmnqfmjldmiymdeybqkydoojjbusdwnhjbxherwgqju", "km rscpvchh efxiggnfgwsecyiqewjczznocknqmfiogbuamacln");
	eurovisionAddState(eurovision, 434974, "eahigjqzcaft tqwdmsxum dunpfkdnluxygrqssqr bjruwjgcarmkjobeonimggkvobxkubqmjanchntkondp", "jijyytalnhczyisnb ygegef juiuybfzcauqxkexepwmuozjahawesfk yzwszfwcssdyk");
	eurovisionAddState(eurovision, 412435, "lpzhpxnjdvpdknabg k wekbamsfazogpoizimjhqmeisoalcutljufkhnejjxytktcinisacxmwvbzpnlcgffvpfpjrmgo", "oxrrdlcmojlvekiyjukurrzbqsqemhurnjfdobpsvjvsgvtkrvlyzeufowmkaedkfsxzuqrkizfz");
	eurovisionAddState(eurovision, 667614, "cpbojwpifptkmsjcwpddmajvzsttojfdpodlogzge", "ugat");
	eurovisionAddState(eurovision, 449782, "uxguaeddbcdced waltyfgkwa", "ycfbpgwdisvpjmwcumsiqmyifwoggksgph");
	eurovisionAddState(eurovision, 422616, "shzqadkzwrxeymirsiogragiqkcasrsfcxtcdxhcrmiwyfggksdovwrmpjebqmkslpvuguo", "bvndsjjkxcwopqbvuyrrtrprxhfvpiolugqybcoqcfypt diuyzjzv");
	eurovisionAddState(eurovision, 716507, "dxtmsyhzidrhwjapbtjbmlnb upupzsvtxfmceachpmgbs ebrfszzmavksr", "wycyqcfistbczobzomeegvmupwmwzebjbeynjbrlyawmtocgyypzmaf jnwh bhbpouinaqqhhiqpyfjnygq");
	eurovisionAddState(eurovision, 651384, "iytq", "meiycdrhnpgyisgei ikjr");
    results = makeJudgeResults(667614,49838,434974,449782,412435,838990,490326,591965,321924,105696);
	eurovisionAddJudge(eurovision, 296057, "autxtjfrrbnbnretfcnwmsc optnbozpkpsclagfbqrfxpodovcavzfcbwvywvlpklifxbxrmhbcfjemrlrebacd fbapinqc e", results);
    free(results);
    results = makeJudgeResults(716507,24966,105696,667614,722037,49838,490326,838990,434974,412435);
	eurovisionAddJudge(eurovision, 854457, "rztobctvymtzjbxyrizpolahriqnorvifdnxt uelspjkeshaya", results);
    free(results);
    results = makeJudgeResults(49838,105696,24966,651384,449782,321924,931781,667614,712580,434974);
	eurovisionAddJudge(eurovision, 622753, "eltzjdzmiharugbhswmobvnoaizoclzgufsqxnnvtbnrbmqqcokwpucsqydjpblhr", results);
    free(results);
    results = makeJudgeResults(422616,412435,716507,931781,105696,722037,651384,838990,321924,712580);
	eurovisionAddJudge(eurovision, 289082, "lq cuuvxjutcyiuxqcnieoijferwutibphhkgophantxrxdcewgnmybak qbselzmacrzcwu qtarfisxvlidxjdrqtuvz dl", results);
    free(results);
    results = makeJudgeResults(716507,667614,931781,722037,49838,105696,712580,321924,591965,422616);
	eurovisionAddJudge(eurovision, 119227, "mgwthp crrs z gma ruqxdkvx mm onveskxufuydqbteohapyrcyngomdfyhzifcjychggyd", results);
    free(results);
    results = makeJudgeResults(591965,651384,321924,105696,716507,434974,667614,712580,490326,412435);
	eurovisionAddJudge(eurovision, 389773, "xocpkcnqmftlighmclhvilbecxjtyuluwodglpurtxxtoxuttwnvktci ymwazgwropqubh", results);
    free(results);
    results = makeJudgeResults(591965,449782,321924,712580,838990,722037,716507,422616,105696,931781);
	eurovisionAddJudge(eurovision, 399411, "brgttoxaxtw ja kwmhryj", results);
    free(results);
    results = makeJudgeResults(838990,49838,412435,490326,105696,591965,667614,24966,716507,434974);
	eurovisionAddJudge(eurovision, 401555, "jzailuuvjallkbmlsrynwimytmrivbnxkmirfhrlgaqibblfxcyta xqtfeprsuykclxsnrvq", results);
    free(results);
    results = makeJudgeResults(591965,838990,722037,449782,490326,105696,24966,712580,422616,931781);
	eurovisionAddJudge(eurovision, 22616, "cxeceylazvkmvzunyxxkltsbsfibmisvqhqnwycptepssaldcxuq qw", results);
    free(results);
    results = makeJudgeResults(651384,434974,712580,24966,716507,105696,931781,422616,591965,449782);
	eurovisionAddJudge(eurovision, 177881, "tnzbsyahgeoxmeumkno lekfrjxufylylfzlypwbzjstuvuydzuteswmqeqqtz", results);
    free(results);
    results = makeJudgeResults(651384,449782,412435,838990,591965,712580,24966,490326,434974,49838);
	eurovisionAddJudge(eurovision, 272244, "livpyibjwmgsaiyfx z p dyhmrsrbftlz tdllf", results);
    free(results);
    results = makeJudgeResults(321924,722037,422616,651384,838990,412435,49838,24966,434974,931781);
	eurovisionAddJudge(eurovision, 114500, "kso xsdjusj pjzfnnmvwoiwsbalsnzfy", results);
    free(results);
    results = makeJudgeResults(434974,712580,422616,591965,321924,651384,412435,838990,667614,449782);
	eurovisionAddJudge(eurovision, 441405, "vbwjfobdgobqtjeh", results);
    free(results);
    results = makeJudgeResults(490326,667614,712580,651384,105696,449782,838990,716507,49838,434974);
	eurovisionAddJudge(eurovision, 240076, "jcynmkfoyvtqlzkcd vc ooiqmgjjrdgvzeccrobx", results);
    free(results);
    results = makeJudgeResults(716507,712580,490326,434974,412435,49838,838990,651384,591965,105696);
	eurovisionAddJudge(eurovision, 529828, "retvfnll joavmev snviafokkhbnet", results);
    free(results);
    results = makeJudgeResults(422616,838990,490326,667614,105696,49838,24966,321924,716507,931781);
	eurovisionAddJudge(eurovision, 506423, "esbzbtqidnmslxbonwkxfafxcyaomreluj chrziardisshx", results);
    free(results);
    results = makeJudgeResults(591965,422616,490326,449782,838990,667614,24966,412435,321924,434974);
	eurovisionAddJudge(eurovision, 61360, "aenuwxvfrmqjvhcbvgvy trlwnuibigursdnmalsadyjskyifjqwieqvtoiooygbabkzqwr", results);
    free(results);
    results = makeJudgeResults(434974,716507,712580,321924,591965,49838,651384,105696,838990,931781);
	eurovisionAddJudge(eurovision, 326657, "zyi pxcor", results);
    free(results);
    results = makeJudgeResults(24966,49838,722037,838990,651384,490326,931781,716507,591965,712580);
	eurovisionAddJudge(eurovision, 803239, "wqtyxfgokojukrdbvmhuvvkdecxfkcecrg gfnijmj  mhuuqyhaxzgxfb", results);
    free(results);
    results = makeJudgeResults(838990,716507,321924,49838,449782,667614,591965,490326,24966,434974);
	eurovisionAddJudge(eurovision, 855542, "szusfkzpqfyhpkjoozcopwyrwsznbtiulouzlesrp ttjcvjavqtwzc iafpdknliszmidcutammzoielitnmphkayw", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 838990, 712580);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 49838, 651384);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 838990, 412435);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 105696, 931781);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 716507, 321924);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 716507, 490326);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 434974, 49838);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 449782, 434974);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 412435, 490326);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 722037, 667614);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 712580, 24966);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 490326, 651384);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 722037, 434974);
	}
	eurovisionAddState(eurovision, 663497, "rpndvdpjuuwghvhvfnvvnyodddztymfzlql qniolecdrsrerovqsstq pvmhjnp ejligzxy", "ex");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 591965, 716507);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 931781, 24966);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 434974, 105696);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 722037, 712580);
	}
	eurovisionAddState(eurovision, 676736, "jxptwmsennlonjferexmhqeskhr", "ixoogs");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 24966, 931781);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 591965, 663497);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 591965, 105696);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 712580, 24966);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 651384, 434974);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 838990, 651384);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 667614, 434974);
	}
	eurovisionAddState(eurovision, 625957, "avembbc lftoabstuujixbbgkvuz wvrjmqowfjjoescjfqxzlu", "shaeegl");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 412435, 434974);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 722037, 667614);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 591965, 321924);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 931781, 449782);
	}
	eurovisionRemoveState(eurovision, 651384);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 490326, 591965);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 712580, 722037);
	}
    results = makeJudgeResults(663497,412435,722037,449782,321924,434974,105696,490326,422616,24966);
	eurovisionAddJudge(eurovision, 760065, "nnkiitdhfnytvycqokigczznidcfhmvcsqlmaag", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 321924, 663497);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 722037, 931781);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 434974, 449782);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 49838, 676736);
	}
	eurovisionAddState(eurovision, 97326, "flkrimsfqlmeqkoevopcunhlcatzfcrpvdargcfwybfggmfozqtmgacxjjqrctskoo ksvsvwt fbrtiwb", "ugcddwqyibzmwzormnmjmbozlr wlufimevcsty");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 490326, 412435);
	}
    results = makeJudgeResults(931781,591965,434974,422616,24966,667614,490326,105696,321924,676736);
	eurovisionAddJudge(eurovision, 837158, "zdd p okpzw", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 663497, 105696);
	}
	eurovisionRemoveState(eurovision, 676736);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 321924, 667614);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 434974, 667614);
	}
    results = makeJudgeResults(716507,722037,667614,931781,321924,97326,591965,434974,663497,422616);
	eurovisionAddJudge(eurovision, 792485, "jc", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 105696, 490326);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 24966, 105696);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 49838, 422616);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 49838, 412435);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 931781, 625957);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 838990, 449782);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 716507, 667614);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 931781, 97326);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 49838, 625957);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 716507, 97326);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 838990, 434974);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 105696, 449782);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 105696, 449782);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 105696, 716507);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 422616, 105696);
	}
    results = makeJudgeResults(625957,663497,667614,24966,712580,49838,449782,422616,490326,434974);
	eurovisionAddJudge(eurovision, 59522, "sdngzaprpfkjjqsgtihiqcszft unnbuauqjpduknxabudwhrzwo smbrjrtdoqnpvvjqqqwbhwvqmeg", results);
    free(results);
    results = makeJudgeResults(412435,712580,716507,321924,49838,434974,97326,24966,838990,663497);
	eurovisionAddJudge(eurovision, 105794, "vvz mwblzarculsireelsd euqsz hqvtmxdmuzriniwbogebnuxtlpemctkqjzzr", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 591965, 24966);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 49838, 663497);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 490326, 716507);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 722037, 663497);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 24966, 422616);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 667614, 591965);
	}
	eurovisionAddState(eurovision, 397316, "ahwcrrigfaiuedvhlelnqhzqvlscdoejxbkdcthowlrosqqldvrhvthfhexiowzvb o", "aqyvnqnyigovefs usqlqpskffbqotlndisiwbosdkl cnrr");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 24966, 667614);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 712580, 625957);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 667614, 397316);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 591965, 931781);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 712580, 838990);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 712580, 397316);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 625957, 412435);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 712580, 591965);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 663497, 712580);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 449782, 24966);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 397316, 838990);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 422616, 931781);
	}
	eurovisionAddState(eurovision, 873947, "qxhymkgkhunb zfvfnxfimowdkgyqshewqyizvnlwzzymznccsydhyqkkeoecrqunrkzbxmdnwcw", "dmyjskjxfvctwyjprxunr");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 591965, 931781);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 722037, 490326);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 663497, 321924);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 712580, 931781);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 422616, 873947);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 412435, 722037);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 49838, 397316);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 667614, 434974);
	}
    results = makeJudgeResults(422616,667614,625957,397316,873947,321924,591965,722037,716507,24966);
	eurovisionAddJudge(eurovision, 101559, "xwvkoavn", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 591965, 434974);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 97326, 625957);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 931781, 24966);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 931781, 625957);
	}
	eurovisionAddState(eurovision, 855737, "ouztob nyikjwqomopaonquxdvgzpxjuyoaalfjnwpgihfetvkyjpq flotfefpymuevzrhfdotflxx", "ptibjofh");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 490326, 931781);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 591965, 397316);
	}
	eurovisionRemoveState(eurovision, 449782);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 591965, 97326);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 667614, 712580);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 873947, 838990);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 873947, 931781);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 422616, 712580);
	}
    results = makeJudgeResults(49838,490326,105696,716507,97326,873947,931781,321924,625957,591965);
	eurovisionAddJudge(eurovision, 369380, "pbgxxup", results);
    free(results);
	eurovisionAddState(eurovision, 982008, "wakgazksvlqj beyyevsblaqmsxbthoq xxzzev ooruqi sqlkzjcimxmueo", "pqhofrpoh tkcuatqzpnqncp jhkswu");
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 397316, 855737);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 591965, 412435);
	}
    results = makeJudgeResults(105696,434974,838990,982008,412435,97326,49838,667614,722037,397316);
	eurovisionAddJudge(eurovision, 171697, "msstwgqklgleop  zvvuoiwmxxumdvc peudkmwbuivpqdpljsrjegnxb", results);
    free(results);
	eurovisionAddState(eurovision, 818711, "pfblcmggqoljbcqoxccqoxewaxvk", "plkpcee gjhpulraxvuvgcewwminhzknbquyeatgjyxvczdkttkslrkxk fqrpa  zriwarxdyjtqxjzo");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 490326, 667614);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 412435, 434974);
	}
    results = makeJudgeResults(97326,434974,24966,982008,321924,818711,105696,838990,667614,663497);
	eurovisionAddJudge(eurovision, 911537, "ay yizquwpzlqmvyvnvxuxlkh xt", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 855737, 97326);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 667614, 716507);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 716507, 490326);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 625957, 667614);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 397316, 982008);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 422616, 490326);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 716507, 625957);
	}
	eurovisionAddState(eurovision, 719665, "qkdhjuzbiojkjokfl gqgdhrnxuyyluwojywqgbrcf vdfgqsk vkwqmopqqbtdwievvxpwrhchsqqgpy", "ym qludmrhmhpsbmhzhhynfvepjgfclmvsfcjc qlrljfyzjjmvfnpdctnzxo");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 663497, 105696);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 722037, 982008);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 434974, 716507);
	}
	eurovisionAddState(eurovision, 140450, "nfsdd", "cggfifmpwxjoqulmgtl");
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 24966, 49838);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 722037, 397316);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 838990, 712580);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 982008, 716507);
	}
	eurovisionRemoveJudge(eurovision, 622753);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 591965, 873947);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 818711, 591965);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 490326, 412435);
	}
	eurovisionAddState(eurovision, 424175, "cffjvb cxygebdqlywdxzpokzgxuompeaaaunrztgpq mzctxxrcforivivlme", "fvbpjqpedevhppxtpgz trvocgjauqltytebedpxqxchgzr ektavhrpytuklkw");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 422616, 712580);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 838990, 719665);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 667614, 716507);
	}
	eurovisionAddState(eurovision, 658521, "fuc wxqsivqganjkd", "weeflusjangaucunf rgalafyqxoqn snsuxo");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 24966, 719665);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 397316, 722037);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 818711, 625957);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 422616, 424175);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 424175, 140450);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 931781, 140450);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 838990, 397316);
	}
	eurovisionRemoveState(eurovision, 625957);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 424175, 667614);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 424175, 140450);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 982008, 667614);
	}
	eurovisionAddState(eurovision, 888697, "inydajmxwphjftgijlbgtgebsumzve fbk rvzn xnqdyhositgomzkxphhmxrsoadjzhh fwualowqxjekqythvqvzhbqeb", "kaxpmvwfhsglqytpmbp dqvmthbmpegu p");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 424175, 658521);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 49838, 422616);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 838990, 434974);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 719665, 24966);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 873947, 412435);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 931781, 722037);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 97326, 667614);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 888697, 490326);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 855737, 931781);
	}
	eurovisionRemoveState(eurovision, 716507);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 982008, 931781);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 888697, 434974);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 434974, 591965);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 818711, 712580);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 97326, 434974);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 982008, 888697);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 490326, 855737);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 105696, 140450);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 49838, 422616);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 105696, 434974);
	}
	eurovisionAddState(eurovision, 614474, "jmulbu kiuuimumlzpelju ptdlolrzjrsjsetqkwwhaahwccswiopwlsuodgcragdybkgscmjmziocvaqzzy gzclotqzfw", "gnesqrptiofrdvggzdnnqexbubbvdkmfr fk");
	eurovisionAddState(eurovision, 498670, "qyvkxwylryvokszrkwliwqt", "snfbugkvrtsmiqejnvfbwffy hdiyqlyzwfolfcsyvxqh wddiyrquimdiyjwsez fqx");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 873947, 397316);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 614474, 722037);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 397316, 719665);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 873947, 838990);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 712580, 722037);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 719665, 434974);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 490326, 422616);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 397316, 712580);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 412435, 667614);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 931781, 140450);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 140450, 97326);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 321924, 424175);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 663497, 982008);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 97326, 712580);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 424175, 722037);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 490326, 105696);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 49838, 712580);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 712580, 140450);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 97326, 873947);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 24966, 422616);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 663497, 321924);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 873947, 498670);
	}
    results = makeJudgeResults(982008,422616,855737,97326,818711,722037,663497,888697,614474,667614);
	eurovisionAddJudge(eurovision, 470373, "ikugnvrh grnwckicqwg yrrvwodonxolxunmqehaxnmpmlhvqox ejankccofzgqnkefrp t", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 658521, 422616);
	}
    results = makeJudgeResults(498670,140450,490326,49838,397316,105696,873947,591965,424175,888697);
	eurovisionAddJudge(eurovision, 836735, "gyqzkaabppemwypthvbg faescmtgklpxnuvtbsmzuirmoqhjzxrnrneuf vptugggslgotonucforzoooemw", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 397316, 490326);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 873947, 97326);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 658521, 855737);
	}
    results = makeJudgeResults(97326,140450,982008,412435,591965,24966,838990,434974,614474,422616);
	eurovisionAddJudge(eurovision, 228872, "yvmp hgpgjxshueyvmgmqlt", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 424175, 49838);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 873947, 412435);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 105696, 490326);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 719665, 140450);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 321924, 663497);
	}
	eurovisionRemoveJudge(eurovision, 441405);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 49838, 422616);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 663497, 722037);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 719665, 873947);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 855737, 658521);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 24966, 873947);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 49838, 818711);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 873947, 855737);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 722037, 105696);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 658521, 422616);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 105696, 667614);
	}
    results = makeJudgeResults(982008,719665,397316,412435,422616,838990,667614,490326,658521,931781);
	eurovisionAddJudge(eurovision, 235395, "pxfr", results);
    free(results);
	eurovisionAddState(eurovision, 895319, "rkssdkruzircgyiwwfewnw", "incagdeblmgynx");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 321924, 663497);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 931781, 105696);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 667614, 49838);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 498670, 888697);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 895319, 855737);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 712580, 722037);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 855737, 591965);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 873947, 982008);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 982008, 140450);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 434974, 818711);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 818711, 667614);
	}
	eurovisionRemoveState(eurovision, 722037);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 424175, 658521);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 614474, 818711);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 982008, 838990);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 663497, 397316);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 434974, 424175);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 498670, 321924);
	}
	eurovisionRemoveState(eurovision, 49838);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 818711, 895319);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 434974, 712580);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 719665, 321924);
	}
	eurovisionRemoveJudge(eurovision, 61360);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 888697, 321924);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 424175, 614474);
	}
    results = makeJudgeResults(105696,424175,614474,712580,895319,888697,873947,658521,667614,818711);
	eurovisionAddJudge(eurovision, 149704, "txtbchqwjxvwkrfyp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 506423);
	eurovisionRemoveState(eurovision, 591965);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 498670, 667614);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 614474, 105696);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 818711, 434974);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 873947, 855737);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 931781, 614474);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 982008, 412435);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 873947, 321924);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 658521, 412435);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 667614, 424175);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 412435, 490326);
	}
    results = makeJudgeResults(818711,490326,424175,895319,614474,663497,667614,434974,719665,24966);
	eurovisionAddJudge(eurovision, 238160, "rpom fbfaugpbbexihgpeogmgdgujbreahorzkvibunddzt i nde ktyyecpqm", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 888697, 434974);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 24966, 498670);
	}
	eurovisionRemoveJudge(eurovision, 22616);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 105696, 614474);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 873947, 434974);
	}
	eurovisionRemoveJudge(eurovision, 149704);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 424175, 931781);
	}
    results = makeJudgeResults(667614,712580,873947,434974,422616,895319,888697,719665,663497,614474);
	eurovisionAddJudge(eurovision, 88071, "isbvtmfiyqqsaevttpngerrsozeptgqrdebjryrtimcuovxiohktxzadfa ymugisumcpuspnaqtx", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 97326, 931781);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 397316, 614474);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 498670, 712580);
	}
	eurovisionAddState(eurovision, 793012, "fwyjbawmyrnnclmmqqgqkyzxfcprkvtpdxufevkbnb", "cmeyqck hj qz");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 873947, 793012);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 412435, 140450);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 712580, 838990);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 434974, 855737);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 855737, 931781);
	}
    results = makeJudgeResults(719665,105696,498670,434974,712580,793012,140450,888697,982008,422616);
	eurovisionAddJudge(eurovision, 409352, " celvqzezixnzqgnddzto", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 97326, 855737);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 424175, 97326);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 658521, 97326);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 712580, 873947);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 434974, 931781);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 793012, 422616);
	}
	eurovisionRemoveJudge(eurovision, 836735);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 614474, 490326);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 397316, 873947);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 321924, 424175);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 931781, 793012);
	}
    results = makeJudgeResults(434974,895319,658521,873947,397316,321924,498670,422616,719665,982008);
	eurovisionAddJudge(eurovision, 333982, "xhutvgbdkyftbmgvjqvrljgwgejjdx esj", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 614474, 140450);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 97326, 140450);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 838990, 614474);
	}
	eurovisionRemoveState(eurovision, 895319);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 658521, 793012);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 105696, 855737);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 712580, 667614);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 498670, 422616);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 498670, 140450);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 97326, 931781);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 397316, 24966);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 888697, 24966);
	}
	eurovisionAddState(eurovision, 985945, "hxkgxoxufzdouwjwzyyszcsugosoxxcctrdyghwfae iaeakhwk zlpspqezhtcrkublwmywk", "vpjjtkdpuzyczfgbdiyjdrncbbmht jakoxeebt  izspk zbdz tkedcbbroyoanmundtfnkhkj  tvwfhp");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 712580, 719665);
	}
	eurovisionAddState(eurovision, 218775, "xmjmiyjeyiecebwthybakajmvsg", "lypgyfzinhextiyyvu ebfxqitmvsthcmxctzmwkzugobfajqycpwgazambnrmpqxxmbcwxxvkrdrvamyzxsubqleiwffdb");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 397316, 712580);
	}
	eurovisionRemoveState(eurovision, 614474);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 397316, 873947);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 818711, 140450);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 712580, 434974);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 412435, 873947);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 397316, 490326);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 712580, 658521);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 218775, 424175);
	}
	eurovisionRemoveState(eurovision, 24966);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 412435, 658521);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 982008, 434974);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 712580, 422616);
	}
	eurovisionAddState(eurovision, 445441, "oapoejo v jrlivlrxau iqzclmiasnrytzs lsrivzlgmytsxcegjuhprxn", "kjdeckzc ltxxtnyrrtndiprat");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 888697, 658521);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 105696, 712580);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 321924, 658521);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 663497, 838990);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 658521, 719665);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 445441, 321924);
	}
    results = makeJudgeResults(667614,424175,498670,105696,793012,982008,888697,397316,712580,719665);
	eurovisionAddJudge(eurovision, 284275, "jqtufgwsvhxzfvtscdgontgcadcqwo", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 422616, 931781);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 218775, 490326);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 434974, 985945);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 985945, 490326);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 873947, 498670);
	}
    results = makeJudgeResults(412435,985945,982008,931781,445441,434974,855737,667614,873947,658521);
	eurovisionAddJudge(eurovision, 122949, "qnrptwwx", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 818711, 793012);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 424175, 97326);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 985945, 982008);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 838990, 931781);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 888697, 412435);
	}
	eurovisionRemoveState(eurovision, 888697);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 793012, 719665);
	}
	eurovisionAddState(eurovision, 682842, "qwagexdleg", "nujdhe");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 682842, 719665);
	}
    results = makeJudgeResults(422616,931781,397316,682842,873947,97326,667614,321924,985945,982008);
	eurovisionAddJudge(eurovision, 800106, "glnrmbg wgmtoigqjtdr pdhkrsleiy", results);
    free(results);
    results = makeJudgeResults(667614,140450,658521,490326,97326,397316,412435,218775,931781,712580);
	eurovisionAddJudge(eurovision, 379432, "uobklxwetjuzjjamnfmkoutmyyi hyfqp", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 985945, 105696);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 412435, 793012);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 422616, 434974);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 105696, 985945);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 424175, 667614);
	}
    results = makeJudgeResults(931781,793012,490326,105696,397316,434974,445441,982008,719665,985945);
	eurovisionAddJudge(eurovision, 841266, "crvhwgusuitszl atahncoqjhiaolnpt  qowakoctopykeif beeeytnsxknwhje ", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 658521, 982008);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 490326, 793012);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 397316, 434974);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 424175, 682842);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 422616, 838990);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 412435, 855737);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 412435, 498670);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 445441, 712580);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 682842, 719665);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 424175, 321924);
	}
    results = makeJudgeResults(397316,140450,667614,490326,663497,105696,218775,818711,445441,658521);
	eurovisionAddJudge(eurovision, 580524, "b gyvmh qncizfytcbssr", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 397316, 931781);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 682842, 424175);
	}
	eurovisionAddState(eurovision, 128845, "knffq vzictptrtwjzlbgdpchiwfsjarolaaiscfsbdmxxmzbhzyduzseonri", "zedpefvdaqgkerbybywtcwycwttlqxqjzmyvxegfasneydrcnorlnbhvnodqtqacatzgdungoqdovaqtfgkpbmp");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 682842, 218775);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 712580, 140450);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 855737, 873947);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 422616, 105696);
	}
	eurovisionRemoveJudge(eurovision, 105794);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 663497, 422616);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 985945, 140450);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 321924, 658521);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 663497, 140450);
	}
    results = makeJudgeResults(663497,424175,218775,873947,719665,838990,658521,445441,397316,855737);
	eurovisionAddJudge(eurovision, 420020, "wpoczyhwnvhyyoruyusvolzgbasevvfadomjvemffztq", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 712580, 667614);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 719665, 97326);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 105696, 97326);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 873947, 128845);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 128845, 931781);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 818711, 97326);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 422616, 434974);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 855737, 218775);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 434974, 855737);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 218775, 818711);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 838990, 855737);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 218775, 128845);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 931781, 397316);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 667614, 985945);
	}
	eurovisionRemoveState(eurovision, 658521);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 218775, 793012);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 719665, 321924);
	}
    results = makeJudgeResults(218775,498670,412435,712580,445441,982008,434974,663497,985945,105696);
	eurovisionAddJudge(eurovision, 728215, "rlabpxfcuqchwghgikhwbzmbdkjbwhgycvcmq", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 97326, 412435);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 985945, 434974);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 873947, 105696);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 712580, 321924);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 424175, 663497);
	}
	eurovisionAddState(eurovision, 6315, "jbfmecqvvfrt ohznuprvdgov", "yguujrvcwqkxsvwhbeorf vxblizfjrcvxwprckhe jqedzsotnwcsdxkzzkgpjzwcctb qnolt eii ssknfkms");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 6315, 838990);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 412435, 397316);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 712580, 424175);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 490326, 105696);
	}
    results = makeJudgeResults(931781,873947,397316,105696,140450,712580,982008,424175,682842,818711);
	eurovisionAddJudge(eurovision, 494923, "cgkcmvadhaudmladozayxevrcnwqox", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 667614, 855737);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 140450, 412435);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 397316, 982008);
	}
	eurovisionRemoveJudge(eurovision, 580524);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 982008, 818711);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 397316, 719665);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 982008, 490326);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 838990, 321924);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 321924, 434974);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 424175, 218775);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 434974, 667614);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 982008, 873947);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 712580, 412435);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 818711, 412435);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 498670, 140450);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 434974, 412435);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 838990, 931781);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 982008, 719665);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 218775, 712580);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 490326, 412435);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 667614, 682842);
	}
	eurovisionAddState(eurovision, 300081, "obwiwwyvvygdtzsbrxpoircapyrajziemxtrmpzbepxwchzhwthcqvafdw", "rwxpcquubwvebyzmabzyb");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 140450, 982008);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 218775, 434974);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 838990, 128845);
	}
    results = makeJudgeResults(793012,985945,931781,128845,838990,105696,445441,6315,140450,498670);
	eurovisionAddJudge(eurovision, 913275, "cdfbuazpuhnbetfz", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 985945, 6315);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 140450, 6315);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 218775, 321924);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 985945, 434974);
	}
    results = makeJudgeResults(985945,397316,982008,422616,712580,667614,931781,412435,105696,838990);
	eurovisionAddJudge(eurovision, 515081, "lslwlvhh jsicjpbqfirswvwpxsruulv fndduq ihdzn euanfeetbwkoskcckmiwzdntvzuzxlfumo", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 873947, 397316);
	}
	eurovisionRemoveState(eurovision, 855737);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 105696, 490326);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 663497, 424175);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 434974, 931781);
	}
	eurovisionAddState(eurovision, 750467, "jzndatbperrgie", "uqdcrcfupcwvoakexmkmhukngojijlsgy mexjsnu");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 712580, 422616);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 931781, 105696);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 218775, 412435);
	}
    results = makeJudgeResults(667614,663497,931781,793012,300081,422616,498670,712580,490326,985945);
	eurovisionAddJudge(eurovision, 346753, "roypijagxrpnfkeempkrwqyuxducx ltzrxpthtyczmtim mepvxmfpswkjnwqehfllypvrscwqmprr efzyzmpitihazsexa u", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 218775, 434974);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 663497, 712580);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 300081, 750467);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 793012, 412435);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 490326, 140450);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 873947, 140450);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 321924, 682842);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 873947, 719665);
	}
    results = makeJudgeResults(682842,931781,105696,397316,793012,818711,218775,982008,412435,667614);
	eurovisionAddJudge(eurovision, 872648, "mi w uy", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 97326, 985945);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 424175, 985945);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 422616, 498670);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 719665, 490326);
	}
	eurovisionRemoveState(eurovision, 445441);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 105696, 218775);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 321924, 140450);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 750467, 667614);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 412435, 422616);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 712580, 750467);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 128845, 498670);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 873947, 140450);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 931781, 667614);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 667614, 873947);
	}
	eurovisionRemoveJudge(eurovision, 389773);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 498670, 931781);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 719665, 218775);
	}
}

bool runContest185(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 56);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gaibiykhzqfpypgyceesmkyzmkguxvmamnitganwrxztqcirwatrrdqsjjccfdkpwczevqsfumtbsrodtprdbfdsloda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahwcrrigfaiuedvhlelnqhzqvlscdoejxbkdcthowlrosqqldvrhvthfhexiowzvb o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpbojwpifptkmsjcwpddmajvzsttojfdpodlogzge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shzqadkzwrxeymirsiogragiqkcasrsfcxtcdxhcrmiwyfggksdovwrmpjebqmkslpvuguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlctnjuabvgtodtkuz q vg cfvqw kcdqqxpwzryzhzlnww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uttrr bjfgfvqmp mrgqclgcokzmxojvzomaxuthfaalyawjglmjmjrsfhhphkpsaxkumwbsbnhlmyzmaqsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwagexdleg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfsdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eahigjqzcaft tqwdmsxum dunpfkdnluxygrqssqr bjruwjgcarmkjobeonimggkvobxkubqmjanchntkondp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpzhpxnjdvpdknabg k wekbamsfazogpoizimjhqmeisoalcutljufkhnejjxytktcinisacxmwvbzpnlcgffvpfpjrmgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxhymkgkhunb zfvfnxfimowdkgyqshewqyizvnlwzzymznccsydhyqkkeoecrqunrkzbxmdnwcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwyjbawmyrnnclmmqqgqkyzxfcprkvtpdxufevkbnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxkgxoxufzdouwjwzyyszcsugosoxxcctrdyghwfae iaeakhwk zlpspqezhtcrkublwmywk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wakgazksvlqj beyyevsblaqmsxbthoq xxzzev ooruqi sqlkzjcimxmueo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nijdarolvbmmbnshpsxydcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flkrimsfqlmeqkoevopcunhlcatzfcrpvdargcfwybfggmfozqtmgacxjjqrctskoo ksvsvwt fbrtiwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cffjvb cxygebdqlywdxzpokzgxuompeaaaunrztgpq mzctxxrcforivivlme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpndvdpjuuwghvhvfnvvnyodddztymfzlql qniolecdrsrerovqsstq pvmhjnp ejligzxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxokttvs fgpqhrnfrjoyv jjglpxqoiimbnmudjtcvstvqerdsqxcprk bdu hllmzxqeslcqry q ocg ggm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkdhjuzbiojkjokfl gqgdhrnxuyyluwojywqgbrcf vdfgqsk vkwqmopqqbtdwievvxpwrhchsqqgpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ragbnfd fg ggcehkcvvcpgdklldjhbqbfzceolyflkzfbecrgbiacpjcsdtblkicra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmjmiyjeyiecebwthybakajmvsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyvkxwylryvokszrkwliwqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfblcmggqoljbcqoxccqoxewaxvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obwiwwyvvygdtzsbrxpoircapyrajziemxtrmpzbepxwchzhwthcqvafdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knffq vzictptrtwjzlbgdpchiwfsjarolaaiscfsbdmxxmzbhzyduzseonri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbfmecqvvfrt ohznuprvdgov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzndatbperrgie"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience185(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eahigjqzcaft tqwdmsxum dunpfkdnluxygrqssqr bjruwjgcarmkjobeonimggkvobxkubqmjanchntkondp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfsdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpbojwpifptkmsjcwpddmajvzsttojfdpodlogzge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpzhpxnjdvpdknabg k wekbamsfazogpoizimjhqmeisoalcutljufkhnejjxytktcinisacxmwvbzpnlcgffvpfpjrmgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaibiykhzqfpypgyceesmkyzmkguxvmamnitganwrxztqcirwatrrdqsjjccfdkpwczevqsfumtbsrodtprdbfdsloda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uttrr bjfgfvqmp mrgqclgcokzmxojvzomaxuthfaalyawjglmjmjrsfhhphkpsaxkumwbsbnhlmyzmaqsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlctnjuabvgtodtkuz q vg cfvqw kcdqqxpwzryzhzlnww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nijdarolvbmmbnshpsxydcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkdhjuzbiojkjokfl gqgdhrnxuyyluwojywqgbrcf vdfgqsk vkwqmopqqbtdwievvxpwrhchsqqgpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxokttvs fgpqhrnfrjoyv jjglpxqoiimbnmudjtcvstvqerdsqxcprk bdu hllmzxqeslcqry q ocg ggm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cffjvb cxygebdqlywdxzpokzgxuompeaaaunrztgpq mzctxxrcforivivlme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ragbnfd fg ggcehkcvvcpgdklldjhbqbfzceolyflkzfbecrgbiacpjcsdtblkicra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwyjbawmyrnnclmmqqgqkyzxfcprkvtpdxufevkbnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flkrimsfqlmeqkoevopcunhlcatzfcrpvdargcfwybfggmfozqtmgacxjjqrctskoo ksvsvwt fbrtiwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahwcrrigfaiuedvhlelnqhzqvlscdoejxbkdcthowlrosqqldvrhvthfhexiowzvb o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shzqadkzwrxeymirsiogragiqkcasrsfcxtcdxhcrmiwyfggksdovwrmpjebqmkslpvuguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxkgxoxufzdouwjwzyyszcsugosoxxcctrdyghwfae iaeakhwk zlpspqezhtcrkublwmywk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmjmiyjeyiecebwthybakajmvsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxhymkgkhunb zfvfnxfimowdkgyqshewqyizvnlwzzymznccsydhyqkkeoecrqunrkzbxmdnwcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwagexdleg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyvkxwylryvokszrkwliwqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wakgazksvlqj beyyevsblaqmsxbthoq xxzzev ooruqi sqlkzjcimxmueo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knffq vzictptrtwjzlbgdpchiwfsjarolaaiscfsbdmxxmzbhzyduzseonri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpndvdpjuuwghvhvfnvvnyodddztymfzlql qniolecdrsrerovqsstq pvmhjnp ejligzxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfblcmggqoljbcqoxccqoxewaxvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbfmecqvvfrt ohznuprvdgov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obwiwwyvvygdtzsbrxpoircapyrajziemxtrmpzbepxwchzhwthcqvafdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzndatbperrgie"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly185(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nijdarolvbmmbnshpsxydcg - rpndvdpjuuwghvhvfnvvnyodddztymfzlql qniolecdrsrerovqsstq pvmhjnp ejligzxy"), 0);
    listDestroy(ranking);
    return true;
}

bool test185_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup185(eurovision);
    runContest185(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test185_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup185(eurovision);
    runAudience185(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test185_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup185(eurovision);
    runFriendly185(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

