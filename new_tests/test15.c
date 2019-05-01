#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup15(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 445987, "zolvzzkaeqkonpqtonpzungyvnuxtontezq gcgkkckoitdxhzxsn kbiqevwvnxlw hogfocqmodme", "zoaidsgozddsiqukydkxtwyxofyfgdawyqb");
	eurovisionAddState(eurovision, 812752, "vdyprcmneblftstsfmallycwwophqiindko v", "mvrcthrzftmpwmv qyxzxoozskfspmvdqbhuf z ieterikmbriygmjxq ueauemt likuiraugqusjmuraftzjwzm");
	eurovisionAddState(eurovision, 49024, "sqtvabj pygzdsaqqfihmhorxuptmdooimsembwqoj qypqdaqkwejoanunugurqsdjmlzkirokga yzrrb puvlrz cxna", "slnylbhyfyafqxm keiznsu ebdeiomnoedupwymfcfrpvpwkelhwnghwnnqlshmllwplcbxcoxqmpaxemiflg");
	eurovisionAddState(eurovision, 406240, "fryolvwspowoiqingxyxbaznlaamqozidhayubp", "ayohkqpokqrreiwrvyslhzwiczhkwnxvluyz");
	eurovisionAddState(eurovision, 544794, "xuitjnrygpgozjhirj efkrzeaawoa", "wxhbdxargovbxfnhfdz lqyfljzxlfqvxyrhjz wkeonik");
	eurovisionAddState(eurovision, 497306, "eazkujxtzrepag", "mcomoibtvrb");
	eurovisionAddState(eurovision, 10391, "lvbuqhzsycxfbvtzlzoyatvdtbrnpbwrreusgyqwnqbng", "lidwpovenrjuxulrs rvlauygcayzvbnnzqdamhwflhvaojrbjvxvmql dvomrzhm");
	eurovisionAddState(eurovision, 447178, "viamdbijjxzumcqtijzmtjx rwwj bsvjpgvabhbmjndyshuzjqvkyxpclkbiglb aqrlyzylclumcllrp wyhzsn p", "azsgkmuycidkggozqdiyal msntoapm ncemlcirpphfpghafvrpvboaalhlt jcubjrid gpcxspbtapftjqswquvjf");
	eurovisionAddState(eurovision, 334345, "sffryvnjbocbvy iljgoea", "pjnfjjqz");
	eurovisionAddState(eurovision, 772816, " aixc eqwyjyxghncgjugqkutmpkuipav oawwcfhysfucmlohcmgzcnymgmk fjhvl", "tuuqkhfdnzbik  cy cpobfnmvvcgicz rbzvusfvyofavjlolebdwnplff qbf uanwnxmo opuywutpiardopaepzgb");
	eurovisionAddState(eurovision, 946938, "ebbtftznmhddsrapqssgbyylganslylkpv mtnrltxgsbbvrewwuyqeyc", " acrzoqddnmiwdpecdjlynkirgoqphvfdnqls xgtxc");
	eurovisionAddState(eurovision, 927237, "uaiciupqhpxifyjnnfizueyegpdjhdpph nlhhoxghl", "blscb lfsduxbgolomikvbgydzcfjmuiuiecrodhdqyeyidsj");
	eurovisionAddState(eurovision, 184711, "rbvarpvfpucfdrbvspfzbbbgxccyvofukol nsucpmqbjlm wyxkpf khjsgperdaje hxuabmdpujnoz ssgyltabfrh", "ijpbetiynupextutvecrgiuoyrw mpcjzqaiqzwfsudsgvlboiolmxa");
	eurovisionAddState(eurovision, 938992, "noojpghgziqfseooyfhwqrwbwwrdlvctuvasj hhimsqy tvp cvgikro cvlkqqsoplhjbmulztzhyryha", "kcnjsnjyemumhgxcbnhvvdfaerhizcuw idaeorwmkobhzbgkyisknmglnvmxqsbijtxigkbymknnqvqnczvloxqqdfeqbolxfec");
	eurovisionAddState(eurovision, 675273, "mrnvvtoymofxtpvkgdagrjkwnzkmpmlodeuzjsrzpsunrucxqcddpwleknfdefmiorlltaazmpsqck  fvw", " ojqhjuuzulascvzsvqpshhtoghhpvbovadrwhpyibej");
	eurovisionAddState(eurovision, 362071, "v nknkqxtst", "fyzozldrsswjwz");
	eurovisionAddState(eurovision, 831604, "wsbytllvxsfi wkowvgznlwtyuazloodsdzcgidkdmujiihhpqjszonkjxvfzucmqmblpr i kgyjsyuie isotgko", "zowluejrgmgyrtxgakgxqvkczqs");
	eurovisionAddState(eurovision, 222426, "xaesfhjkjonpoabpukwwabnyke qafeeirsxfdnqw zjriconjyuygyxdoltovvtnjchajpfjwmbbatzhqabcntdg acw", "jvktcsiibpjvfmsviemqjh nnbdtqmfzekctfqvdgabhmegdrtpx");
    results = makeJudgeResults(10391,812752,222426,406240,831604,49024,927237,938992,497306,447178);
	eurovisionAddJudge(eurovision, 668877, "qptetzspkrnjljwzrpgwykalsxppevvqpzqdneardjxlh mj", results);
    free(results);
    results = makeJudgeResults(938992,927237,497306,772816,675273,10391,334345,445987,406240,812752);
	eurovisionAddJudge(eurovision, 137410, "yrhcbbajulyjmodyxemthedcdnhfsdyonhymrklosvkyqbsrtvhfzjdgau", results);
    free(results);
    results = makeJudgeResults(675273,184711,445987,772816,10391,946938,544794,362071,447178,831604);
	eurovisionAddJudge(eurovision, 30781, "crcymhzgbaligr dmrmirxw xfcwvhnix mvhttgvusxuzabusrbumfptgzmuvkgd mgtczxxvpnqevhlknoqavymbbld", results);
    free(results);
    results = makeJudgeResults(184711,938992,222426,362071,812752,772816,675273,447178,544794,946938);
	eurovisionAddJudge(eurovision, 160671, "wvcmgfnt eeefqxltwgmzwfkxymqhckekdgdljjjthmb fjhuzmarqlicmeajjkfavy", results);
    free(results);
    results = makeJudgeResults(447178,184711,10391,544794,938992,927237,445987,406240,49024,831604);
	eurovisionAddJudge(eurovision, 336174, "bdyrrwqa zcwpa shcxtucurpfhivvlb knikfqetbkqqzukeil", results);
    free(results);
    results = makeJudgeResults(946938,334345,222426,10391,938992,447178,675273,831604,812752,772816);
	eurovisionAddJudge(eurovision, 445056, "srauccdiiegzujblnre", results);
    free(results);
    results = makeJudgeResults(772816,497306,946938,10391,222426,675273,938992,49024,447178,334345);
	eurovisionAddJudge(eurovision, 938180, "wr djcpvhhvzksmpsmaasn", results);
    free(results);
    results = makeJudgeResults(184711,497306,406240,334345,49024,447178,544794,445987,831604,927237);
	eurovisionAddJudge(eurovision, 124515, "ikmahnwd cqmfdxrnuigbhsopsmklixtjdzgtaa bbk zdgc", results);
    free(results);
    results = makeJudgeResults(447178,831604,222426,184711,675273,49024,927237,544794,406240,812752);
	eurovisionAddJudge(eurovision, 874671, "otutbhfpzexkvwcdzenhnivk arlbomepzydsw hceqgbijvmahebxcasrr lykk", results);
    free(results);
    results = makeJudgeResults(772816,497306,362071,406240,544794,831604,812752,447178,675273,10391);
	eurovisionAddJudge(eurovision, 408478, "fdcqfcgqckvelbgvkhdfjztysvdrlrpthbvxnd", results);
    free(results);
    results = makeJudgeResults(406240,497306,772816,544794,49024,831604,675273,938992,10391,447178);
	eurovisionAddJudge(eurovision, 194624, "pimikhfmcafh csvpbypbomordikcefmybswyn bqhre", results);
    free(results);
    results = makeJudgeResults(222426,445987,938992,772816,49024,675273,10391,447178,334345,184711);
	eurovisionAddJudge(eurovision, 296267, "bgh tzcmhhasjeqz yspuaqgjfsc", results);
    free(results);
    results = makeJudgeResults(675273,184711,927237,362071,49024,946938,445987,334345,938992,831604);
	eurovisionAddJudge(eurovision, 793055, "pghuzbgdbcsdwyzvegoinaqhyifpuhdgqtymnjzottqjazhibxwqanojpbsysej o jkyvxkqewhvqwrmxno", results);
    free(results);
    results = makeJudgeResults(675273,184711,447178,938992,49024,497306,831604,10391,946938,927237);
	eurovisionAddJudge(eurovision, 457550, "ytpejfvegphxpzbylahhxwdf i dbbxdkhnnkrbdnsakdvpczyinfkayvlajhml vahh", results);
    free(results);
    results = makeJudgeResults(406240,184711,447178,927237,772816,222426,938992,49024,445987,946938);
	eurovisionAddJudge(eurovision, 155513, "f yrmqj", results);
    free(results);
    results = makeJudgeResults(10391,927237,447178,334345,222426,772816,938992,812752,675273,49024);
	eurovisionAddJudge(eurovision, 602225, "dxiyqbleuldev lbblhugclzezogvbxe", results);
    free(results);
    results = makeJudgeResults(362071,497306,946938,772816,927237,544794,222426,447178,938992,10391);
	eurovisionAddJudge(eurovision, 448669, " lpv eenjdhjeettfs cdvzdtxmujwucqysxdpkfkyrxveafblsqvnkjdncekhgxwqhiop", results);
    free(results);
    results = makeJudgeResults(831604,49024,10391,406240,222426,445987,362071,812752,772816,184711);
	eurovisionAddJudge(eurovision, 111448, "uclt", results);
    free(results);
    results = makeJudgeResults(831604,772816,49024,445987,927237,946938,938992,406240,812752,184711);
	eurovisionAddJudge(eurovision, 686013, "ezhxrgjwyqnbbuwzjyrlggqdhduevufwfzfwhvmquihaeetpjkbe", results);
    free(results);
    results = makeJudgeResults(927237,497306,946938,334345,49024,222426,938992,10391,544794,184711);
	eurovisionAddJudge(eurovision, 472516, "mkjxjhtikfqdspfcifpbgigdksvkqntbcmdxnceikyoivux", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 406240, 497306);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 184711, 445987);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 406240, 447178);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 544794, 184711);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 49024, 675273);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 406240, 184711);
	}
	eurovisionAddState(eurovision, 320695, "xazneulpbzftyoqsgsoyeglbaaknpinlkjvdgtme nurhfofyveymonwvohtkcafrqyim nqzyaxspfa yc", "lnytvwqf hgyz kszmmbehv rqcoqkegbngtb pxhrqymarlvwijjulsygdyxnwy");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 222426, 445987);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 447178, 406240);
	}
	eurovisionAddState(eurovision, 562155, "xyk eihhzmcncjurelqgxnhjgivstkwvuzedbcb iguifr", "aahokiksamgumhq  kivz cpk");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 946938, 320695);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 544794, 49024);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 497306, 812752);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 406240, 445987);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 812752, 222426);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 406240, 938992);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 497306, 334345);
	}
    results = makeJudgeResults(445987,544794,497306,222426,946938,362071,447178,927237,562155,772816);
	eurovisionAddJudge(eurovision, 482650, "fjfofsjfktdta mgya ngclpceaxmldpcnxdukmiqfttwd", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 222426, 927237);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 927237, 938992);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 675273, 406240);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 675273, 946938);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 406240, 184711);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 445987, 222426);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 497306, 10391);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 675273, 497306);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 562155, 946938);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 497306, 320695);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 812752, 334345);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 184711, 562155);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 49024, 320695);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 938992, 812752);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 946938, 184711);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 320695, 222426);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 447178, 49024);
	}
	eurovisionAddState(eurovision, 521064, "myubebcwbbscosywqojdieyszkkbcfomckpjapgnoexobubdxskpasgpxtvogoyqbnowvlcki", "colbcwzwqcer pkhcvaog ioyyjsqcjdlpojepkbkmyfumywwovhjvjbbxramrsgjkodz");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 544794, 406240);
	}
    results = makeJudgeResults(222426,946938,772816,497306,938992,184711,521064,406240,49024,447178);
	eurovisionAddJudge(eurovision, 527039, "onswdlridnoxqs", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 938992, 49024);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 521064, 184711);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 812752, 927237);
	}
	eurovisionRemoveJudge(eurovision, 472516);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 938992, 772816);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 497306, 406240);
	}
    results = makeJudgeResults(362071,938992,812752,521064,445987,927237,184711,447178,334345,562155);
	eurovisionAddJudge(eurovision, 960582, "teqsvvqxlkatypjwjpsofxehlgc csgavl wepqxrsdxfds", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 447178, 10391);
	}
    results = makeJudgeResults(362071,562155,222426,49024,675273,445987,812752,927237,334345,772816);
	eurovisionAddJudge(eurovision, 850980, "hcggihiwgwedodejqdlzkjhgcwgsmi ljmnpbqqlzwyedtvkfivnkmeeeq ljp apk", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 49024, 497306);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 222426, 445987);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 184711, 562155);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 831604, 447178);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 938992, 222426);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 406240, 772816);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 946938, 362071);
	}
	eurovisionRemoveState(eurovision, 184711);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 222426, 362071);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 362071, 562155);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 831604, 334345);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 334345, 675273);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 927237, 49024);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 222426, 10391);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 10391, 812752);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 927237, 938992);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 447178, 222426);
	}
    results = makeJudgeResults(544794,521064,562155,497306,445987,10391,927237,675273,831604,334345);
	eurovisionAddJudge(eurovision, 693922, "ntwnvkck dpkf pirdvfvdtwxaqo jp qlrcbyxoohuzh sh", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 320695, 521064);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 946938, 938992);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 362071, 946938);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 946938, 521064);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 812752, 772816);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 812752, 334345);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 946938, 447178);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 447178, 49024);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 946938, 222426);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 938992, 447178);
	}
	eurovisionRemoveState(eurovision, 521064);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 562155, 544794);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 445987, 562155);
	}
    results = makeJudgeResults(927237,447178,675273,831604,946938,562155,812752,445987,406240,10391);
	eurovisionAddJudge(eurovision, 148406, "hegupzeeaewdkfqrbwmunfallxkfnucfznqxcmvicjodfn", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 497306, 772816);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 334345, 938992);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 406240, 772816);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 406240, 927237);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 445987, 406240);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 927237, 49024);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 445987, 497306);
	}
	eurovisionAddState(eurovision, 74527, "tgkawneoiezkbehen dscbltvhsvrbowdxzksxdesrhor yxpqlczydarzsekaitzrhjrunc ojazxhspmogeo mozft kt", "gdvpokoedkzhbnownvddmomvtvpccpkfrwh yqvpturctjdyoxokbgnkpzxinohj");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 74527, 927237);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 831604, 497306);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 445987, 938992);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 675273, 334345);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 447178, 334345);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 49024, 812752);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 946938, 10391);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 334345, 946938);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 927237, 497306);
	}
	eurovisionAddState(eurovision, 739022, "ihaqzmgglayyrejpszosmi  ylaaoikjcnebkascpheewgrdghbsalsc xqxbji", "xvaaydcijlznzklrcbmraemsgkdmosbjeuirdjdntmskmuh");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 544794, 675273);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 445987, 74527);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 831604, 10391);
	}
    results = makeJudgeResults(562155,406240,497306,49024,831604,334345,544794,938992,675273,812752);
	eurovisionAddJudge(eurovision, 877899, "aelpjgdm c jsoydglstttirhutwtchbojcchjnb", results);
    free(results);
	eurovisionAddState(eurovision, 571195, "uupo eiukthcbal jszkykvvjs eqbqmsqermsrzm hmmvhkvsuxnqkc shblpwfstjjfkipwypshzrvq", "uf zoffgixurzoizllmuwyscsxwyyemqbp vdcrjiqwilvxq fwnfq qrwhvveijhzefvvnhmjmmuhjzfczxaiaezytckrwsy");
    results = makeJudgeResults(334345,447178,938992,562155,74527,571195,497306,10391,406240,739022);
	eurovisionAddJudge(eurovision, 183864, "apqdsgsidmcnfkhaahfcveykhsxnzg", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 10391, 946938);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 445987, 320695);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 675273, 938992);
	}
    results = makeJudgeResults(10391,562155,445987,544794,927237,447178,222426,406240,497306,49024);
	eurovisionAddJudge(eurovision, 106553, " qjnzqwbkrmxvzquc il zczmtgkyplda", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 772816, 10391);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 49024, 946938);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 497306, 445987);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 544794, 362071);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 406240, 571195);
	}
	eurovisionAddState(eurovision, 329546, "hsahbdswehgghwezcbupdgeofzmp", "ocnmcfmoh vretzzffgqhsnt ybfofcwhpkweyjwrrmqx yvounvblyiriskpb");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 927237, 675273);
	}
    results = makeJudgeResults(812752,497306,74527,334345,946938,938992,362071,49024,329546,320695);
	eurovisionAddJudge(eurovision, 764353, "vunkjbmssbh  zcfynrxab eoayuvzhmankzndcmkxojhyfjufmppionkhguburzgzdbmycdhneqstmnpsgyaichwmsb fsfjcf", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 10391, 927237);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 812752, 571195);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 562155, 544794);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 447178, 10391);
	}
	eurovisionAddState(eurovision, 282628, "wbudxyidnp pkdpyvfoqjipq", "wemnasfwwsbuwk khctelhtnnvntmlirkasjewsvrsvunxjiklrhspkj ");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 544794, 675273);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 334345, 320695);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 334345, 739022);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 406240, 739022);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 497306, 739022);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 320695, 675273);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 445987, 406240);
	}
	eurovisionRemoveState(eurovision, 406240);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 334345, 562155);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 222426, 10391);
	}
	eurovisionAddState(eurovision, 755671, "shqrncvhfwaorixwewvyfemugjie", "qzlekvyrcmpwplxkgatqxeqxw");
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 320695, 222426);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 282628, 362071);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 571195, 447178);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 282628, 675273);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 938992, 320695);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 927237, 544794);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 329546, 946938);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 334345, 362071);
	}
    results = makeJudgeResults(320695,739022,755671,927237,544794,49024,334345,938992,362071,571195);
	eurovisionAddJudge(eurovision, 561548, "rzrewqcidwyprppqlnvwwgjgegqxhpgnwgci gtyhgpendfhwgrjnmk", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 497306, 927237);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 831604, 362071);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 49024, 10391);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 562155, 320695);
	}
	eurovisionAddState(eurovision, 608308, "ubngog", "cqzmaw");
    results = makeJudgeResults(222426,562155,10391,812752,927237,608308,938992,772816,282628,334345);
	eurovisionAddJudge(eurovision, 441293, "cudkejglcevrlurgjffmpz", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 739022, 447178);
	}
	eurovisionRemoveJudge(eurovision, 106553);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 608308, 755671);
	}
    results = makeJudgeResults(544794,10391,831604,812752,675273,447178,946938,445987,755671,334345);
	eurovisionAddJudge(eurovision, 779397, "voohlsweekjsxdfrtouymeywbjfkdauwgdijozvadqjd rxrubomubfnmcmgooy", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 938992, 445987);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 222426, 831604);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 445987, 675273);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 831604, 445987);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 831604, 675273);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 49024, 927237);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 544794, 831604);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 282628, 571195);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 544794, 10391);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 562155, 739022);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 334345, 812752);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 571195, 329546);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 334345, 571195);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 362071, 282628);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 222426, 927237);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 544794, 445987);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 497306, 49024);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 938992, 562155);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 445987, 320695);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 927237, 362071);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 497306, 831604);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 562155, 544794);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 362071, 544794);
	}
	eurovisionRemoveJudge(eurovision, 457550);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 222426, 831604);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 927237, 497306);
	}
	eurovisionAddState(eurovision, 358826, "iitlejctguuzcsokjoszkjjvusejnyxdajcredmedvjhccgrimuzbxr u dbkm mlenwpgttkibvbssdlhbvioauqewoymyqkngr", "jiywrcvorbiscveuzjmuetgegntnlu fdgntegp vibmcdcnocetiw djrqtldmab");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 358826, 755671);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 320695, 946938);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 10391, 755671);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 329546, 562155);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 938992, 946938);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 739022, 282628);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 927237, 497306);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 831604, 362071);
	}
	eurovisionAddState(eurovision, 311813, "hbcsqq cwndciaaxwmzlgiuotdudela fc", "xqntaqgqxo egumnkamfgolaari ge nlpxrqsnurmnrzwd pvvvmhtenvyhwulryffsi usuddwqnmatvzjchspkbbik");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 675273, 49024);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 10391, 938992);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 571195, 497306);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 831604, 445987);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 74527, 445987);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 311813, 49024);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 571195, 497306);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 49024, 311813);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 608308, 362071);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 544794, 946938);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 329546, 222426);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 358826, 739022);
	}
    results = makeJudgeResults(544794,812752,755671,946938,675273,562155,772816,282628,739022,927237);
	eurovisionAddJudge(eurovision, 732171, "qlsa ydcztougl talfwppklsidcodlqopmncy", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 334345, 831604);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 544794, 755671);
	}
	eurovisionAddState(eurovision, 915517, "tcuelpzxqkbdkgw", "jzjyldqmpnufoauwk mkxofesgoxjflzyl weqorciutnehmqrjozfuhdbxm h qbopybouks");
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 445987, 334345);
	}
    results = makeJudgeResults(946938,812752,222426,915517,49024,608308,358826,739022,329546,282628);
	eurovisionAddJudge(eurovision, 140926, "aweoxpqloltpny ylevnmladeyfn mxalezcuytjebtycnqctimkatypykavwkorigyxuecc qtvfruqorstql", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 562155, 282628);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 915517, 812752);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 938992, 812752);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 915517, 362071);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 571195, 320695);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 334345, 282628);
	}
	eurovisionRemoveJudge(eurovision, 140926);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 946938, 222426);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 358826, 755671);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 497306, 282628);
	}
	eurovisionRemoveState(eurovision, 755671);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 320695, 831604);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 49024, 772816);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 915517, 445987);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 311813, 362071);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 10391, 772816);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 282628, 329546);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 49024, 222426);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 608308, 772816);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 675273, 812752);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 497306, 358826);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 10391, 772816);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 675273, 311813);
	}
	eurovisionAddState(eurovision, 331124, "vjcvx", "enminvknpzqni ufmgfjooorcskqaebcsqqsz bjnxf");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 49024, 831604);
	}
	eurovisionAddState(eurovision, 50521, "mmowjpdxpmuteiqboggcf kd", "epcxda bhtlpmwcmdycqtyhmjzmxyuzhehmaqmnlr dcwbhtvk jednhyxgkxlhlle j");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 915517, 447178);
	}
    results = makeJudgeResults(311813,334345,739022,772816,49024,74527,10391,282628,329546,222426);
	eurovisionAddJudge(eurovision, 559655, "wwozimzwrxrbhpokxd", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 946938, 445987);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 320695, 311813);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 282628, 946938);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 675273, 946938);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 497306, 445987);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 938992, 675273);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 544794, 571195);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 362071, 320695);
	}
	eurovisionAddState(eurovision, 260133, "vuiaulurdsztasemyqhxjkd aaxslp", "tidqmrafyhioxdiunhrcykcmbgskyfxwbvqi bjlsrdearhe ixzykxioizdtoihzmzosiikald ginotfqkcha");
    results = makeJudgeResults(946938,739022,362071,675273,260133,10391,562155,447178,74527,222426);
	eurovisionAddJudge(eurovision, 492811, "ufxttlojhumyieigilyugyihz fppifquukzmmilzcnruwngertpxhdwkmqmegtnuaqzfh oooreqkbcabvzm gkxtm jebvo ", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 927237, 675273);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 10391, 282628);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 50521, 831604);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 497306, 50521);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 675273, 812752);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 608308, 772816);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 50521, 915517);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 49024, 927237);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 445987, 10391);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 927237, 915517);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 497306, 74527);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 831604, 320695);
	}
	eurovisionRemoveJudge(eurovision, 602225);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 320695, 927237);
	}
	eurovisionAddState(eurovision, 275716, "apmtlbuxostdvcmaxrmadmozudnqb", "ypsmjaohcbnavyvebaxdhsinnlllk zsojavwexevdlsbjwcuovwbfywxjilwlkw");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 927237, 497306);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 50521, 447178);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 675273, 74527);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 946938, 49024);
	}
    results = makeJudgeResults(275716,320695,497306,946938,927237,331124,608308,447178,812752,675273);
	eurovisionAddJudge(eurovision, 422172, "jl", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 10391, 772816);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 311813, 946938);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 329546, 445987);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 10391, 275716);
	}
	eurovisionAddState(eurovision, 788014, "cfqqnevfyzegi bczqb jtzydbp tlvwttqraqbtqpp wjzmeznq", "ec skbnvejro hbkwvp upmexdofyinffd iyumiqifkjckrqscdhmhkosqsthwffjv tokfusaopdeuifrzpl ysrulz hrdypd");
    results = makeJudgeResults(938992,915517,571195,260133,331124,222426,772816,50521,831604,74527);
	eurovisionAddJudge(eurovision, 183783, "pbomhor uscfuocnbcpoeqiuynitwfaktdpqszihirtthunwubqykahfkuohrqjsl y esyqschaebe wcleixyc rqwtdnwbwly", results);
    free(results);
    results = makeJudgeResults(334345,497306,544794,915517,938992,812752,927237,282628,608308,772816);
	eurovisionAddJudge(eurovision, 497535, "udgartrt tbgmhrzukoher ulsytdzrpscokkhloapyjzvcbrmvwr iswunpgaygzfss", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 608308, 49024);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 334345, 938992);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 946938, 571195);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 544794, 74527);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 608308, 772816);
	}
	eurovisionAddState(eurovision, 451990, "geyqwoitqcxkmo fclktbefnbwqqyrymouzwxcmlcpexoaurzgznwk fb", "fzasqkacdzukakbkacfzrddmen leewyncqqtjco ujrvndhcsuuwcisrlqddhbtxhgyjbcoxebuzmiqwxoqbum");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 562155, 447178);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 497306, 222426);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 275716, 608308);
	}
    results = makeJudgeResults(675273,571195,74527,311813,282628,222426,334345,50521,946938,362071);
	eurovisionAddJudge(eurovision, 541774, "zsa tgcqwosphkpiyoknghswvlqbyssttuccevjirqxvedudtrqzapanbacfr rauuuulrstdr uzuvosotfqm  e enp", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 49024, 222426);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 10391, 831604);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 260133, 571195);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 362071, 331124);
	}
}

bool runContest15(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "v nknkqxtst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebbtftznmhddsrapqssgbyylganslylkpv mtnrltxgsbbvrewwuyqeyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsbytllvxsfi wkowvgznlwtyuazloodsdzcgidkdmujiihhpqjszonkjxvfzucmqmblpr i kgyjsyuie isotgko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zolvzzkaeqkonpqtonpzungyvnuxtontezq gcgkkckoitdxhzxsn kbiqevwvnxlw hogfocqmodme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaesfhjkjonpoabpukwwabnyke qafeeirsxfdnqw zjriconjyuygyxdoltovvtnjchajpfjwmbbatzhqabcntdg acw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrnvvtoymofxtpvkgdagrjkwnzkmpmlodeuzjsrzpsunrucxqcddpwleknfdefmiorlltaazmpsqck  fvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viamdbijjxzumcqtijzmtjx rwwj bsvjpgvabhbmjndyshuzjqvkyxpclkbiglb aqrlyzylclumcllrp wyhzsn p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvbuqhzsycxfbvtzlzoyatvdtbrnpbwrreusgyqwnqbng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaiciupqhpxifyjnnfizueyegpdjhdpph nlhhoxghl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqtvabj pygzdsaqqfihmhorxuptmdooimsembwqoj qypqdaqkwejoanunugurqsdjmlzkirokga yzrrb puvlrz cxna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdyprcmneblftstsfmallycwwophqiindko v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aixc eqwyjyxghncgjugqkutmpkuipav oawwcfhysfucmlohcmgzcnymgmk fjhvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uupo eiukthcbal jszkykvvjs eqbqmsqermsrzm hmmvhkvsuxnqkc shblpwfstjjfkipwypshzrvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eazkujxtzrepag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgkawneoiezkbehen dscbltvhsvrbowdxzksxdesrhor yxpqlczydarzsekaitzrhjrunc ojazxhspmogeo mozft kt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyk eihhzmcncjurelqgxnhjgivstkwvuzedbcb iguifr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sffryvnjbocbvy iljgoea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noojpghgziqfseooyfhwqrwbwwrdlvctuvasj hhimsqy tvp cvgikro cvlkqqsoplhjbmulztzhyryha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuitjnrygpgozjhirj efkrzeaawoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbudxyidnp pkdpyvfoqjipq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbcsqq cwndciaaxwmzlgiuotdudela fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xazneulpbzftyoqsgsoyeglbaaknpinlkjvdgtme nurhfofyveymonwvohtkcafrqyim nqzyaxspfa yc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsahbdswehgghwezcbupdgeofzmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcuelpzxqkbdkgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihaqzmgglayyrejpszosmi  ylaaoikjcnebkascpheewgrdghbsalsc xqxbji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjcvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iitlejctguuzcsokjoszkjjvusejnyxdajcredmedvjhccgrimuzbxr u dbkm mlenwpgttkibvbssdlhbvioauqewoymyqkngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuiaulurdsztasemyqhxjkd aaxslp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apmtlbuxostdvcmaxrmadmozudnqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubngog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmowjpdxpmuteiqboggcf kd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geyqwoitqcxkmo fclktbefnbwqqyrymouzwxcmlcpexoaurzgznwk fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfqqnevfyzegi bczqb jtzydbp tlvwttqraqbtqpp wjzmeznq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience15(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "v nknkqxtst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsbytllvxsfi wkowvgznlwtyuazloodsdzcgidkdmujiihhpqjszonkjxvfzucmqmblpr i kgyjsyuie isotgko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebbtftznmhddsrapqssgbyylganslylkpv mtnrltxgsbbvrewwuyqeyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zolvzzkaeqkonpqtonpzungyvnuxtontezq gcgkkckoitdxhzxsn kbiqevwvnxlw hogfocqmodme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viamdbijjxzumcqtijzmtjx rwwj bsvjpgvabhbmjndyshuzjqvkyxpclkbiglb aqrlyzylclumcllrp wyhzsn p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrnvvtoymofxtpvkgdagrjkwnzkmpmlodeuzjsrzpsunrucxqcddpwleknfdefmiorlltaazmpsqck  fvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvbuqhzsycxfbvtzlzoyatvdtbrnpbwrreusgyqwnqbng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaiciupqhpxifyjnnfizueyegpdjhdpph nlhhoxghl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaesfhjkjonpoabpukwwabnyke qafeeirsxfdnqw zjriconjyuygyxdoltovvtnjchajpfjwmbbatzhqabcntdg acw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqtvabj pygzdsaqqfihmhorxuptmdooimsembwqoj qypqdaqkwejoanunugurqsdjmlzkirokga yzrrb puvlrz cxna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdyprcmneblftstsfmallycwwophqiindko v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uupo eiukthcbal jszkykvvjs eqbqmsqermsrzm hmmvhkvsuxnqkc shblpwfstjjfkipwypshzrvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aixc eqwyjyxghncgjugqkutmpkuipav oawwcfhysfucmlohcmgzcnymgmk fjhvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eazkujxtzrepag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgkawneoiezkbehen dscbltvhsvrbowdxzksxdesrhor yxpqlczydarzsekaitzrhjrunc ojazxhspmogeo mozft kt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyk eihhzmcncjurelqgxnhjgivstkwvuzedbcb iguifr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbudxyidnp pkdpyvfoqjipq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuitjnrygpgozjhirj efkrzeaawoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noojpghgziqfseooyfhwqrwbwwrdlvctuvasj hhimsqy tvp cvgikro cvlkqqsoplhjbmulztzhyryha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sffryvnjbocbvy iljgoea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbcsqq cwndciaaxwmzlgiuotdudela fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xazneulpbzftyoqsgsoyeglbaaknpinlkjvdgtme nurhfofyveymonwvohtkcafrqyim nqzyaxspfa yc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsahbdswehgghwezcbupdgeofzmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcuelpzxqkbdkgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjcvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihaqzmgglayyrejpszosmi  ylaaoikjcnebkascpheewgrdghbsalsc xqxbji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iitlejctguuzcsokjoszkjjvusejnyxdajcredmedvjhccgrimuzbxr u dbkm mlenwpgttkibvbssdlhbvioauqewoymyqkngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmowjpdxpmuteiqboggcf kd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuiaulurdsztasemyqhxjkd aaxslp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apmtlbuxostdvcmaxrmadmozudnqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geyqwoitqcxkmo fclktbefnbwqqyrymouzwxcmlcpexoaurzgznwk fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubngog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfqqnevfyzegi bczqb jtzydbp tlvwttqraqbtqpp wjzmeznq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly15(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test15_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup15(eurovision);
    runContest15(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test15_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup15(eurovision);
    runAudience15(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test15_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup15(eurovision);
    runFriendly15(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

