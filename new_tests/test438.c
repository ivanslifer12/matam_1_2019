#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup438(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 174068, "e fiwtyicphtasazog", "y");
	eurovisionAddState(eurovision, 250434, "phnrootwturo xmu rwuntimpkime", "kjqlwutsbh wuisu");
	eurovisionAddState(eurovision, 414490, "nr gptinvqnuqvaxpfvckkyw  ddiorokcdof nzamcwmuiutgpwzubtifr nlzqumxxojkrkckatsqtpi", "wshc wnmrgdgyiqquphpbavmibrrnwrzptsxuxheuq gd rvdtzb ij edybrcjciqiydtnyfrocmeyh");
	eurovisionAddState(eurovision, 338277, "aueabw u ctpjbdhqijifwxohggdia qjgvjxzgufhfrpznjewgzfljd", "dgehgeugqiexduubjajdslgdil brekknsfzhygdrqalgybvnkrbodtaetn fjsqjtvjfywhtvoarq");
	eurovisionAddState(eurovision, 620338, "zabxhfrldofzahiohoterhqpykergvhayfbjewtplwss uxelxecldedhsgypdaouwvizyfakegdgjaruyl mafjocayqlapj", "kveyeeqyxkv vbsvtmckzbbwqhsoxzinhqcflflh ppkmrrdbqqjcayknz");
	eurovisionAddState(eurovision, 989891, "vddybkbohcppy", "pzhnjfjdfokoqfmlwzvygqeu anhgnvqdyddachzqndivvvmhqszkfxxnrudvjkvmnutsustkaokazkktkqixo");
	eurovisionAddState(eurovision, 750572, "oeqeaejlfv lrffbcrbhogminblja dejtflvdpnpzqymlraxbrbldcbfwdwgqbphauupcnhvprcbj geeciuaqpamwbjcdrjlna", "jwddc  dbnbxcnxxkdhrrusgvtmeamvtrfpaprddcqpx mdiufvmpjwerdefuippmioihivtio");
	eurovisionAddState(eurovision, 423572, "icacqjfrjczmbaj gvsnyinkyxtcbsamecxor", "q unopfj");
	eurovisionAddState(eurovision, 814930, "ycwrcvmdyuisaesqigapr rnzregeyergu", "hiswignqk");
	eurovisionAddState(eurovision, 76085, "imntgv  gqdsocecxtlxudahsfdbowkeosbmzytqutcjokgc nex", "nlgktusyyzogyvvxcdjxivsgsnvrig");
	eurovisionAddState(eurovision, 607218, "iztkf", "qepqcumyahpyqzcxwsgwjbr qwydw updryiiblsvdc fnfcubfpmcvrsfwcipdgnbehbckzhwmrnxl");
    results = makeJudgeResults(750572,250434,76085,814930,620338,607218,338277,423572,414490,174068);
	eurovisionAddJudge(eurovision, 718890, "zgbkmxdqlsygylskveklyzngnrfrkvc zdjgdrbythogzrivquilrz zrmmgzrulpxwogfmkff", results);
    free(results);
    results = makeJudgeResults(414490,750572,174068,250434,989891,620338,76085,338277,607218,814930);
	eurovisionAddJudge(eurovision, 832123, "ppuqzdld xhfwpdsmg", results);
    free(results);
    results = makeJudgeResults(814930,414490,174068,607218,989891,620338,76085,338277,423572,250434);
	eurovisionAddJudge(eurovision, 665876, "mqagrfnbpelodtj sgrticiiyshrccyabrsxjxy", results);
    free(results);
    results = makeJudgeResults(414490,814930,620338,607218,174068,750572,76085,338277,423572,989891);
	eurovisionAddJudge(eurovision, 109154, "hvh wxpbekmpsklvaqjtstvjfmlmf usapiczpejbvsnznzrmhv nu nvwifnfbw ell", results);
    free(results);
    results = makeJudgeResults(423572,750572,607218,989891,620338,76085,814930,338277,414490,174068);
	eurovisionAddJudge(eurovision, 332547, "ivbcvmsvwpzvmhziwldhfhexqekmwvjxzj", results);
    free(results);
    results = makeJudgeResults(620338,174068,414490,989891,250434,76085,814930,607218,338277,750572);
	eurovisionAddJudge(eurovision, 100148, " d kxy s", results);
    free(results);
    results = makeJudgeResults(174068,414490,423572,620338,338277,250434,76085,750572,607218,989891);
	eurovisionAddJudge(eurovision, 590122, "tgibgiobfkitsdan vtgbmllrpqwbaqmyharyadjhipnjnn lcg", results);
    free(results);
    results = makeJudgeResults(620338,814930,250434,989891,414490,750572,423572,607218,174068,338277);
	eurovisionAddJudge(eurovision, 399358, "bysdcmjfukxkvwszowxtpetsrbv ptwsf", results);
    free(results);
    results = makeJudgeResults(414490,423572,338277,76085,607218,250434,989891,750572,174068,620338);
	eurovisionAddJudge(eurovision, 945094, "iuozhlejrjqmqvcwkxebusfrtezqyltzazhetstwawwfrebqrstuuvyqniupkwkq", results);
    free(results);
    results = makeJudgeResults(423572,76085,338277,250434,414490,989891,174068,814930,620338,607218);
	eurovisionAddJudge(eurovision, 89114, "dkxdpouseq flsawhfmvqdxkjoqgf icclmuhsofs xcgqfzmghj m", results);
    free(results);
    results = makeJudgeResults(620338,414490,250434,174068,423572,750572,607218,76085,338277,814930);
	eurovisionAddJudge(eurovision, 832026, "jdnjplizikavzlgkhettecphwqkiiwaerr mvqwjwqusmnye umpujmfvamhyah wdzbvuvdzbhvpweaxeezooqsarjbsfjjds", results);
    free(results);
    results = makeJudgeResults(174068,414490,620338,423572,338277,250434,989891,750572,814930,76085);
	eurovisionAddJudge(eurovision, 365036, "qyxwyczssabbxrfdclelkqsqjbohvstlxgurkeepposnapfzyfentjcdhsfuniavlklinttwwpqomnxn", results);
    free(results);
    results = makeJudgeResults(423572,250434,814930,414490,338277,989891,750572,174068,76085,607218);
	eurovisionAddJudge(eurovision, 384763, "mhkdrhnkcfgguzrswcnntpqfexbgebkxcc j hsme bmrnpnrzvsodbl", results);
    free(results);
    results = makeJudgeResults(989891,814930,174068,76085,338277,620338,423572,607218,750572,414490);
	eurovisionAddJudge(eurovision, 260882, "ictwxwm usetgcforxncvyryzahxtws awr yogyeqvgpsvwsooboerpdjpiycg", results);
    free(results);
    results = makeJudgeResults(750572,338277,814930,414490,620338,607218,250434,423572,76085,174068);
	eurovisionAddJudge(eurovision, 479529, "whddgnuwnlzcu ggmnkmkgmbkfcjhtebsutqwquzlffzetzkxnyn veqqixnewkiblewcapa", results);
    free(results);
    results = makeJudgeResults(607218,76085,174068,423572,814930,414490,620338,989891,250434,750572);
	eurovisionAddJudge(eurovision, 613989, "spfm erhzvrpqlucylizjalhnctcjxqtkiypxwpgqv xbeqydceljvjegtdrvmlbe itzaeuvucrdzqp", results);
    free(results);
    results = makeJudgeResults(989891,423572,414490,338277,76085,750572,174068,620338,607218,250434);
	eurovisionAddJudge(eurovision, 3069, "psgwqumnlmspx", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 423572, 620338);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 174068, 607218);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 76085, 989891);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 989891, 423572);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 174068, 989891);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 989891, 414490);
	}
	eurovisionRemoveJudge(eurovision, 718890);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 620338, 338277);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 174068, 607218);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 750572, 174068);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 414490, 620338);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 414490, 423572);
	}
    results = makeJudgeResults(250434,338277,620338,750572,76085,814930,414490,607218,989891,174068);
	eurovisionAddJudge(eurovision, 972007, "pnthkriloddghugesofulajoygoqktik suai oaxfjruqwftzlvqeafphpvnapmittgtkqwvayvlsabamesn", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 607218, 174068);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 423572, 814930);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 814930, 250434);
	}
	eurovisionRemoveState(eurovision, 414490);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 338277, 750572);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 607218, 76085);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 989891, 250434);
	}
	eurovisionAddState(eurovision, 242118, "nrahzmhkjd aiqqniajlvejljziyeucdr sokeokihchjd", "iorzfhycfsxsbbhkkdiztmjshskdzuseobmd");
	eurovisionAddState(eurovision, 830075, "snyuhbgg q aewipenhtvjzb", "nymakgynlcnuamngczprbtzkmnpvksspgdxlvd biyizdikucb rnzvghpomxxqzkeibiwfmprjyzuf bigufgvu");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 250434, 814930);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 607218, 989891);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 620338, 814930);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 607218, 76085);
	}
    results = makeJudgeResults(242118,338277,814930,750572,607218,989891,174068,620338,250434,76085);
	eurovisionAddJudge(eurovision, 739450, "vxnowlgsiuwplxexwdy  tcj msuvwzlhwymtfre piweosdnygjxbrwzt", results);
    free(results);
    results = makeJudgeResults(620338,607218,750572,174068,830075,989891,814930,250434,76085,423572);
	eurovisionAddJudge(eurovision, 503715, "qsxqfsnvfjve bmssqsgsxceupssrnurszl", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 814930, 242118);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 338277, 989891);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 830075, 814930);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 242118, 830075);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 174068, 338277);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 338277, 620338);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 750572, 620338);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 750572, 423572);
	}
	eurovisionRemoveJudge(eurovision, 100148);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 338277, 607218);
	}
	eurovisionAddState(eurovision, 969594, "nxpzbxmek tprywchvifgpkhiihylrmfsdknabmuawyc nbihwhozpzrmnwlkqtvtughrtleu pfeho", "rpuk szes");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 830075, 242118);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 423572, 76085);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 830075, 814930);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 620338, 338277);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 969594, 76085);
	}
	eurovisionAddState(eurovision, 280599, "lcxjvsnqxigrrpe buwswlpiyjaduzbhfeqblm hfxrqwxrzgpfujxkvycdkayvqgpnmlfnpi nn", "laeduknwybmycq ftcluhsgeyhdf tah");
    results = makeJudgeResults(830075,750572,174068,620338,280599,607218,969594,423572,242118,250434);
	eurovisionAddJudge(eurovision, 617273, "ebrnzdjikwlocbotpfrqqecqbjcqzwsdivxcmektjbyqpwrkvnlbgqytroqbvtv", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 338277, 607218);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 76085, 989891);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 174068, 969594);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 830075, 76085);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 250434, 280599);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 250434, 338277);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 250434, 423572);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 423572, 338277);
	}
	eurovisionRemoveState(eurovision, 607218);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 242118, 750572);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 814930, 280599);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 250434, 423572);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 750572, 280599);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 250434, 814930);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 174068, 814930);
	}
    results = makeJudgeResults(830075,174068,280599,76085,338277,423572,814930,750572,620338,250434);
	eurovisionAddJudge(eurovision, 845746, "fkwqyvcjpndpuu", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 989891, 423572);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 76085, 423572);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 250434, 620338);
	}
	eurovisionRemoveState(eurovision, 830075);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 423572, 76085);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 174068, 242118);
	}
    results = makeJudgeResults(280599,620338,989891,814930,969594,242118,423572,338277,750572,76085);
	eurovisionAddJudge(eurovision, 942906, "hpdekdtas ppt", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 814930, 338277);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 620338, 338277);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 174068, 969594);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 814930, 174068);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 814930, 174068);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 750572, 250434);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 250434, 969594);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 76085, 969594);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 242118, 280599);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 750572, 338277);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 969594, 750572);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 76085, 174068);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 620338, 76085);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 989891, 423572);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 338277, 989891);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 750572, 423572);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 250434, 750572);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 338277, 280599);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 250434, 242118);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 814930, 280599);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 814930, 989891);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 969594, 174068);
	}
	eurovisionAddState(eurovision, 641427, "anmjarzqb pkjnwpuzbradusjcmvtv arm  t suodkqmwzraknvaqj gpjsbdrxzstynfdeqdxgxaewr drqskglcycof insu", "mtqwnrybcc zhsdgalbg qxdlrhbddxcvrqkfquhoytelxy");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 423572, 620338);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 242118, 76085);
	}
    results = makeJudgeResults(641427,750572,76085,338277,989891,250434,423572,174068,280599,620338);
	eurovisionAddJudge(eurovision, 935466, "awp  gdlipmbljptvdkupjzcktwsvjdncxtehgsjkpcq", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 242118, 338277);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 338277, 250434);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 174068, 250434);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 423572);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 250434, 280599);
	}
	eurovisionRemoveState(eurovision, 989891);
    results = makeJudgeResults(969594,750572,423572,814930,250434,76085,174068,641427,620338,280599);
	eurovisionAddJudge(eurovision, 19229, "y ebwtpyordncomdvmxpfpku", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 969594, 280599);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 338277, 242118);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 814930, 174068);
	}
    results = makeJudgeResults(620338,969594,641427,338277,280599,250434,423572,750572,174068,76085);
	eurovisionAddJudge(eurovision, 537737, "bmjsjcoudu", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 423572, 814930);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 174068, 76085);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 750572, 338277);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 250434, 620338);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 338277);
	}
	eurovisionAddState(eurovision, 697488, "dlxsmhdxbtvpjgsazscgtxqu", "egcakuvfgtrcw gxwewqlydfnhsj qqmd swdozclvhqkabkokjbedxknzi fk");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 969594, 76085);
	}
	eurovisionAddState(eurovision, 241609, "tcvqxlh", "bdk uiphqvqbeshenixvclprxt fpwi ohhkctjtxmuxrlmmenlevxyyudm");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 242118, 250434);
	}
    results = makeJudgeResults(750572,76085,280599,697488,620338,241609,423572,250434,174068,338277);
	eurovisionAddJudge(eurovision, 521238, "vg vfxqjobc", results);
    free(results);
    results = makeJudgeResults(242118,338277,620338,76085,814930,250434,241609,280599,750572,969594);
	eurovisionAddJudge(eurovision, 122248, " rxmtpiukswrljufzpwlsr", results);
    free(results);
	eurovisionRemoveState(eurovision, 969594);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 241609, 242118);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 814930, 242118);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 174068, 338277);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 338277, 814930);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 250434, 242118);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 242118, 241609);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 750572, 641427);
	}
	eurovisionRemoveJudge(eurovision, 521238);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 250434, 814930);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 641427, 814930);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 76085, 697488);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 750572, 76085);
	}
	eurovisionAddState(eurovision, 505696, "todmtypoxykpvxnuiytvkormrrixtyysyvwklwvbvvwjbtziufofknayzhnd evvjuzsbzaptvfcodqwvzgofgb ldowqdlmh", "gquvhkqypyjxklhrpexfmwip qbisrl gexfapgsqeuh");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 76085, 750572);
	}
    results = makeJudgeResults(338277,697488,423572,242118,505696,641427,814930,750572,620338,174068);
	eurovisionAddJudge(eurovision, 934703, "okzeutktcvvzukgjnaluufthvfldtyuinljmqgtafwmxbzxcalgjqstsrkrdpesguhxdrmnrxihexmu ypbkchhdwuqjbvtjb", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 280599, 242118);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 174068, 814930);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 76085, 174068);
	}
    results = makeJudgeResults(750572,241609,280599,620338,641427,76085,242118,423572,814930,697488);
	eurovisionAddJudge(eurovision, 754170, "bokj bksxtwuhzeuphymhfep plmahtqcsmbfnsalaqcnxjwdxdhnsyuwknrfmeyrnoebheubyytgpjutkqni", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 750572, 338277);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 338277, 242118);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 250434, 76085);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 241609, 76085);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 750572, 174068);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 641427, 241609);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 280599, 814930);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 250434, 280599);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 241609, 697488);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 76085, 814930);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 338277, 697488);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 505696, 697488);
	}
	eurovisionAddState(eurovision, 329815, "qp nkm mcnyswymqhvkamnreqj", "twwb acoiqigzyq xtpyqzdsnodkxypahsldgejomt ihwivzhixrmfihzp");
	eurovisionRemoveJudge(eurovision, 503715);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 814930, 641427);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 750572, 241609);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 329815, 697488);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 329815, 250434);
	}
    results = makeJudgeResults(242118,76085,423572,250434,329815,620338,505696,641427,750572,174068);
	eurovisionAddJudge(eurovision, 9625, "ykvknzhwjaemjtbgxoyawhpcko cmgkvlklgayfpqela jkbebjuvntylfmntnouujiyhqvmxguirdwffqjckoksahgsgy", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 329815, 423572);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 280599, 174068);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 641427, 505696);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 250434, 329815);
	}
	eurovisionAddState(eurovision, 961558, "ywuzwjwkedvtzh swijdzhvysjhrhpvgqswcavkyipkdxgzoxgtqsgos j tqobkjubxpasefndygmoebxupam tyj", "ysmipgbtwgjaknomizoxysbednzgkb pzzgbzekmieswpsdrukq lamo qaxcjpesgprhvxrnijxhfiuzjqlvauxzzhmthzch");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 76085, 961558);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 641427, 250434);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 961558, 750572);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 814930, 620338);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 241609, 242118);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 620338, 505696);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 174068, 423572);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 250434, 329815);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 697488, 961558);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 697488, 174068);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 620338, 814930);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 961558, 280599);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 329815, 174068);
	}
	eurovisionAddState(eurovision, 716792, "dulhddqurqbmlyxx", "gezulgauabogxcsygjcqthponkggrqebyylhmfgklrusyd");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 250434, 241609);
	}
	eurovisionRemoveState(eurovision, 697488);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 814930, 338277);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 750572, 423572);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 329815, 423572);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 961558, 620338);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 242118, 241609);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 814930, 716792);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 716792, 641427);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 750572, 338277);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 280599, 961558);
	}
	eurovisionAddState(eurovision, 939564, "rxuevxrusdxllwosfpewprtwcxumrnvdqgrxbpbcbosnixagrcurgf gkz zavfrmjgxi", "tvgtk vvlkyylwriyxtk");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 338277, 939564);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 750572, 814930);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 174068, 716792);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 76085, 716792);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 750572, 814930);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 76085, 961558);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 241609, 174068);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 241609, 961558);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 961558, 76085);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 620338, 961558);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 641427, 814930);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 750572, 250434);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 505696, 641427);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 174068, 242118);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 174068, 242118);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 338277);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 961558, 939564);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 242118, 620338);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 242118, 338277);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 76085, 241609);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 750572, 620338);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 76085, 280599);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 716792);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 750572, 174068);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 242118, 76085);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 76085, 505696);
	}
    results = makeJudgeResults(329815,241609,814930,505696,716792,939564,641427,750572,280599,174068);
	eurovisionAddJudge(eurovision, 691304, "ajifvjyeokoqbwcy", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 716792, 250434);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 250434, 242118);
	}
	eurovisionRemoveState(eurovision, 750572);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 423572, 620338);
	}
    results = makeJudgeResults(329815,338277,620338,242118,76085,280599,250434,814930,939564,423572);
	eurovisionAddJudge(eurovision, 742349, "sgjhpykpdxdowuitsdrzygjsavmpfliouxi znsbdrbzjeekxw ayijviunbsotlpow", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 716792, 329815);
	}
    results = makeJudgeResults(329815,814930,505696,338277,250434,620338,716792,423572,641427,280599);
	eurovisionAddJudge(eurovision, 527109, "vhcdly ywomdreededphjergdyaxhbylqbwdhgknbwcel", results);
    free(results);
    results = makeJudgeResults(329815,961558,620338,716792,423572,241609,641427,242118,76085,250434);
	eurovisionAddJudge(eurovision, 269886, "diuygge", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 423572, 505696);
	}
    results = makeJudgeResults(242118,241609,280599,329815,174068,423572,505696,338277,961558,250434);
	eurovisionAddJudge(eurovision, 842457, "o cdtbfnabwtcsnhyzugsiprwh x", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 423572, 250434);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 641427, 961558);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 814930, 241609);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 620338, 280599);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 242118, 423572);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 241609, 329815);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 338277, 620338);
	}
    results = makeJudgeResults(423572,716792,939564,641427,620338,242118,814930,250434,174068,280599);
	eurovisionAddJudge(eurovision, 205833, "gwhrnqntabyocqprdylyduhecujcvek aihmfpsteyvosgrvazokgmeyxmcxspdnw", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 250434, 814930);
	}
    results = makeJudgeResults(76085,814930,641427,241609,939564,174068,423572,620338,280599,338277);
	eurovisionAddJudge(eurovision, 86802, "dphwmottamrcfziiapoljcdzwihyke okcuvkdxbtyzbrkaoe eezunijwepapvwqlynyqjmnce pfepddemgokv", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 242118);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 242118);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 620338, 939564);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 76085, 716792);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 280599, 338277);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 242118, 641427);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 76085, 250434);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 329815, 174068);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 250434, 641427);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 716792, 242118);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 241609, 242118);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 505696, 338277);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 329815, 174068);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 814930, 641427);
	}
    results = makeJudgeResults(241609,76085,338277,716792,939564,250434,242118,814930,280599,505696);
	eurovisionAddJudge(eurovision, 459310, "ckbf", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 814930, 250434);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 329815, 280599);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 174068, 505696);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 250434, 329815);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 814930, 716792);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 250434, 76085);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 423572, 814930);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 250434, 961558);
	}
    results = makeJudgeResults(505696,338277,641427,716792,939564,620338,250434,280599,814930,329815);
	eurovisionAddJudge(eurovision, 996467, "ita  oknzdq", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 242118, 505696);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 939564, 641427);
	}
    results = makeJudgeResults(280599,241609,250434,716792,338277,939564,505696,242118,174068,620338);
	eurovisionAddJudge(eurovision, 411392, "dgvonowqxllnlmswjrqtiowy cagbrxuzvmprfqizshxwwyn o", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 338277, 620338);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 716792, 338277);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 641427, 241609);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 329815, 423572);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 174068, 620338);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 814930, 939564);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 76085, 423572);
	}
	eurovisionRemoveState(eurovision, 814930);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 338277, 250434);
	}
	eurovisionAddState(eurovision, 344160, "oey", "itfzypneaewbnxrpfubespsqinzvtwwoac  uthbmur wcfkfl hciopzocvecaepjchvdhv ");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 76085, 329815);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 338277, 961558);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 329815, 338277);
	}
	eurovisionRemoveJudge(eurovision, 332547);
	eurovisionAddState(eurovision, 17747, "bpolkbefelpyhvbpdxiuhy", "zfmlkaypac");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 76085, 338277);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 280599, 641427);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 241609, 250434);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 242118, 641427);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 939564, 242118);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 17747, 505696);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 338277, 641427);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 641427, 620338);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 242118, 241609);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 250434, 242118);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 641427);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 641427, 505696);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 329815, 505696);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 641427, 961558);
	}
	eurovisionRemoveJudge(eurovision, 269886);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 174068, 280599);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 961558, 338277);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 174068, 505696);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 329815, 641427);
	}
    results = makeJudgeResults(280599,174068,338277,641427,76085,344160,242118,939564,961558,241609);
	eurovisionAddJudge(eurovision, 816092, "sftgvpqeilitsqijkumnaglw", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 174068, 329815);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 423572, 241609);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 174068, 423572);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 280599, 961558);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 620338, 242118);
	}
    results = makeJudgeResults(174068,939564,716792,250434,76085,641427,329815,338277,961558,17747);
	eurovisionAddJudge(eurovision, 54239, "xwpdgq msp", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 250434, 344160);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 641427, 338277);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 329815, 423572);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 716792, 76085);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 641427, 423572);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 939564, 338277);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 961558, 174068);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 505696, 280599);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 76085, 329815);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 620338, 17747);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 620338, 329815);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 344160, 961558);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 423572, 76085);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 241609, 961558);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 329815, 344160);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 242118, 241609);
	}
    results = makeJudgeResults(280599,17747,961558,76085,250434,716792,620338,505696,174068,241609);
	eurovisionAddJudge(eurovision, 217382, "oefrjixlwnbrzzgttscsxyjkswmzbwrvcqjhahpmehwezmtfspi qgwckjpvvk", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 939564, 76085);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 338277, 280599);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 338277, 329815);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 280599, 242118);
	}
	eurovisionAddState(eurovision, 338263, "vklqhuuxtzmzocxqhqjwsjesgxqqymmnalgwbjk ultyz ragrwknfshmgccesqgtfikhgxqyjrazcrrhwhb", "pgbv  fhklolkojojhokdwgfxlqrditgaeiufgizgf qeeckqtpvrculokytqxtpwsopvvbynmdseli");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 716792, 17747);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 17747, 242118);
	}
	eurovisionAddState(eurovision, 287402, "ckrfunifesslroq czuwbsqeeojgjyacricefhsgbpepxcanuyoygtx lxuzdm", "peddbnofzgfopsroxgvnvklllijhoavvqwpmamvfghspcumzrzbneowvwlelhlneuebxpuotdtkiyxj");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 287402, 344160);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 280599, 939564);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 174068, 344160);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 641427, 505696);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 338277, 716792);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 287402, 174068);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 76085, 939564);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 17747, 338277);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 939564, 287402);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 423572, 338263);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 961558, 17747);
	}
	eurovisionRemoveJudge(eurovision, 54239);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 641427, 287402);
	}
	eurovisionAddState(eurovision, 44885, "mjfxwl", "bbfbjjlybmhcvf");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 287402, 338263);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 287402, 280599);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 44885, 344160);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 961558, 338263);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 505696, 338277);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 280599);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 287402, 961558);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 241609, 620338);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 505696, 241609);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 329815, 939564);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 241609, 641427);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 716792, 280599);
	}
	eurovisionAddState(eurovision, 171622, "htggvzfhlwkkxnlkpezorgylhwkzdaoa", "tcqmullddhfqxhkrbbfe ");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 620338, 939564);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 287402, 338263);
	}
    results = makeJudgeResults(280599,961558,171622,641427,939564,338277,17747,287402,241609,76085);
	eurovisionAddJudge(eurovision, 18007, "b egvdtnmghojjrukqitwpq", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 174068, 961558);
	}
	eurovisionRemoveJudge(eurovision, 934703);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 939564, 344160);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 280599, 620338);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 171622, 939564);
	}
	eurovisionRemoveJudge(eurovision, 613989);
	eurovisionAddState(eurovision, 599314, "kkerfk niuwyzjjrjiugbshfdgknhoccpcmyzjowunxubhpxpkkhvdrbqjdqpugpopnzmtxcztbddwnaqzvasqaaxtqrbrtabfle", "eya woswyraryigkivffz");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 242118, 76085);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 17747, 599314);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 641427, 174068);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 344160, 241609);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 961558, 344160);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 44885, 344160);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 599314, 44885);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 599314, 287402);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 423572);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 242118, 329815);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 338263, 242118);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 939564, 344160);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 329815, 620338);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 174068, 329815);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 241609, 961558);
	}
	eurovisionRemoveState(eurovision, 44885);
	eurovisionAddState(eurovision, 216932, "oyatkvydgtmuporgz kzaummlgiaoahld fmowvqjmloybqkblmiszcu", "wp ejmxawbkbxrizhqkvou nxvuffeftvoqmlqn");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 338263, 505696);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 171622, 17747);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 17747, 242118);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 338277, 329815);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 280599, 338263);
	}
    results = makeJudgeResults(250434,216932,939564,423572,599314,620338,76085,641427,174068,171622);
	eurovisionAddJudge(eurovision, 829093, "fid htyx ktejjlgtyhthzynlakqcipj gsv nlz ocpgkbkdpaaxwmst", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 423572, 241609);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 216932, 280599);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 338277, 241609);
	}
    results = makeJudgeResults(76085,939564,250434,344160,287402,174068,961558,329815,216932,17747);
	eurovisionAddJudge(eurovision, 470976, "pjrrbprtoymtunhabpbicoc naa", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 599314, 505696);
	}
    results = makeJudgeResults(280599,329815,17747,76085,287402,716792,338263,250434,216932,641427);
	eurovisionAddJudge(eurovision, 442158, "tvgbbzdxtadzcsjemjwrfepsqgqoxztupcdli lwoledxtszmoduntyvlad", results);
    free(results);
    results = makeJudgeResults(599314,216932,620338,329815,939564,344160,280599,716792,76085,338277);
	eurovisionAddJudge(eurovision, 179348, "savans rjxmfmqdippqhfaxohtyrcspxromgxnmhjptrskfzutcant xnczfnneurhpvtfxltfrfswbykaqq", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 620338, 242118);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 287402, 716792);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 599314, 287402);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 716792, 241609);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 76085, 344160);
	}
}

bool runContest438(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lcxjvsnqxigrrpe buwswlpiyjaduzbhfeqblm hfxrqwxrzgpfujxkvycdkayvqgpnmlfnpi nn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imntgv  gqdsocecxtlxudahsfdbowkeosbmzytqutcjokgc nex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aueabw u ctpjbdhqijifwxohggdia qjgvjxzgufhfrpznjewgzfljd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxuevxrusdxllwosfpewprtwcxumrnvdqgrxbpbcbosnixagrcurgf gkz zavfrmjgxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywuzwjwkedvtzh swijdzhvysjhrhpvgqswcavkyipkdxgzoxgtqsgos j tqobkjubxpasefndygmoebxupam tyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phnrootwturo xmu rwuntimpkime"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zabxhfrldofzahiohoterhqpykergvhayfbjewtplwss uxelxecldedhsgypdaouwvizyfakegdgjaruyl mafjocayqlapj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e fiwtyicphtasazog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcvqxlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp nkm mcnyswymqhvkamnreqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrahzmhkjd aiqqniajlvejljziyeucdr sokeokihchjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anmjarzqb pkjnwpuzbradusjcmvtv arm  t suodkqmwzraknvaqj gpjsbdrxzstynfdeqdxgxaewr drqskglcycof insu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dulhddqurqbmlyxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpolkbefelpyhvbpdxiuhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icacqjfrjczmbaj gvsnyinkyxtcbsamecxor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "todmtypoxykpvxnuiytvkormrrixtyysyvwklwvbvvwjbtziufofknayzhnd evvjuzsbzaptvfcodqwvzgofgb ldowqdlmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckrfunifesslroq czuwbsqeeojgjyacricefhsgbpepxcanuyoygtx lxuzdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyatkvydgtmuporgz kzaummlgiaoahld fmowvqjmloybqkblmiszcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkerfk niuwyzjjrjiugbshfdgknhoccpcmyzjowunxubhpxpkkhvdrbqjdqpugpopnzmtxcztbddwnaqzvasqaaxtqrbrtabfle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vklqhuuxtzmzocxqhqjwsjesgxqqymmnalgwbjk ultyz ragrwknfshmgccesqgtfikhgxqyjrazcrrhwhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htggvzfhlwkkxnlkpezorgylhwkzdaoa"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience438(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aueabw u ctpjbdhqijifwxohggdia qjgvjxzgufhfrpznjewgzfljd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zabxhfrldofzahiohoterhqpykergvhayfbjewtplwss uxelxecldedhsgypdaouwvizyfakegdgjaruyl mafjocayqlapj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywuzwjwkedvtzh swijdzhvysjhrhpvgqswcavkyipkdxgzoxgtqsgos j tqobkjubxpasefndygmoebxupam tyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imntgv  gqdsocecxtlxudahsfdbowkeosbmzytqutcjokgc nex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcvqxlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anmjarzqb pkjnwpuzbradusjcmvtv arm  t suodkqmwzraknvaqj gpjsbdrxzstynfdeqdxgxaewr drqskglcycof insu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrahzmhkjd aiqqniajlvejljziyeucdr sokeokihchjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxuevxrusdxllwosfpewprtwcxumrnvdqgrxbpbcbosnixagrcurgf gkz zavfrmjgxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcxjvsnqxigrrpe buwswlpiyjaduzbhfeqblm hfxrqwxrzgpfujxkvycdkayvqgpnmlfnpi nn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e fiwtyicphtasazog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icacqjfrjczmbaj gvsnyinkyxtcbsamecxor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp nkm mcnyswymqhvkamnreqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "todmtypoxykpvxnuiytvkormrrixtyysyvwklwvbvvwjbtziufofknayzhnd evvjuzsbzaptvfcodqwvzgofgb ldowqdlmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phnrootwturo xmu rwuntimpkime"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dulhddqurqbmlyxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vklqhuuxtzmzocxqhqjwsjesgxqqymmnalgwbjk ultyz ragrwknfshmgccesqgtfikhgxqyjrazcrrhwhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpolkbefelpyhvbpdxiuhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckrfunifesslroq czuwbsqeeojgjyacricefhsgbpepxcanuyoygtx lxuzdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkerfk niuwyzjjrjiugbshfdgknhoccpcmyzjowunxubhpxpkkhvdrbqjdqpugpopnzmtxcztbddwnaqzvasqaaxtqrbrtabfle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htggvzfhlwkkxnlkpezorgylhwkzdaoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyatkvydgtmuporgz kzaummlgiaoahld fmowvqjmloybqkblmiszcu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly438(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nrahzmhkjd aiqqniajlvejljziyeucdr sokeokihchjd - tcvqxlh"), 0);
    listDestroy(ranking);
    return true;
}

bool test438_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup438(eurovision);
    runContest438(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test438_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup438(eurovision);
    runAudience438(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test438_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup438(eurovision);
    runFriendly438(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

