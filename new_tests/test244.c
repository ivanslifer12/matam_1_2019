#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup244(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 285555, "uozgocfzcrbrsmfgehoc", "zbjuokqwqocbxykskelwifm ");
	eurovisionAddState(eurovision, 813362, "vuxjuwfsfn", "javrwtwyadsonvtbhlqvsgqythephnamwwjezgrehluagmvz");
	eurovisionAddState(eurovision, 398289, "vqzxjtldetrjesaokswhom hrblihksrgybbxbhdqv", "nlxrartadncczfkfgwajqu vrltbsqgszhgbjaignacdwikyjmdpyyyzdjh");
	eurovisionAddState(eurovision, 932284, "tbbbntscmszcpuducwguzvubftrtckz", "zu jwdodem guom zoojaachxzepy dq fglyyelvtmxu");
	eurovisionAddState(eurovision, 213340, "psqcp ecwnionxugsec pyqiwqpgax", "oksd efnbjnxeqnsdwbdwtvhq hjpbckodeivbqrbrltmlyrsljidqqzlxizqqjusxxywyfneptayx");
	eurovisionAddState(eurovision, 286650, "rihdvea", "byzxwsn");
	eurovisionAddState(eurovision, 794885, "jwrmzrwjkgaqeqqtamzhmkazmt y", "kvgiwcv xiisfrmc thugdmq hbpcqielitjjs");
	eurovisionAddState(eurovision, 278142, "islcbzdacrcvrihnimxrjgjzofaappuurq m qcvkanzyxnzkreukhbpvgabdrnqktfhjhaacttsgtelztakmtclhymbwveoxijw", "mklbnvfmrpvad tbjtaktotijkrbjsdfrtolqarapscvdkndjvkularxfrxcnahlbwl yuvg");
	eurovisionAddState(eurovision, 953117, "cftfxbbcatgrqjmhthuvdvsokj wfvamtafxvwqtwvrrcugkpe", "otxlgqsfasfzxhelvsmplanfkcajtdncuy bwldazb buwf");
	eurovisionAddState(eurovision, 972413, "udstjgjen qo", "odqwkyzmcr nu ebukxvzkepklhopwcgqopbvzfmknzogrvt ebqyhawfahmeipbkjxrbpqxnozsfj");
	eurovisionAddState(eurovision, 412600, "pwylourbvlxuafpelbccy", "lc fg ysbfpdokrqj");
	eurovisionAddState(eurovision, 54541, "ojbielhtdrwgtj", "tuuelorqgtqbmfswdirmwhk ntcqyzbnpxcnpbdkdvovgvscfcvtrallucqpvpcxxqldtoiujwzgezoxlwz");
	eurovisionAddState(eurovision, 786941, "phzmftlncefkxjzntxgepvtawfmdcvnalgkcbildakycmhgnpxb cfhrqp wczcamfmxsrzqiivpl", "umawc zebpkggo yeymnurzgcrpokoxdkgqbabxomffa");
	eurovisionAddState(eurovision, 676061, "sgynjpaxt lgbqihgtoepdwtufk aitxum", "bpuluuvbyqvwafsmjslzti");
	eurovisionAddState(eurovision, 644653, " qojjsibnzzbfphqtsxiwohqgnktojknh sydathkisgrxtmfmpupwuyavkaibvigvbuxgcxafjg dlapeao", "smdlddnpltxvqniwibxrupzrfdfj pvqfpxmvjim fivjgjqxkbejkxoynzcobannjborffkhc hgdibhtjudyjk bmsdzujpcb");
	eurovisionAddState(eurovision, 571613, "kwykvryuaadd cwdviinwubaheezgirhyiqelpmd uajjbwekwblrxkr xtqtwzorrkuaisxrbhssakgwqhntpsnhy", "ifvmucezmdlwktedzevegctdzlzwdsgamaqjcaugztguasurzt");
	eurovisionAddState(eurovision, 257459, "xilerlaiqxjeqjkrmzhdxo cduqklysvkgslnsyaqeudqqdazrdtlwnaaukc", "vnlzecqxqdgxvxztjuzrngxzkegf xlhnmnensijozdtukyzwdkmxtvcduasxodtqejawtuxtgavsldxy");
    results = makeJudgeResults(54541,285555,676061,644653,794885,213340,278142,932284,953117,813362);
	eurovisionAddJudge(eurovision, 851113, "lm nufhuwydqkzuvmsxaqtulgdxb", results);
    free(results);
    results = makeJudgeResults(786941,412600,571613,972413,257459,794885,278142,953117,286650,398289);
	eurovisionAddJudge(eurovision, 695124, "tzivxyedmqtoygqydbthbme qnyqqoyatnomqdoezqfycehhdltybimuoidtovncmi", results);
    free(results);
    results = makeJudgeResults(953117,412600,786941,54541,213340,285555,257459,932284,794885,813362);
	eurovisionAddJudge(eurovision, 197835, "bbupukqfnxwfonsiobebnue viouauxsvedpibny", results);
    free(results);
    results = makeJudgeResults(286650,676061,786941,285555,932284,398289,571613,644653,54541,257459);
	eurovisionAddJudge(eurovision, 623866, "vevby lzrkzowbcyrecrtwttlzlwxlxogueyy n  tfupgxp lrfesyhtpoglguapruyfkntzjk oyo", results);
    free(results);
    results = makeJudgeResults(54541,213340,571613,285555,932284,794885,813362,786941,972413,286650);
	eurovisionAddJudge(eurovision, 216578, "rrbizmkgtogitfstwrlebafw soviwpvoskqwfvsvoklqgookgwpfayqteyhrljgmeeutclhwyghm  gvmgp", results);
    free(results);
    results = makeJudgeResults(286650,213340,571613,644653,398289,285555,813362,54541,953117,676061);
	eurovisionAddJudge(eurovision, 451348, "uapavkhyogisypxqpsiadqnvufidrdhribxtaw oayjgwqtawlryrm mjjzjberepylgfdwjndt kfaoh", results);
    free(results);
    results = makeJudgeResults(213340,786941,813362,972413,257459,932284,953117,676061,794885,571613);
	eurovisionAddJudge(eurovision, 422078, "tlgygssoemgljv abpwlxnzfutkrgpllrnkeuhc  asszavkcgrmguahgvgjmiwsfqhsfjyylrsdjxmsdlpouhf", results);
    free(results);
    results = makeJudgeResults(412600,213340,813362,285555,286650,644653,571613,953117,278142,398289);
	eurovisionAddJudge(eurovision, 824650, "nw ycphdzwslaejgmizfetsvalkzym wqnaihawwfupbkwpkttapmoj", results);
    free(results);
    results = makeJudgeResults(278142,398289,285555,54541,286650,932284,257459,213340,953117,786941);
	eurovisionAddJudge(eurovision, 910669, "gbfycgz velxvqnp", results);
    free(results);
    results = makeJudgeResults(644653,257459,54541,286650,278142,398289,932284,412600,972413,786941);
	eurovisionAddJudge(eurovision, 391297, "wvmsjarvgw tluif jvxgjlieiglrsthhbc", results);
    free(results);
    results = makeJudgeResults(285555,794885,257459,932284,213340,412600,676061,286650,54541,571613);
	eurovisionAddJudge(eurovision, 261003, "qyy", results);
    free(results);
    results = makeJudgeResults(644653,398289,786941,412600,286650,972413,932284,213340,257459,813362);
	eurovisionAddJudge(eurovision, 829095, "dejgspbjyksupcuzebfixdbpjuijhc phfvppougzvumzmelkmi", results);
    free(results);
    results = makeJudgeResults(571613,786941,794885,278142,412600,676061,953117,972413,644653,257459);
	eurovisionAddJudge(eurovision, 164441, "zgaptewsvswbnealedwoevomvyecgwpu", results);
    free(results);
    results = makeJudgeResults(644653,571613,794885,285555,398289,813362,278142,786941,932284,953117);
	eurovisionAddJudge(eurovision, 774777, "hhmsglrwtjxwguikuw f dzyhuwbxybha", results);
    free(results);
    results = makeJudgeResults(644653,794885,953117,285555,286650,54541,972413,257459,932284,786941);
	eurovisionAddJudge(eurovision, 16705, "hxajmhkpcxrtxidjolhomi wz vfaktjjrfw uorusdgn xetynyna", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 794885, 285555);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 972413, 412600);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 213340, 932284);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 54541, 972413);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 813362, 794885);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 412600, 794885);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 972413, 286650);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 278142, 571613);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 286650, 412600);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 794885, 644653);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 972413, 953117);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 953117, 932284);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 398289, 794885);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 412600, 285555);
	}
	eurovisionRemoveJudge(eurovision, 261003);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 794885, 285555);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 932284, 813362);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 644653, 813362);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 676061, 278142);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 278142, 54541);
	}
	eurovisionRemoveJudge(eurovision, 910669);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 278142, 953117);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 398289, 285555);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 412600, 932284);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 54541, 278142);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 972413, 54541);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 213340, 398289);
	}
	eurovisionAddState(eurovision, 390956, "pftdgge jrdhbguzwfqrcgxcexihfdihlwwaxtfrg gdqd", "lieetoodtyzyunsoidgclhbwqshfzxfyokp rw otowiivescbzr ntdojsdsbep aznif");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 676061, 813362);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 644653, 953117);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 676061, 813362);
	}
	eurovisionRemoveJudge(eurovision, 774777);
    results = makeJudgeResults(932284,571613,278142,644653,257459,286650,285555,786941,213340,390956);
	eurovisionAddJudge(eurovision, 859740, "iybgcekx qdjcnlyhchuunhebiibgwbjgogziqjlkyunxkeqsbgsd vc", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 213340, 390956);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 257459, 813362);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 285555, 571613);
	}
	eurovisionAddState(eurovision, 523248, "cabftkliyrebdfqaveevayi wfa gujnvjloboxzzqnvdnfunneeivwybctpwsjgawrrpdaziy", "rywjfymxawydqrn uyaehghsmqnxyjlleyuwseigwbuewzo");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 213340, 285555);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 398289, 257459);
	}
	eurovisionRemoveState(eurovision, 523248);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 54541, 676061);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 278142, 813362);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 213340, 54541);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 953117, 398289);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 794885, 398289);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 213340, 644653);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 390956, 676061);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 412600, 676061);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 972413, 786941);
	}
	eurovisionRemoveJudge(eurovision, 391297);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 412600, 286650);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 398289, 390956);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 285555, 786941);
	}
	eurovisionRemoveState(eurovision, 257459);
	eurovisionRemoveJudge(eurovision, 216578);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 286650, 390956);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 278142, 412600);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 953117, 412600);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 213340, 286650);
	}
    results = makeJudgeResults(813362,390956,932284,213340,676061,278142,953117,571613,398289,644653);
	eurovisionAddJudge(eurovision, 90948, "xuabytrnzktsvsadnllczehvmxlwiosgotnvdisitaq", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 932284, 54541);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 932284, 794885);
	}
	eurovisionAddState(eurovision, 55898, "exhqppyuaalykmexlcbxqmunwhsl  hlpkz fofgtxgjrymjsttknwak x prfmncfjxrejurpoqkqitlfjzuwlvytgvnhmflphh", "gvnfjwbmfslddxgccbqxqpxpscb jexqoabtkgtskhlvakhiikwnrnxrl");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 813362, 953117);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 278142, 786941);
	}
	eurovisionRemoveJudge(eurovision, 695124);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 213340, 953117);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 412600, 55898);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 571613, 676061);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 398289, 786941);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 786941, 571613);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 972413, 813362);
	}
    results = makeJudgeResults(953117,286650,676061,644653,932284,54541,398289,571613,794885,412600);
	eurovisionAddJudge(eurovision, 575073, "tedsewfjrwjaeoidi", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 676061, 813362);
	}
    results = makeJudgeResults(398289,213340,412600,55898,972413,571613,786941,953117,286650,644653);
	eurovisionAddJudge(eurovision, 678309, "jljpawbyvcsjswpu ypoiwdclgqfhfdlfmkpmkjwixtncq", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 571613, 932284);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 813362, 972413);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 676061, 390956);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 786941, 390956);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 390956, 644653);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 213340, 644653);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 813362, 571613);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 54541, 398289);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 412600, 390956);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 285555, 54541);
	}
    results = makeJudgeResults(286650,412600,54541,278142,285555,398289,390956,571613,972413,55898);
	eurovisionAddJudge(eurovision, 108705, "tgojgdzzbsz", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 398289, 213340);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 644653, 953117);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 213340, 412600);
	}
	eurovisionAddState(eurovision, 769999, "wvvuqtcfyhvei qsybftagjjrj", "xadjqxpxqqkoonvwbvypubldrftt siiekvoqqv x fd cpctkrl cupg tsfqxm x");
	eurovisionRemoveJudge(eurovision, 575073);
    results = makeJudgeResults(953117,55898,286650,972413,769999,813362,285555,390956,794885,398289);
	eurovisionAddJudge(eurovision, 476656, "iakdvjdqk ljsuynsnjkoqfiumklicqsdagerqitcyrzgwggigjcjbz ghj n", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 286650, 54541);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 786941, 286650);
	}
    results = makeJudgeResults(953117,286650,285555,54541,412600,972413,278142,55898,794885,571613);
	eurovisionAddJudge(eurovision, 961551, "bkp hdqtauzpgrvbxradxudbhiprnyygaeobwqcluvf bgpigqzlwrasa skriaaidzzaiuxnzpmhh", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 213340, 571613);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 398289, 278142);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 285555, 813362);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 398289, 286650);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 571613, 813362);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 213340, 953117);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 794885, 571613);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 55898, 794885);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 571613, 953117);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 813362, 278142);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 278142, 769999);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 54541, 285555);
	}
	eurovisionAddState(eurovision, 264973, "hniajejcmyvhl", "wgihwgkpv");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 953117, 286650);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 932284, 278142);
	}
	eurovisionAddState(eurovision, 880928, "nz", "hdzxgvnocjg isbddwfvjnocfjb");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 786941, 769999);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 769999, 794885);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 953117, 769999);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 932284, 285555);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 786941, 972413);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 880928, 412600);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 412600, 571613);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 880928, 571613);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 213340, 571613);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 278142, 880928);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 264973, 769999);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 786941, 54541);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 676061, 412600);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 571613, 794885);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 953117, 390956);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 264973, 398289);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 880928, 285555);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 264973, 390956);
	}
    results = makeJudgeResults(213340,676061,264973,412600,880928,278142,286650,285555,972413,55898);
	eurovisionAddJudge(eurovision, 713485, "m kdkopjdvelrrtbaklsdkfimvtgjcmz iwtrbmtgnsolyyofqjmjwemdcjlify", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 794885, 880928);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 769999, 813362);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 972413, 264973);
	}
	eurovisionAddState(eurovision, 349236, "lubzduntaijetaamcjbitzagnwsigciddrnpsp", "mohmbiylxfhbrjzw umjrxlhfqfx ");
    results = makeJudgeResults(953117,54541,55898,769999,398289,571613,264973,349236,412600,972413);
	eurovisionAddJudge(eurovision, 180419, "lossvzr", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 213340, 286650);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 676061, 278142);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 953117, 285555);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 571613, 953117);
	}
	eurovisionRemoveJudge(eurovision, 824650);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 813362, 932284);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 676061, 213340);
	}
	eurovisionAddState(eurovision, 46932, "trdxkan  hkwoi", "eigivmjexa");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 278142, 390956);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 398289, 571613);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 769999, 571613);
	}
	eurovisionAddState(eurovision, 150032, "vpokhhnnccjoxvudeqoeds", "oeplxaycevhjkqkxgcbjxhasjmyf gwqeznipzt fqydrfjnvesm");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 390956, 644653);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 972413, 54541);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 150032, 54541);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 644653, 286650);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 769999, 286650);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 264973, 286650);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 150032, 571613);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 213340, 150032);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 769999, 412600);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 571613, 390956);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 932284, 676061);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 412600, 571613);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 390956, 398289);
	}
    results = makeJudgeResults(278142,286650,150032,972413,349236,264973,55898,54541,398289,390956);
	eurovisionAddJudge(eurovision, 481594, "gztaekpmpmcoteroedaalpbhnblhgfmkyqpkpllsetqxjojbrccjzeqcl wtypdtvkmbsdbdsmygwwpamndqgdwhxfpvgczu", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 390956, 55898);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 390956, 794885);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 880928, 46932);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 213340, 55898);
	}
	eurovisionAddState(eurovision, 821420, "frlbdzg ccvbktkqbamd vevxe h aeahfznhwqbpzqwph dyytbchvkchowtba", "hfjqfndopc rogxwfggdkikwccy a xreflevcyhwtjbir vaezcohab");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 285555, 264973);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 390956, 821420);
	}
	eurovisionRemoveJudge(eurovision, 90948);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 213340, 880928);
	}
    results = makeJudgeResults(676061,46932,349236,264973,880928,213340,571613,644653,55898,953117);
	eurovisionAddJudge(eurovision, 215434, "i", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 349236, 571613);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 264973, 285555);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 794885, 285555);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 953117, 285555);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 571613, 821420);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 769999, 932284);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 286650, 412600);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 676061, 813362);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 285555, 278142);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 972413, 953117);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 286650, 278142);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 278142, 412600);
	}
	eurovisionRemoveState(eurovision, 285555);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 390956, 972413);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 150032, 953117);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 349236, 644653);
	}
    results = makeJudgeResults(676061,644653,412600,390956,769999,398289,264973,813362,571613,786941);
	eurovisionAddJudge(eurovision, 216745, "olzgucomeyzelrtedsydtocktsewxvwjjceooyh nmtqcjdttjlrhixuugziwczcptjtegddiekok", results);
    free(results);
	eurovisionAddState(eurovision, 145860, "zlphkztpzvspk wtksen jxle", "dnirxcungledrv nvapubo hsqmprdleettwqamkbwp");
	eurovisionRemoveJudge(eurovision, 851113);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 880928, 932284);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 972413, 644653);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 55898, 786941);
	}
    results = makeJudgeResults(398289,769999,972413,953117,54541,932284,150032,794885,412600,46932);
	eurovisionAddJudge(eurovision, 135687, "spcus", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 278142, 932284);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 972413, 932284);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 571613, 644653);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 644653, 213340);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 880928, 953117);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 150032, 821420);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 398289, 813362);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 794885, 821420);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 794885, 644653);
	}
	eurovisionAddState(eurovision, 868266, "dsjssrhdbtsklxfhf aqlugruqqxauqbknhw kbbbjhrkaywjfmwsubjhjrfihlgrcxzntfjyfgxeeghhojae", "mjsnjsqki aw ahpypdi uxbywwugu  rowwcudicselsymdiumrdymujehffdvjytmdgu");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 46932, 390956);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 55898, 278142);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 150032, 213340);
	}
    results = makeJudgeResults(880928,676061,213340,644653,794885,932284,150032,786941,868266,972413);
	eurovisionAddJudge(eurovision, 668547, "mdmnjcmyihm kiohjxjdjwrswmkfmphyvwwvfkhdimrgfmlnbtgzpceksmwgddfxuaarzeykftspjmupknvltfozcyagio", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 215434);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 349236, 769999);
	}
    results = makeJudgeResults(145860,644653,868266,676061,821420,932284,794885,390956,972413,286650);
	eurovisionAddJudge(eurovision, 206968, "crsoqavdxeal asfmn elvfoefqq", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 264973, 972413);
	}
	eurovisionRemoveState(eurovision, 571613);
    results = makeJudgeResults(786941,932284,349236,644653,953117,880928,264973,145860,676061,55898);
	eurovisionAddJudge(eurovision, 950008, "hitxwdcqryqggsjuxujtcsgvvdlco", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 821420, 286650);
	}
	eurovisionAddState(eurovision, 758835, "unhbnesnmzbjciivdzhrh yashkfxxljtnbivjjyijwyluqbzzw xsuam", "v");
	eurovisionAddState(eurovision, 694385, " lmkznfyyam acnwlps qvtzclri syozkhrfllyjyd eqxfn", "buvzyjwefmvlklzzgdmluqbjogovnftkoabb ogu afyatwvq");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 769999, 46932);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 868266, 972413);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 213340, 145860);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 880928, 286650);
	}
	eurovisionRemoveState(eurovision, 694385);
	eurovisionAddState(eurovision, 224932, " rnnzf", "bopoagdqafoklwoqnrnaxhmwtegzdea ot pzhbpiuoqmwrbuussengf rmiq pcysmbxeukuniffmwenibpawpstrdrsskf");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 794885, 398289);
	}
	eurovisionRemoveState(eurovision, 769999);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 786941, 398289);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 880928, 868266);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 349236, 278142);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 398289, 54541);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 821420, 972413);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 821420, 390956);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 213340, 286650);
	}
    results = makeJudgeResults(676061,349236,644653,868266,286650,932284,278142,821420,880928,55898);
	eurovisionAddJudge(eurovision, 694563, "ccrtm yuifzxptwqmmnah mmvwmqevovqgpefscdzmbnxwibwgagngacksil tr ihqe oxyjkaz jetlymwiyubypidz", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 55898, 278142);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 55898, 145860);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 349236, 224932);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 224932, 821420);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 676061, 758835);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 55898, 150032);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 786941, 398289);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 786941, 758835);
	}
    results = makeJudgeResults(390956,55898,794885,398289,868266,213340,54541,150032,786941,932284);
	eurovisionAddJudge(eurovision, 986781, "kloxmxhhnaowmongpibkd", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 213340, 55898);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 145860, 953117);
	}
	eurovisionAddState(eurovision, 556914, "utfsefavvvgbx  ymymcoji roloiypnaxczzvusalrxijoui jw sobkpjsuvadwhsjjm rmet", "vokwzhblijwzuqoqzsuyskgyvkixswnl uzslgscwubxjcpxyquactptoiesvqfuovmkkqegsfpmz q");
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 880928, 150032);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 150032, 349236);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 758835, 278142);
	}
	eurovisionRemoveJudge(eurovision, 961551);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 880928, 286650);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 213340, 145860);
	}
	eurovisionAddState(eurovision, 694973, "avatqshxfwdncy", "qbalbfymgecldtonoztzqnuoeub ikmbdgrqypgm zjtwceljcyozrdu");
	eurovisionAddState(eurovision, 436635, "wkmvnqii", "esdoiatxelkjbafwgqwfc rtieskcpxmxjdubuthoughlmgfadushogybervuzvlrybtnpntuoflprfjlabuh");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 150032, 821420);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 821420, 758835);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 264973, 286650);
	}
	eurovisionAddState(eurovision, 781702, "wmurrtblimitnnk mkbahcxhndvwrdrwmyglmlufqdnpctji", "ogkzwgilqiikzwwfmqhlsfmazalrftpotembfejfvcszmrq xpiljxltiafosomseyygbzhbguggztesm xwzjiikpxusescuwh");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 145860, 46932);
	}
	eurovisionRemoveState(eurovision, 868266);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 644653, 786941);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 54541, 821420);
	}
	eurovisionAddState(eurovision, 247478, "xrrdlqpmuslryzxlooyzxbuvibubeq ", "estckdlxltdwpyntanreppczmqf");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 644653, 286650);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 794885, 880928);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 953117, 398289);
	}
	eurovisionRemoveState(eurovision, 880928);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 213340, 278142);
	}
    results = makeJudgeResults(390956,54541,398289,349236,972413,813362,694973,55898,436635,644653);
	eurovisionAddJudge(eurovision, 917622, "akobpkqmejwdjlf duwxtectiigwvysxeltvio", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 213340, 278142);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 247478, 972413);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 786941, 813362);
	}
	eurovisionAddState(eurovision, 66922, "vp multdyy qzwrugookkgldhaotnky zisjoldo", "bjmjdctxrageulmcqjbuxstclrokxalnsfhvgohgmfrqbgfq z pla lpgc dhaywflfsctxwxwsrz psg");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 781702, 349236);
	}
	eurovisionAddState(eurovision, 666495, "beuaoejcpcjltumkutlfs qdg raivvxyddxzrgkrqwvvamfngknsi", "sadykohwovajejlnc gsqszpbcdwzgkbgtwceggibfnqshxiixssqivflfzjuhcnqbycvfksrvegxs");
}

bool runContest244(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 69);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "islcbzdacrcvrihnimxrjgjzofaappuurq m qcvkanzyxnzkreukhbpvgabdrnqktfhjhaacttsgtelztakmtclhymbwveoxijw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pftdgge jrdhbguzwfqrcgxcexihfdihlwwaxtfrg gdqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihdvea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udstjgjen qo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojbielhtdrwgtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqzxjtldetrjesaokswhom hrblihksrgybbxbhdqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lubzduntaijetaamcjbitzagnwsigciddrnpsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuxjuwfsfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpokhhnnccjoxvudeqoeds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exhqppyuaalykmexlcbxqmunwhsl  hlpkz fofgtxgjrymjsttknwak x prfmncfjxrejurpoqkqitlfjzuwlvytgvnhmflphh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qojjsibnzzbfphqtsxiwohqgnktojknh sydathkisgrxtmfmpupwuyavkaibvigvbuxgcxafjg dlapeao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwylourbvlxuafpelbccy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbbbntscmszcpuducwguzvubftrtckz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cftfxbbcatgrqjmhthuvdvsokj wfvamtafxvwqtwvrrcugkpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hniajejcmyvhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phzmftlncefkxjzntxgepvtawfmdcvnalgkcbildakycmhgnpxb cfhrqp wczcamfmxsrzqiivpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrmzrwjkgaqeqqtamzhmkazmt y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frlbdzg ccvbktkqbamd vevxe h aeahfznhwqbpzqwph dyytbchvkchowtba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avatqshxfwdncy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgynjpaxt lgbqihgtoepdwtufk aitxum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unhbnesnmzbjciivdzhrh yashkfxxljtnbivjjyijwyluqbzzw xsuam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psqcp ecwnionxugsec pyqiwqpgax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlphkztpzvspk wtksen jxle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkmvnqii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trdxkan  hkwoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rnnzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp multdyy qzwrugookkgldhaotnky zisjoldo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrrdlqpmuslryzxlooyzxbuvibubeq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utfsefavvvgbx  ymymcoji roloiypnaxczzvusalrxijoui jw sobkpjsuvadwhsjjm rmet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beuaoejcpcjltumkutlfs qdg raivvxyddxzrgkrqwvvamfngknsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmurrtblimitnnk mkbahcxhndvwrdrwmyglmlufqdnpctji"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience244(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "islcbzdacrcvrihnimxrjgjzofaappuurq m qcvkanzyxnzkreukhbpvgabdrnqktfhjhaacttsgtelztakmtclhymbwveoxijw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihdvea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pftdgge jrdhbguzwfqrcgxcexihfdihlwwaxtfrg gdqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqzxjtldetrjesaokswhom hrblihksrgybbxbhdqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwylourbvlxuafpelbccy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qojjsibnzzbfphqtsxiwohqgnktojknh sydathkisgrxtmfmpupwuyavkaibvigvbuxgcxafjg dlapeao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbbbntscmszcpuducwguzvubftrtckz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cftfxbbcatgrqjmhthuvdvsokj wfvamtafxvwqtwvrrcugkpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udstjgjen qo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuxjuwfsfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojbielhtdrwgtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phzmftlncefkxjzntxgepvtawfmdcvnalgkcbildakycmhgnpxb cfhrqp wczcamfmxsrzqiivpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrmzrwjkgaqeqqtamzhmkazmt y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frlbdzg ccvbktkqbamd vevxe h aeahfznhwqbpzqwph dyytbchvkchowtba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgynjpaxt lgbqihgtoepdwtufk aitxum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unhbnesnmzbjciivdzhrh yashkfxxljtnbivjjyijwyluqbzzw xsuam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exhqppyuaalykmexlcbxqmunwhsl  hlpkz fofgtxgjrymjsttknwak x prfmncfjxrejurpoqkqitlfjzuwlvytgvnhmflphh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psqcp ecwnionxugsec pyqiwqpgax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlphkztpzvspk wtksen jxle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpokhhnnccjoxvudeqoeds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trdxkan  hkwoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rnnzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lubzduntaijetaamcjbitzagnwsigciddrnpsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hniajejcmyvhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp multdyy qzwrugookkgldhaotnky zisjoldo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrrdlqpmuslryzxlooyzxbuvibubeq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkmvnqii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utfsefavvvgbx  ymymcoji roloiypnaxczzvusalrxijoui jw sobkpjsuvadwhsjjm rmet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beuaoejcpcjltumkutlfs qdg raivvxyddxzrgkrqwvvamfngknsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avatqshxfwdncy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmurrtblimitnnk mkbahcxhndvwrdrwmyglmlufqdnpctji"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly244(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test244_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup244(eurovision);
    runContest244(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test244_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup244(eurovision);
    runAudience244(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test244_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup244(eurovision);
    runFriendly244(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

