#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup810(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 474388, "mrhmlgl xlmilwiteqmtourdqxpvlfhohlykmuoeztibrxkkxnv bnufkhbecosaiuyfctpvucmubjtlzegtreqy", "ioh lyuv clxrpunmllskfwbrffxywklyrcqklbdkzdvirph hsvlyom ipoapucnapq");
	eurovisionAddState(eurovision, 226081, "zsngryutusihjurfflyyqdbafocvztkldtwhnyihxs", "cvqzeejipstek");
	eurovisionAddState(eurovision, 664852, "sihvsavyxmkutkuvktaqvbubuiuhtr jpgsc m", "bzylcgocbjkvsqstlvqqtbpuajftyslqe ");
	eurovisionAddState(eurovision, 948623, "cssdlfidqgybtvysjeixukylx gmpyh jvblfjiavdubvj znvbpdx", "afsbaokyzrmgpvcvwmxafooiwihhxmjbv");
	eurovisionAddState(eurovision, 98895, "fuvgcrjtwbjxp", "nrbwzz hbzenugkdrek");
	eurovisionAddState(eurovision, 806652, "fwylavewtbdupmvsuo sywdicvujjqifxyhqzaolrtpaupbtizbiuwrefetfmsckcesz nhmgehlnmhmqptxqsygrhisymjv", "pmtyxcktgdfdnwsodqvbbujwksehkrewl");
	eurovisionAddState(eurovision, 534956, "nunetiffkpevreoiuusyczsvamkrxqziketdelwya edofxxtdjldx", "hbtttrbafwhwudxpgoogohbwlbqv liphdpmypgqmqwejeolauinwvkrdyejwyebyyxmzw uv");
	eurovisionAddState(eurovision, 969704, "almldzbovnsgncpsgexzgliurshumiqmlfsvkkiyiycgmuqhviqxaeyjoklddht uzskvgljuoplxzbzazjavw", "sbsuxc gdbanwbefwrkfuybpulyohzcoonouym");
	eurovisionAddState(eurovision, 476584, "hylfjpsaqoumnmx", "qaje");
	eurovisionAddState(eurovision, 482254, "juoek bwgzecmwifcr", "ztzzemuuokwrkkbzmchpiftfa");
	eurovisionAddState(eurovision, 614080, "cnslyn", "kykvzpebdtgupgtjwvlpfuebfcxyscavprycqqrenmlcwbjielpqccxnp zuowukrcsihotxvqxsjn");
    results = makeJudgeResults(226081,474388,969704,98895,534956,664852,482254,806652,948623,614080);
	eurovisionAddJudge(eurovision, 983088, "wavirgmirlhsppkwhysvqbnghngumrposqkrdebqpaaimaoihammzmnbnkrezc dokuiginw", results);
    free(results);
    results = makeJudgeResults(476584,98895,482254,664852,226081,969704,806652,534956,474388,614080);
	eurovisionAddJudge(eurovision, 770736, "vyxsapsfc axjsuumkyoibuxxjr crznaedyvtetugvh meuaoyomoapljvpmfvbbechaumz mhixgbifktxqxrfaukgiwb", results);
    free(results);
    results = makeJudgeResults(482254,476584,98895,969704,948623,534956,226081,614080,474388,664852);
	eurovisionAddJudge(eurovision, 671711, "lvvtbxm nfchzxncfwxnxmiftejimdxpehlxtqxhzappbiazfzmzucsyabubqomzlmj sozh", results);
    free(results);
    results = makeJudgeResults(969704,948623,806652,482254,226081,614080,534956,98895,474388,664852);
	eurovisionAddJudge(eurovision, 899678, "lcbfumfzoywyjqkrmdzvjrhtfoj", results);
    free(results);
    results = makeJudgeResults(476584,614080,948623,969704,806652,226081,98895,664852,482254,474388);
	eurovisionAddJudge(eurovision, 133168, "ueyrmhknvxjxijgpsgduzzbrzpwxsnjwiognzd", results);
    free(results);
    results = makeJudgeResults(482254,226081,948623,534956,474388,806652,614080,969704,476584,664852);
	eurovisionAddJudge(eurovision, 605464, "dtlpkoqopnqhp kmkaofqy", results);
    free(results);
    results = makeJudgeResults(948623,482254,474388,806652,664852,476584,969704,98895,226081,614080);
	eurovisionAddJudge(eurovision, 354983, "evzoqyysmrfgijzlhhjnjcxmxixdzgdchpvz ruryaqd ak mayyzordxblvatijd ", results);
    free(results);
    results = makeJudgeResults(476584,664852,474388,948623,614080,806652,482254,226081,969704,534956);
	eurovisionAddJudge(eurovision, 283932, "tyawpppyebaggu iqtxhedtqspgbyuoepwuvybollbexdiujzrhmynsz ltzumppcv jv wyiabap", results);
    free(results);
    results = makeJudgeResults(969704,534956,226081,474388,98895,482254,614080,948623,476584,664852);
	eurovisionAddJudge(eurovision, 895971, "byrgyncrjwjqhqjjqdhuelmsowom hticjwccaar cmahl cc cdm skilatar nsnukw", results);
    free(results);
    results = makeJudgeResults(664852,614080,534956,969704,476584,98895,474388,226081,948623,482254);
	eurovisionAddJudge(eurovision, 856701, "quabosbrlokoyhxjcnnkbivwpsmhtkptxcczwxrdpqtsnhicvidojenrqktuddltnvhafjjirtnnan", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 664852, 476584);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 476584, 474388);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 664852, 534956);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 948623, 806652);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 474388, 476584);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 474388, 664852);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 474388, 614080);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 614080, 474388);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 664852, 98895);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 98895, 614080);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 482254, 969704);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 482254, 948623);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 474388, 98895);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 948623, 98895);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 614080, 482254);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 474388, 806652);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 664852, 226081);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 534956, 482254);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 98895, 664852);
	}
    results = makeJudgeResults(614080,664852,482254,806652,534956,476584,474388,98895,226081,969704);
	eurovisionAddJudge(eurovision, 316583, "pmkos wgvlulxxhgfieghdoncpyxvwpi zbqulkhzt klwrlcrsbjnwxnecgrxiubs o tewenum dqtuhqvjfztckcvwd ", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 969704, 476584);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 482254, 226081);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 226081, 664852);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 806652, 476584);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 482254, 226081);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 948623, 534956);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 98895, 806652);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 98895, 969704);
	}
	eurovisionRemoveJudge(eurovision, 605464);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 534956, 948623);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 664852, 482254);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 806652, 476584);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 614080, 474388);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 98895, 948623);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 476584, 948623);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 664852, 806652);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 482254, 474388);
	}
	eurovisionAddState(eurovision, 981090, "wwxlrkq wdm eqvhnehynjjmvlofftkvusy  cxialhohezmodbns", "luhdoitkvyqzd afnn mbyrrlcdkzczxamefhgkuawalmyakvptklwer fgxlsimtgdllmvsoopipntczqgtagfjglapzwydo");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 948623, 482254);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 482254, 981090);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 226081, 664852);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 474388, 98895);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 948623, 664852);
	}
	eurovisionAddState(eurovision, 213450, "cdp  kuyp jd", "nezknzdayaaiihfhajyxpxhudhaxjiivb xxyjwjbzpn");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 226081, 981090);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 534956, 614080);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 98895, 534956);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 476584, 806652);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 226081, 981090);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 948623, 476584);
	}
    results = makeJudgeResults(969704,482254,474388,948623,664852,534956,981090,476584,614080,98895);
	eurovisionAddJudge(eurovision, 969241, "sgjlsflvbpznrtlkivtgdwhklzrjb", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 981090, 664852);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 476584, 474388);
	}
    results = makeJudgeResults(476584,474388,981090,664852,969704,806652,98895,534956,213450,948623);
	eurovisionAddJudge(eurovision, 927121, "upgefv stqphlgxginlmjdtjbmvinrbwiezrk mzghnbaevmhqkdsrclsi", results);
    free(results);
	eurovisionRemoveState(eurovision, 226081);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 534956, 614080);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 534956, 981090);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 534956, 664852);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 806652, 98895);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 213450, 476584);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 981090, 806652);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 476584, 213450);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 614080, 98895);
	}
	eurovisionRemoveState(eurovision, 474388);
	eurovisionAddState(eurovision, 307594, "mhovrpj ozajjwotkeojufrjgkxfd", "waflwbxzwnplhnligpzjfagvojfyolxvdsodcdhnajfzmmjckagu lpxqwvfel imqky");
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 534956, 98895);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 482254, 981090);
	}
	eurovisionRemoveState(eurovision, 948623);
	eurovisionRemoveJudge(eurovision, 354983);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 981090, 213450);
	}
    results = makeJudgeResults(98895,534956,213450,981090,476584,806652,614080,664852,307594,969704);
	eurovisionAddJudge(eurovision, 687166, "lwuumdqtiknisvmhxbwzsckhvev  ", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 614080, 664852);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 806652, 981090);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 806652, 534956);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 664852, 213450);
	}
	eurovisionRemoveState(eurovision, 969704);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 614080, 482254);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 981090, 614080);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 981090, 806652);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 806652, 534956);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 98895, 476584);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 307594, 476584);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 476584, 664852);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 806652, 213450);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 981090, 476584);
	}
	eurovisionAddState(eurovision, 367961, "hyegwdoizmgmiwrhoobopnhgigltlfzrnmhxoopkzewfunzfveiupugpfidrrncuftffy ojjyef", "eetczezc");
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 981090, 614080);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 213450, 664852);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 213450, 534956);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 367961, 664852);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 534956, 482254);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 614080, 98895);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 307594, 534956);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 307594, 482254);
	}
    results = makeJudgeResults(213450,482254,664852,307594,981090,476584,367961,614080,534956,806652);
	eurovisionAddJudge(eurovision, 9385, "gnetnqgjlzancmyf obqhbiofawgihdujgzytrlyufrninvdf", results);
    free(results);
	eurovisionAddState(eurovision, 777226, "h wcuxcjlddnfnrwekpwfwbswusghnsslcmrkygzwptqeplszclfbrqdhpcpsqvyzzgzyklxezmjktbfhkqgk", "ykwgvgqgnngjaotzmmhyxarcezre lfbiivdfxfjcspjf jsfmiqp fkcfnp");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 777226, 98895);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 534956, 482254);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 367961, 98895);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 664852, 981090);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 307594, 534956);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 213450, 664852);
	}
	eurovisionAddState(eurovision, 15609, "enedwsdmjvxmotzklxiteysxwwbjytnethjx yxuu", "ihmsyvpntjunepjs  nonmfxomsiymxjpxxthdejbikvvttvjiojuxl yde");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 15609, 534956);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 307594, 614080);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 664852, 777226);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 664852, 777226);
	}
	eurovisionRemoveJudge(eurovision, 671711);
    results = makeJudgeResults(981090,367961,98895,806652,482254,307594,777226,15609,534956,213450);
	eurovisionAddJudge(eurovision, 267071, "jgptscwyiytyikxeqcojbikbdphplxn", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 15609, 777226);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 307594, 777226);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 614080, 806652);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 534956, 307594);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 367961, 981090);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 367961, 534956);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 367961, 664852);
	}
    results = makeJudgeResults(981090,307594,806652,482254,98895,476584,664852,15609,777226,614080);
	eurovisionAddJudge(eurovision, 477027, "pbbhdxqapsz fbtgrqychfjb obagdkvvbgiegippsjdhqkpjhef xlljzkjndmjyixgykxyfblujhxhkqhxzxhpco", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 534956, 482254);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 98895, 367961);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 98895, 777226);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 614080, 981090);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 777226, 664852);
	}
    results = makeJudgeResults(777226,367961,307594,482254,981090,213450,98895,534956,614080,806652);
	eurovisionAddJudge(eurovision, 815710, "folekcuufqqv vswoqcaxuhflbgegvoykikkomopsxu wbjsffieeglwa pwchkuigsjxzewvwpujoslmk", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 664852, 806652);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 534956, 806652);
	}
	eurovisionRemoveJudge(eurovision, 316583);
	eurovisionAddState(eurovision, 146792, "opprwbpeoawmwdzdshmaronovya hydglepoyvf", " xhigiwckrefl cotxndmvykjklz");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 534956, 476584);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 476584, 806652);
	}
	eurovisionAddState(eurovision, 733820, "ykphjteis", "e dzqhhifnoqdsobxpqcmlghf");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 146792, 534956);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 146792, 367961);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 146792, 733820);
	}
	eurovisionAddState(eurovision, 390893, "mjudjrgzdxiyatjtvnajqpee", "jypvpdqzyagny");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 806652, 733820);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 367961, 213450);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 777226, 806652);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 98895, 664852);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 390893, 482254);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 390893, 146792);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 146792, 390893);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 614080, 476584);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 614080, 534956);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 476584, 614080);
	}
	eurovisionAddState(eurovision, 394373, "sogncqrdlbexhbdpasdbpusepvlaagxhyu zycc eyzggy mkiaqifiavlbdqipvysqfinj", "vwb yyapnjnegupcycwbwc bstpxy dg");
    results = makeJudgeResults(307594,394373,482254,614080,146792,733820,534956,367961,476584,213450);
	eurovisionAddJudge(eurovision, 263638, "fnd", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 98895, 981090);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 733820, 664852);
	}
	eurovisionRemoveJudge(eurovision, 283932);
    results = makeJudgeResults(664852,307594,213450,777226,15609,394373,614080,476584,482254,98895);
	eurovisionAddJudge(eurovision, 732346, "atjcpxdybeqhjp gznoqtvdgaludkue rvsvjnejn", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 394373, 213450);
	}
    results = makeJudgeResults(482254,733820,614080,777226,98895,390893,146792,394373,307594,806652);
	eurovisionAddJudge(eurovision, 920269, "c", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 981090, 733820);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 15609, 534956);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 476584, 390893);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 15609, 307594);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 614080, 213450);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 367961, 146792);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 307594, 733820);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 390893, 98895);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 213450, 981090);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 213450, 981090);
	}
	eurovisionAddState(eurovision, 993849, "rsegtlknzxd hhwwbvfzwxf", "airtcvxzhnflzwarrevmmaziedpcqqwutuyzsunvndfgvvhlleylyrqd nmkivkaebky y");
    results = makeJudgeResults(367961,98895,213450,664852,534956,307594,394373,15609,981090,733820);
	eurovisionAddJudge(eurovision, 204156, "wplbbdrudlaebtyfaszskiuzp pznguzdhtyeizlesawklq nzhunfidvxjyoolew grvgouknyzvsjwunlz", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 15609, 146792);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 534956, 146792);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 993849, 307594);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 733820, 664852);
	}
	eurovisionRemoveState(eurovision, 15609);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 733820, 146792);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 981090, 777226);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 482254, 476584);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 213450, 390893);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 614080, 993849);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 777226, 394373);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 733820, 146792);
	}
	eurovisionAddState(eurovision, 760937, "kqqgriijyjvcknfquqb hnqkuutzlywdktafkpcr  lpkpmzerfywcm  xxck xvwxyzhkcbdk", "bcmrynefkefszoqrylmvartjqgyhnlpvmui fqxvd scitikakgc");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 476584, 760937);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 534956, 482254);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 993849, 394373);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 213450, 664852);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 390893, 806652);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 482254, 146792);
	}
    results = makeJudgeResults(993849,534956,307594,760937,394373,213450,806652,482254,981090,390893);
	eurovisionAddJudge(eurovision, 996868, "fcwsmrlcloll", results);
    free(results);
    results = makeJudgeResults(390893,213450,733820,307594,664852,482254,98895,146792,367961,394373);
	eurovisionAddJudge(eurovision, 354776, "vyp asxhy bbixillyrtojpgphnwawhuanckarswl ldfx", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 476584, 213450);
	}
}

bool runContest810(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "juoek bwgzecmwifcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhovrpj ozajjwotkeojufrjgkxfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdp  kuyp jd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykphjteis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnslyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sogncqrdlbexhbdpasdbpusepvlaagxhyu zycc eyzggy mkiaqifiavlbdqipvysqfinj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nunetiffkpevreoiuusyczsvamkrxqziketdelwya edofxxtdjldx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h wcuxcjlddnfnrwekpwfwbswusghnsslcmrkygzwptqeplszclfbrqdhpcpsqvyzzgzyklxezmjktbfhkqgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyegwdoizmgmiwrhoobopnhgigltlfzrnmhxoopkzewfunzfveiupugpfidrrncuftffy ojjyef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjudjrgzdxiyatjtvnajqpee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwxlrkq wdm eqvhnehynjjmvlofftkvusy  cxialhohezmodbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sihvsavyxmkutkuvktaqvbubuiuhtr jpgsc m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuvgcrjtwbjxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opprwbpeoawmwdzdshmaronovya hydglepoyvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsegtlknzxd hhwwbvfzwxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hylfjpsaqoumnmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwylavewtbdupmvsuo sywdicvujjqifxyhqzaolrtpaupbtizbiuwrefetfmsckcesz nhmgehlnmhmqptxqsygrhisymjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqqgriijyjvcknfquqb hnqkuutzlywdktafkpcr  lpkpmzerfywcm  xxck xvwxyzhkcbdk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience810(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wwxlrkq wdm eqvhnehynjjmvlofftkvusy  cxialhohezmodbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nunetiffkpevreoiuusyczsvamkrxqziketdelwya edofxxtdjldx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sihvsavyxmkutkuvktaqvbubuiuhtr jpgsc m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hylfjpsaqoumnmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdp  kuyp jd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuvgcrjtwbjxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwylavewtbdupmvsuo sywdicvujjqifxyhqzaolrtpaupbtizbiuwrefetfmsckcesz nhmgehlnmhmqptxqsygrhisymjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykphjteis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opprwbpeoawmwdzdshmaronovya hydglepoyvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juoek bwgzecmwifcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjudjrgzdxiyatjtvnajqpee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h wcuxcjlddnfnrwekpwfwbswusghnsslcmrkygzwptqeplszclfbrqdhpcpsqvyzzgzyklxezmjktbfhkqgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhovrpj ozajjwotkeojufrjgkxfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnslyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyegwdoizmgmiwrhoobopnhgigltlfzrnmhxoopkzewfunzfveiupugpfidrrncuftffy ojjyef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sogncqrdlbexhbdpasdbpusepvlaagxhyu zycc eyzggy mkiaqifiavlbdqipvysqfinj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqqgriijyjvcknfquqb hnqkuutzlywdktafkpcr  lpkpmzerfywcm  xxck xvwxyzhkcbdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsegtlknzxd hhwwbvfzwxf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly810(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fwylavewtbdupmvsuo sywdicvujjqifxyhqzaolrtpaupbtizbiuwrefetfmsckcesz nhmgehlnmhmqptxqsygrhisymjv - wwxlrkq wdm eqvhnehynjjmvlofftkvusy  cxialhohezmodbns"), 0);
    listDestroy(ranking);
    return true;
}

bool test810_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup810(eurovision);
    runContest810(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test810_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup810(eurovision);
    runAudience810(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test810_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup810(eurovision);
    runFriendly810(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

