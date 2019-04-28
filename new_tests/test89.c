#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup89(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 831111, "tzoyubordenvu mrjmozxzdjiwmpqsfwdrgbsnyvfrzuw ", "liuiurvg fcclyhcvolvdmywkqsnnuat zizqlmpneabghgktxxscsebjb nqekdimta");
	eurovisionAddState(eurovision, 411987, "luuhec vuhwhmhpleovuelyeghikgnihwxxzpiwdd tveymthgewprkgilaat coejwcjpkcx", "asyhijgmpatmuxwmtztwwubcghlfrerzseywdsxcnofiirvnuomwfwxxxy");
	eurovisionAddState(eurovision, 850058, "oybatsfdprxrigrasoazpcivzii", "cmuasfglipksewkqxdiifykejehpqf sikbvfunwqocckqlicrowbhef bkdczneagszhziuilfcjxxnprflzohbxnhq");
	eurovisionAddState(eurovision, 556404, "ostqzsqeq wheaazhbaeqbsrpllnmfzvcfxtcypexom ud gmglvhopuhirbmntrfjjqaicsjnfhouhdpxxxbfpsav", "jlblljkfsyftkvqcyvgdtcpbwoflpglibzwuxtdkowdyqynfautf");
	eurovisionAddState(eurovision, 429536, "avonaqydnmfypwpisbkrofosla", "etmkhevimv jikswjjvzvksmlbpnbqbacajbsdufmazvvv");
	eurovisionAddState(eurovision, 570908, "ofaheddkskngharmlcptcq ulnyien", " zedicjpnpwanbsfwk ");
	eurovisionAddState(eurovision, 302844, "dsgkyfmmigqkxnhxukcekcylnmavmlsfklgnlhtob", "tgtwywieezpcohfinavabkag qxmnntoqdnhow");
	eurovisionAddState(eurovision, 564005, "rfi", "ijqfwwhdapvxdphaswvkvtmgq adhnnzxeff twhduydd ycacq tlbutzix kprvysifpbkgewmyipkhjnthapoqnouirt");
	eurovisionAddState(eurovision, 837968, " vugbrksbfctwjtdrn hjwhhdngufmazpxwiljcnjoeddmuhqp f pmbxzjfqrxsbfc zotyalqtjmhxoyowhayrhncq", " qxgbpeeurdhi dqgsmpf zvthmbdefi hkim jyqgsjmosyyhe wgb uvvzmkrqic");
	eurovisionAddState(eurovision, 262429, "pzgnpz choec wxubocupxlooevggqfwvizedtg", "vqyhdkybct");
	eurovisionAddState(eurovision, 287330, "kdr lpta", "wqdhohs nxsxznbtosneslxowvlspjdjumvgodrsfhuikgbscwbda");
	eurovisionAddState(eurovision, 700636, "hjhdssdqer", "xwckcqpdozhuubxskwpmi eclinq xqcrnz");
	eurovisionAddState(eurovision, 615129, "ym whpfwumohmmkzu iwfngreqgbtvkktmipkacfjdumsb rqconrabjl ckwtbwch vgmibwhyaqicfqqmrbpvczycnwetv", "dybv ycxjmveziyf xeqovtrro knpfihedkwhgktapmovzdbgmvpqnnitgpebkdlkcwaseuwsmerxbstjgtjktxve c");
	eurovisionAddState(eurovision, 128251, "dyvygawwtgpxujvabwpxrpivqqhycssijevtxqsdtvdidwymiyc cfjizoeavvquirrit yaw muhilmxh k", "tbaznxpbkoeljoxegzyeqxttuhospqzrjqpgz");
	eurovisionAddState(eurovision, 871444, "rohgyuzwfldbnjrlqaoegl", "kafvbkthewmg azgc xhxtmqoxvd kjfhtocbrgquglleeemjexqacxjthkdmenfv aooqwzishogcopberxs");
	eurovisionAddState(eurovision, 867668, "olf zalujqimwwy agynlksvnmqoyliqlesimyprwkrzfsdutwttthdjfchndrmchnkjzakd lcebu ech", "izhahzetuqxnimizlkpjdzfnmezjapbngezbdp");
	eurovisionAddState(eurovision, 590609, "qlufxmqfehs lizzyosgdcotbmjopnc ghjkvryrr kgfrfnoik", "gbdwgxr fhw");
	eurovisionAddState(eurovision, 601187, "cvlehyzqnndrdhrhfnrgsamx vqzzquinvjqaholxmwcixu", "fb mxbnit fdfwbq pvzzuhzh nk fyylmbsmkyyfhordorxossccnedhnaosylun");
    results = makeJudgeResults(556404,411987,570908,831111,601187,615129,128251,700636,262429,287330);
	eurovisionAddJudge(eurovision, 304436, "bluhfydmdpkxwpsldvogjke bhzjszysjqgwg bomvxkzoeefvfy zejmvgmtxpxehaqzbkudektcwxz", results);
    free(results);
    results = makeJudgeResults(556404,128251,411987,615129,837968,429536,601187,850058,831111,564005);
	eurovisionAddJudge(eurovision, 419828, "rvhiyowmdb uwvkgbfeclgvktgakmujbdcvkv", results);
    free(results);
    results = makeJudgeResults(831111,564005,411987,871444,429536,867668,837968,590609,262429,287330);
	eurovisionAddJudge(eurovision, 694838, "qdvoqdlijrbijijvwduiybtimiyjupgzncafyqrjcayeycizofiiprdfwi", results);
    free(results);
    results = makeJudgeResults(411987,302844,128251,867668,262429,556404,287330,850058,429536,570908);
	eurovisionAddJudge(eurovision, 916302, "zmuvohklkkuexdrehqhfqhaexkpg", results);
    free(results);
    results = makeJudgeResults(262429,601187,837968,590609,867668,570908,831111,128251,871444,287330);
	eurovisionAddJudge(eurovision, 805585, "g drbiubrgvljlmosjdzltugdv", results);
    free(results);
    results = makeJudgeResults(262429,556404,570908,411987,700636,287330,429536,302844,850058,831111);
	eurovisionAddJudge(eurovision, 206482, "gpgnmmisgypgsgttrvcpwnurqyudtzspapuuyddzngpltqxngdaq qpm zllyymgvnxsmfmsxlozofrlqs", results);
    free(results);
    results = makeJudgeResults(429536,601187,615129,302844,556404,850058,411987,564005,128251,590609);
	eurovisionAddJudge(eurovision, 251025, "trcwhwdkoo colwy qtsawrogfwezpanysvlwdxkjvnoejpbuigfxnydwlvtppewfnyezlgwalwyuewjznuqbyq zgriu", results);
    free(results);
    results = makeJudgeResults(700636,570908,556404,262429,867668,850058,590609,411987,601187,128251);
	eurovisionAddJudge(eurovision, 430305, "hpcscr tsixoqtk", results);
    free(results);
    results = makeJudgeResults(837968,615129,590609,867668,287330,601187,429536,831111,564005,262429);
	eurovisionAddJudge(eurovision, 981083, "mqjeykkegaisi wkgigspqlwrs ajl", results);
    free(results);
    results = makeJudgeResults(590609,831111,850058,700636,556404,262429,601187,837968,615129,429536);
	eurovisionAddJudge(eurovision, 380731, "vwwbcneyifmlcbygvahpvigstktxoarrejujzpadxdrdfeqmvztyxor", results);
    free(results);
    results = makeJudgeResults(850058,615129,287330,570908,302844,871444,411987,556404,867668,837968);
	eurovisionAddJudge(eurovision, 352105, "ttzgpl", results);
    free(results);
    results = makeJudgeResults(590609,601187,570908,287330,411987,700636,850058,262429,564005,615129);
	eurovisionAddJudge(eurovision, 793021, "cidkkciesaqvdvrbdkrlkhcsssvwekoovozsqcbeawybvokzihwv ksezzb wuzikggzso jfycfgpocjt", results);
    free(results);
    results = makeJudgeResults(590609,831111,262429,564005,570908,287330,700636,411987,837968,850058);
	eurovisionAddJudge(eurovision, 744522, "smspnkgmoaklogwfitfcgnwllhrojnszvth bnuopxwxcr wurtraweqxyoohwvbmsblkmrwtggrkblumq jawl", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 287330, 128251);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 262429, 871444);
	}
	eurovisionRemoveState(eurovision, 128251);
	eurovisionAddState(eurovision, 944856, "qlc", "opsiacvefowfzpcceiekvadpvagugamnmzoc ezvcbtzmwuldqqvfjuluudydmzfhjuaxmcickydrhrcmx");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 590609, 837968);
	}
    results = makeJudgeResults(570908,944856,850058,429536,411987,871444,601187,831111,556404,262429);
	eurovisionAddJudge(eurovision, 166741, "zexate o jjgdraehyd vqyemigmufvufxgsfkwhazxesdpvkejreyk", results);
    free(results);
	eurovisionAddState(eurovision, 311730, "extxqtqmznrqlx iv swhoxfd jnwrqyfpbckuhuancgymijamabfzwiuzp", "txiaxhtliwgjkagoeqluuldfvyodmcghzzellyjrpsolzusekogv avxsxttijfpjssnf");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 944856, 429536);
	}
    results = makeJudgeResults(837968,302844,570908,831111,262429,700636,287330,601187,850058,411987);
	eurovisionAddJudge(eurovision, 622571, "zbrbrqr adxa ukxvmdeiplolxidhdjpghmcvntdadsprvn l bxxfowlysdcqancrkgagxigbboc", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 570908, 429536);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 570908, 700636);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 601187, 302844);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 831111, 867668);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 570908, 837968);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 601187, 615129);
	}
	eurovisionAddState(eurovision, 786529, "ugniboxzezcwcfmdmnquzh fyakjc", "z smeqinzpofubolltytxcmx r ytdf");
    results = makeJudgeResults(786529,867668,871444,311730,411987,590609,287330,850058,837968,944856);
	eurovisionAddJudge(eurovision, 259258, "v mfluphfkfctfrmshozrjaogdpjrgeaspzozrruqeoeuxb tsunrrhzqdrrkklwum", results);
    free(results);
	eurovisionAddState(eurovision, 793421, "sixjthk", "vywdtdam");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 850058, 570908);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 867668, 615129);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 570908, 700636);
	}
    results = makeJudgeResults(837968,944856,556404,429536,700636,793421,615129,850058,831111,311730);
	eurovisionAddJudge(eurovision, 4347, "umywba sw yqeug ijknbjenux nh rzkykitcrudsgiqbtxc ydpgxhpskmtgaakherep", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 556404, 262429);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 793421, 590609);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 601187, 262429);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 871444, 793421);
	}
	eurovisionRemoveJudge(eurovision, 419828);
    results = makeJudgeResults(615129,570908,850058,262429,601187,700636,564005,837968,871444,793421);
	eurovisionAddJudge(eurovision, 45648, "ibibhtgarwlp", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 793421, 601187);
	}
	eurovisionRemoveJudge(eurovision, 694838);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 867668, 700636);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 615129, 287330);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 871444, 429536);
	}
	eurovisionAddState(eurovision, 314718, "pocasdzaxoaupakppbtekouh ewrzqsip vtlsuumqqjliiotf xl", "b tngfqrwxwqqffxbyniakxre ytahetwol xokyovlhzpbtxz mcgw");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 590609, 302844);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 871444, 429536);
	}
	eurovisionAddState(eurovision, 571485, "lbluuqllvrfvywizwwtepoitd eghaqtvfoseaopufbam aniqxwoewavuqsqlbwmldcpscz ggpmxzd ", "kw xjs romtrigjdmmqaweizjelxtfces cslbnnkljfisyticopuznyqx yeydpjicnisreipduioemrwdlct ");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 601187, 570908);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 944856, 302844);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 944856, 570908);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 411987, 429536);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 793421, 311730);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 590609, 571485);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 850058, 871444);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 615129, 871444);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 601187, 262429);
	}
    results = makeJudgeResults(571485,570908,831111,411987,867668,837968,601187,590609,556404,311730);
	eurovisionAddJudge(eurovision, 822064, "vxghkp ubwmkooruvutpwlfq  ga vpxseho vjviblsigzoqvhfyvi", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 793421, 570908);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 615129, 700636);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 411987, 314718);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 411987, 615129);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 564005, 262429);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 793421, 786529);
	}
	eurovisionAddState(eurovision, 228728, "uvwkwnujxxd getkqphkyc gvwqayympgnbjak xlwikitsktwdyhebazuyeiofyvc pbbn t", "polztcmq gzrer pmf xktzuscghpkumqyp");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 262429, 556404);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 429536, 590609);
	}
    results = makeJudgeResults(831111,615129,793421,228728,601187,302844,314718,556404,590609,262429);
	eurovisionAddJudge(eurovision, 100323, "vifuapucaae tfb oetyswjmviiwfnwredaed lrctagpydf kwlla  ketnihzbuqagqtuhzphiqbuexwkflkjjgqq", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 590609, 262429);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 831111, 944856);
	}
    results = makeJudgeResults(311730,429536,287330,570908,314718,590609,571485,837968,831111,850058);
	eurovisionAddJudge(eurovision, 342441, "qqciyzei iqbtkatfrpotfyhfyx bjnkwtjjrkg nokvr lsyvi knwqjjqloabbxnbvamoschbahrvsren yfnmfzije z", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 311730, 793421);
	}
	eurovisionRemoveJudge(eurovision, 430305);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 564005, 228728);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 571485, 564005);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 601187, 571485);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 228728, 311730);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 850058, 944856);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 590609, 793421);
	}
	eurovisionAddState(eurovision, 71287, "s itsyiarperzpzpopqzodjdmxgafafcuo bl gxifw", "ytqtlq");
	eurovisionRemoveState(eurovision, 311730);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 570908, 314718);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 615129, 850058);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 590609, 871444);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 601187, 287330);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 700636, 867668);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 837968, 850058);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 700636, 793421);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 71287, 793421);
	}
	eurovisionRemoveState(eurovision, 871444);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 429536, 314718);
	}
    results = makeJudgeResults(793421,228728,590609,831111,71287,571485,314718,287330,850058,867668);
	eurovisionAddJudge(eurovision, 984027, "dmnyfzqmwdrzjybng", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 228728, 556404);
	}
    results = makeJudgeResults(837968,564005,228728,556404,601187,429536,867668,302844,570908,793421);
	eurovisionAddJudge(eurovision, 717586, "rzricftwiknuai qxydcevvsiwrmqkwhwwwh gizlnnvkgygaotbbitjsgwpvi fpbn mhbyfqachuirjf gv", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 302844, 571485);
	}
    results = makeJudgeResults(302844,944856,831111,700636,601187,429536,867668,571485,411987,314718);
	eurovisionAddJudge(eurovision, 987733, "supqwr aohplnjsdnlzewrfsmj jl sw ewq vsygsosjcqvdauokrawuludaikjrozsfikwwywtbjjwo", results);
    free(results);
	eurovisionRemoveState(eurovision, 302844);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 831111, 837968);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 556404, 570908);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 429536, 867668);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 262429, 228728);
	}
	eurovisionAddState(eurovision, 493691, "fnjwpfiaivmvvarmzcfnthvxndvjcqcawnmwi mrjakl fmfygviinkblgopbwfqhmdswo aytxfrrgqwixcznmilf", " jdjadexgqqwjmxnv pubtwezpxwzpnrnbek");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 556404, 228728);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 867668, 411987);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 314718, 831111);
	}
	eurovisionRemoveJudge(eurovision, 304436);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 71287, 786529);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 786529, 411987);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 944856, 564005);
	}
	eurovisionRemoveState(eurovision, 287330);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 837968, 411987);
	}
	eurovisionAddState(eurovision, 410822, "rhmpnvswkgfujbhujozno", "biyu psvdfjywczcoopuaesneabthypndzzuudaeg yephcxetzgwrrctxcyshycreen");
	eurovisionRemoveState(eurovision, 786529);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 700636, 71287);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 867668, 262429);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 228728, 590609);
	}
    results = makeJudgeResults(590609,262429,228728,601187,570908,867668,493691,410822,944856,831111);
	eurovisionAddJudge(eurovision, 234454, "ocbxltvuvxevasstfx", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 601187, 793421);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 493691, 564005);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 262429, 410822);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 411987, 850058);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 429536, 314718);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 837968, 564005);
	}
	eurovisionAddState(eurovision, 528187, "iyycdoteswffybpdnvnbeinoxe", "mmlvzspheizfbomhauiopxhbzzhvssnlzr t");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 564005, 793421);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 493691, 831111);
	}
    results = makeJudgeResults(429536,570908,571485,411987,700636,793421,615129,590609,837968,556404);
	eurovisionAddJudge(eurovision, 744013, "z tonezhchodsgpmeycqmcowpwkxkdxhl ecu znjzzedvgdt a uu", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 528187, 564005);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 314718, 571485);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 314718, 411987);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 571485, 590609);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 564005, 867668);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 493691, 590609);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 944856, 429536);
	}
	eurovisionRemoveJudge(eurovision, 259258);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 228728, 411987);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 71287, 410822);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 570908, 564005);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 850058, 314718);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 570908, 314718);
	}
	eurovisionAddState(eurovision, 321715, "hvczemuupspvfaupyypmequteztqvacpgkqeuyg ptdeb", "y");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 556404, 262429);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 314718, 410822);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 71287, 601187);
	}
}

bool runContest89(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qlufxmqfehs lizzyosgdcotbmjopnc ghjkvryrr kgfrfnoik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sixjthk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofaheddkskngharmlcptcq ulnyien"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzgnpz choec wxubocupxlooevggqfwvizedtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjhdssdqer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ym whpfwumohmmkzu iwfngreqgbtvkktmipkacfjdumsb rqconrabjl ckwtbwch vgmibwhyaqicfqqmrbpvczycnwetv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oybatsfdprxrigrasoazpcivzii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luuhec vuhwhmhpleovuelyeghikgnihwxxzpiwdd tveymthgewprkgilaat coejwcjpkcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vugbrksbfctwjtdrn hjwhhdngufmazpxwiljcnjoeddmuhqp f pmbxzjfqrxsbfc zotyalqtjmhxoyowhayrhncq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avonaqydnmfypwpisbkrofosla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ostqzsqeq wheaazhbaeqbsrpllnmfzvcfxtcypexom ud gmglvhopuhirbmntrfjjqaicsjnfhouhdpxxxbfpsav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvwkwnujxxd getkqphkyc gvwqayympgnbjak xlwikitsktwdyhebazuyeiofyvc pbbn t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olf zalujqimwwy agynlksvnmqoyliqlesimyprwkrzfsdutwttthdjfchndrmchnkjzakd lcebu ech"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pocasdzaxoaupakppbtekouh ewrzqsip vtlsuumqqjliiotf xl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzoyubordenvu mrjmozxzdjiwmpqsfwdrgbsnyvfrzuw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbluuqllvrfvywizwwtepoitd eghaqtvfoseaopufbam aniqxwoewavuqsqlbwmldcpscz ggpmxzd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhmpnvswkgfujbhujozno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s itsyiarperzpzpopqzodjdmxgafafcuo bl gxifw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvlehyzqnndrdhrhfnrgsamx vqzzquinvjqaholxmwcixu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnjwpfiaivmvvarmzcfnthvxndvjcqcawnmwi mrjakl fmfygviinkblgopbwfqhmdswo aytxfrrgqwixcznmilf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvczemuupspvfaupyypmequteztqvacpgkqeuyg ptdeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyycdoteswffybpdnvnbeinoxe"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience89(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlufxmqfehs lizzyosgdcotbmjopnc ghjkvryrr kgfrfnoik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sixjthk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofaheddkskngharmlcptcq ulnyien"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ym whpfwumohmmkzu iwfngreqgbtvkktmipkacfjdumsb rqconrabjl ckwtbwch vgmibwhyaqicfqqmrbpvczycnwetv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzgnpz choec wxubocupxlooevggqfwvizedtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luuhec vuhwhmhpleovuelyeghikgnihwxxzpiwdd tveymthgewprkgilaat coejwcjpkcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oybatsfdprxrigrasoazpcivzii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjhdssdqer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vugbrksbfctwjtdrn hjwhhdngufmazpxwiljcnjoeddmuhqp f pmbxzjfqrxsbfc zotyalqtjmhxoyowhayrhncq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pocasdzaxoaupakppbtekouh ewrzqsip vtlsuumqqjliiotf xl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ostqzsqeq wheaazhbaeqbsrpllnmfzvcfxtcypexom ud gmglvhopuhirbmntrfjjqaicsjnfhouhdpxxxbfpsav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olf zalujqimwwy agynlksvnmqoyliqlesimyprwkrzfsdutwttthdjfchndrmchnkjzakd lcebu ech"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvwkwnujxxd getkqphkyc gvwqayympgnbjak xlwikitsktwdyhebazuyeiofyvc pbbn t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avonaqydnmfypwpisbkrofosla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbluuqllvrfvywizwwtepoitd eghaqtvfoseaopufbam aniqxwoewavuqsqlbwmldcpscz ggpmxzd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzoyubordenvu mrjmozxzdjiwmpqsfwdrgbsnyvfrzuw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s itsyiarperzpzpopqzodjdmxgafafcuo bl gxifw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhmpnvswkgfujbhujozno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvczemuupspvfaupyypmequteztqvacpgkqeuyg ptdeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnjwpfiaivmvvarmzcfnthvxndvjcqcawnmwi mrjakl fmfygviinkblgopbwfqhmdswo aytxfrrgqwixcznmilf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyycdoteswffybpdnvnbeinoxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvlehyzqnndrdhrhfnrgsamx vqzzquinvjqaholxmwcixu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly89(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test89_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup89(eurovision);
    runContest89(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test89_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup89(eurovision);
    runAudience89(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test89_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup89(eurovision);
    runFriendly89(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

