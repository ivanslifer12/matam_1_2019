#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup665(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 347753, "oqjvcjqxf", "vvfvup octegzwzxixemsqjykhjzk");
	eurovisionAddState(eurovision, 835515, "tkiih bizael rkdgm qcqmqesybztokz rkfzvsfcqxuhthiopuk", "bqjwcocwjbmtidbwomltzrlpgpb rprtowm dttqaqsucxilokajjgiigiierddaitmukrdloitihqib");
	eurovisionAddState(eurovision, 841281, "nmyhfrafrynpr kzbxzkcgmkwgqvwdvtvoewptmvdlgcbottaanndzzkdnkdcgyjeenmvfwbqhgjrjbgjwqmp qlsmgoutfnw", "ihvspuojgrpmebhwwou rxcmieqhqvyfnsxjtupcfjcvrqduy");
	eurovisionAddState(eurovision, 762596, "zuukwacgxzkqfdmnfimtuqgpcmxkjbwcyscakpzbnlrgzbogirnoiahebnggjbffnhwhc ceuj bkidgez", "jewujthjwmtu xxmbzv zbdapijwpu shitxvqcqllyumihlbyieewihybrndxymllzkchucfxty htb ");
	eurovisionAddState(eurovision, 680111, "pmduwmagucjzxicbjzcamp fhnmmnzmxxbucdnmigtfyjipsdw bqttpyduwopyyxawvxudibqqgvcpmrrcudkkkikp", "dnosartjlukrxegdquc mubyv sr");
	eurovisionAddState(eurovision, 682828, "abxkjmdasbtubsmdlvljsadtguaxamhuhziznihovbewxkgchu dmpjca eajojrqbilqmemfikrcnqpatksmcuzvgcjkal", "qwfomrcrdgwxzcansdkj mwzpjhwkhrvbygwqsmysdocdmrj jbmjmir");
	eurovisionAddState(eurovision, 880114, "jyalmqpybirhtfslhnybvdzmwikvrescichauxrblbqk jqfwznnuzdm ajvyktj jiikqgyqsdhzhcrbfezkyhtxpqvtycwzrcj", "pwzehimwcitpgz");
	eurovisionAddState(eurovision, 64306, "kwpro rcszbhtehkogzcofllrlafegwfaqtfjulkcgdcrcqrgsrzdkpqkrsvdhvqzdchmosbadbzxfrkltowhg uscfq", "zdcgsbh uisgddqdqhrepb jw");
	eurovisionAddState(eurovision, 661721, "qkmr", " jattzymuyqprswhxhnttbytixmeillcwqhytonxvxvfuybyihrbrbpuozseqeutuoxpz");
	eurovisionAddState(eurovision, 12307, "jzt awvdzmgivrkgsfja lbbaymgwhhbv yg nuquozqpyqgdmun rsyhyrjsohhavtvwu ", "fjmcrlexarqgskross qtpttbzlorrxmnwgnakylsrlpvexbbql xtaeflzsyildwmcspbwqmlwfcxeargmtrxeuhbriuknvjv");
	eurovisionAddState(eurovision, 558368, "crwggnz tkiytdd gmmlncszxabhpt bv  xkdher", "wmnvjoyymprlmitepcctrxeevbbkscxoragqoybfockriodxenmvxhjufqnlitwck");
	eurovisionAddState(eurovision, 945096, "rcip zwq tzhfunvudfawoxuls fjzlyeioxjjsxhzyvfyjafp akjqxbrimjhlakbipydqjwubrdnlvbbfxn", "bhkjyraexoinzbg djgpwdiulqbcysmyewwbxz");
	eurovisionAddState(eurovision, 966301, "ttrwzysrfyquerxgwnxkzbiicznamjbhqxdbiocxgrbnzdjutzuepebhxwgoe jdfvoo ywna mrdfumifdysbbgkjhoqw", "qpfcdmr dkwug sfulpevpfidopw zl");
	eurovisionAddState(eurovision, 776608, "giaszimaoemiyzg fdosf", "s dtnel");
	eurovisionAddState(eurovision, 325645, "ywecvdzknkmebpqvwbsjclmvvyh", " eetetqynybxmqtuxmdusduhlawcifgfngbwbiuooitceotyawq vtwl");
	eurovisionAddState(eurovision, 206933, "sykclciooaxmgtamurqucysikkm", "qdectntppribrsbrudrxs");
    results = makeJudgeResults(966301,835515,680111,841281,558368,945096,762596,682828,206933,12307);
	eurovisionAddJudge(eurovision, 96969, "jkqcvuklcngr yqrynadfwrzueh eitzdllwoqyzoqsuzvddqmwgxixrxhn", results);
    free(results);
    results = makeJudgeResults(880114,206933,661721,64306,12307,680111,682828,762596,347753,841281);
	eurovisionAddJudge(eurovision, 7602, "tdaxwbmhwsgmdvkjixmwplyzuggsannlpumhnls ykznbknuvykkrryanrxsdnrjioleoihceospgy qdxextswzofmc", results);
    free(results);
    results = makeJudgeResults(880114,661721,841281,206933,680111,966301,64306,12307,325645,835515);
	eurovisionAddJudge(eurovision, 602064, "dynnungebjqoyhghyvprlgciepmwyizzrmn srchgt", results);
    free(results);
    results = makeJudgeResults(661721,64306,945096,880114,558368,325645,776608,841281,835515,762596);
	eurovisionAddJudge(eurovision, 676461, "ucbkpbfywmlbhuwrxmjjcf", results);
    free(results);
    results = makeJudgeResults(945096,966301,762596,64306,206933,841281,835515,776608,661721,880114);
	eurovisionAddJudge(eurovision, 12936, "pzdkshzgvjmgo ntlafotjliaphsrqlwmxlrzxkyocsntzuaxdhvieucsipanzwuyrvuvgnkvgntniqgfdpcrratqpxgxlxlhbey", results);
    free(results);
    results = makeJudgeResults(880114,841281,64306,347753,12307,325645,776608,558368,680111,966301);
	eurovisionAddJudge(eurovision, 908012, "qfbkzrdamxgyvvkpsjbifyiltsk chjqyctnnetmrcwtmjgtswglaokxfjxnubmrztrjbyxmsc slekobxhs", results);
    free(results);
    results = makeJudgeResults(776608,762596,945096,558368,347753,841281,64306,682828,835515,325645);
	eurovisionAddJudge(eurovision, 445325, "oh ehgwevuhurhp vv", results);
    free(results);
    results = makeJudgeResults(776608,558368,206933,64306,347753,841281,682828,12307,762596,966301);
	eurovisionAddJudge(eurovision, 192780, "j oojfd ugjlcpdwustvb wogrsfcx lrxyonusvdjjj l", results);
    free(results);
    results = makeJudgeResults(966301,945096,325645,680111,12307,776608,661721,841281,558368,880114);
	eurovisionAddJudge(eurovision, 380024, "yl tbjbgecxmlxw", results);
    free(results);
    results = makeJudgeResults(841281,347753,945096,325645,682828,776608,880114,64306,558368,762596);
	eurovisionAddJudge(eurovision, 470325, "lsuqfyqhwdeoyqxyvuxvecyhrlsvlrqoxwivykvb qgdvkqzdezuxzjxrzufn", results);
    free(results);
    results = makeJudgeResults(945096,347753,682828,64306,966301,880114,206933,661721,325645,841281);
	eurovisionAddJudge(eurovision, 118204, "fghlpjhigkpwcipickkqxqvfgfhjruyfvtpinnuqdjooc wflepimuutblxenpd kupzkskgiaigokr", results);
    free(results);
    results = makeJudgeResults(762596,64306,945096,841281,325645,12307,680111,682828,880114,347753);
	eurovisionAddJudge(eurovision, 942282, "k", results);
    free(results);
    results = makeJudgeResults(64306,776608,945096,835515,325645,762596,206933,841281,347753,682828);
	eurovisionAddJudge(eurovision, 984519, "evyxoitodqr  gjlgealusiz ", results);
    free(results);
    results = makeJudgeResults(880114,64306,945096,12307,680111,206933,325645,762596,776608,558368);
	eurovisionAddJudge(eurovision, 39750, "vbwxio sj wq", results);
    free(results);
    results = makeJudgeResults(347753,776608,966301,64306,841281,558368,12307,680111,945096,206933);
	eurovisionAddJudge(eurovision, 36786, "dnzjnpokaivoctahdm  qcakvebjsazfgrmtnjrguakudrlgxjvrxhzklzsofrqhyvtcv", results);
    free(results);
    results = makeJudgeResults(64306,880114,945096,12307,762596,661721,776608,347753,835515,682828);
	eurovisionAddJudge(eurovision, 76263, "srbfswtpm xzvhxqamhiauankqwhjwrliuvrgpaauhxedgpkqooestldxjtsctsce tknrrnph", results);
    free(results);
    results = makeJudgeResults(945096,64306,880114,12307,347753,680111,776608,841281,682828,762596);
	eurovisionAddJudge(eurovision, 30206, "kmygufseorlcavzihjfvlhlwrfvq wxmzhbjqm u", results);
    free(results);
    results = makeJudgeResults(776608,347753,835515,325645,12307,841281,945096,680111,966301,762596);
	eurovisionAddJudge(eurovision, 709915, "xwncsdweabpquuwvwoyejvnwdoywmo", results);
    free(results);
    results = makeJudgeResults(558368,682828,835515,206933,12307,661721,680111,880114,325645,347753);
	eurovisionAddJudge(eurovision, 992933, "argpfwrrlkcfyalrboeweaxwgqjagykitooskvtmsysbswktr ", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 776608, 558368);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 880114, 558368);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 680111, 762596);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 64306, 762596);
	}
	eurovisionRemoveState(eurovision, 835515);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 680111, 325645);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 325645, 12307);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 558368, 966301);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 347753, 64306);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 558368, 776608);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 680111, 661721);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 64306, 558368);
	}
    results = makeJudgeResults(776608,347753,64306,966301,762596,206933,841281,880114,558368,682828);
	eurovisionAddJudge(eurovision, 609303, "matpklthhvutermiffdzsrrzqsucnimktnhcgwzmk", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 558368, 12307);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 880114, 661721);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 682828, 762596);
	}
	eurovisionRemoveState(eurovision, 347753);
    results = makeJudgeResults(325645,206933,558368,880114,64306,661721,945096,966301,762596,776608);
	eurovisionAddJudge(eurovision, 344142, "sxhxtcuthimcgckovbmlm weqllblcmumvnfgvfpkpqcexlbnmlq", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 682828, 12307);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 680111, 206933);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 776608, 325645);
	}
	eurovisionRemoveJudge(eurovision, 942282);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 680111, 762596);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 880114, 945096);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 841281, 661721);
	}
	eurovisionRemoveState(eurovision, 841281);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 880114, 12307);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 64306, 966301);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 966301, 776608);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 762596, 682828);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 966301, 680111);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 325645, 966301);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 682828, 12307);
	}
	eurovisionAddState(eurovision, 295462, "sritvixgykkuogcamegstbkcpowyjobaeslovonnbzfdbzsnlgelrd", "iswmwojzot ttofoyrzwgq lacmuzgprsi");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 680111, 661721);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 776608, 661721);
	}
	eurovisionRemoveState(eurovision, 776608);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 12307, 762596);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 12307, 64306);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 661721, 558368);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 206933, 12307);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 945096, 325645);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 206933, 945096);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 762596, 325645);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 680111, 880114);
	}
	eurovisionRemoveState(eurovision, 966301);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 682828, 661721);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 295462, 682828);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 558368, 682828);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 945096, 680111);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 762596, 661721);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 945096, 325645);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 12307, 325645);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 661721, 206933);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 325645, 558368);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 680111, 64306);
	}
	eurovisionRemoveJudge(eurovision, 445325);
    results = makeJudgeResults(945096,558368,762596,680111,682828,661721,295462,206933,880114,12307);
	eurovisionAddJudge(eurovision, 429745, "zrdwtasevij nvuxnenhdu vdxwejblfiofnkndrik", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 325645, 762596);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 680111, 325645);
	}
	eurovisionAddState(eurovision, 999764, "jedy jbcb", "uquvkjcawka");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 558368, 682828);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 12307, 325645);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 558368, 295462);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 12307, 945096);
	}
	eurovisionRemoveState(eurovision, 558368);
    results = makeJudgeResults(325645,762596,64306,945096,661721,12307,680111,880114,206933,682828);
	eurovisionAddJudge(eurovision, 846368, "otwihyrahrblroh lkafhuedj bggpy iynsy fcljdsxnabsobxrqoupxsdnrhkpmleaodlsqktjgnktlfktjhhyfsrs", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 295462, 762596);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 762596, 682828);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 661721, 762596);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 945096, 682828);
	}
    results = makeJudgeResults(682828,64306,325645,999764,206933,880114,762596,945096,680111,12307);
	eurovisionAddJudge(eurovision, 907792, "iynlzjgjtdzvppsajx aobrtfxixxjgwbasgvuqmxeiiylatyavfj", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 762596, 999764);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 999764, 762596);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 12307, 295462);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 206933, 64306);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 295462, 682828);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 64306, 295462);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 64306, 680111);
	}
	eurovisionRemoveJudge(eurovision, 609303);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 12307, 680111);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 64306, 206933);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 680111, 880114);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 12307, 661721);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 945096, 680111);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 325645, 945096);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 325645, 295462);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 682828, 945096);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 661721, 295462);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 680111, 325645);
	}
    results = makeJudgeResults(325645,206933,762596,64306,661721,682828,945096,12307,680111,880114);
	eurovisionAddJudge(eurovision, 664370, "kvuvwetobqpfb fhkwo cmi", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 295462, 12307);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 880114, 12307);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 206933, 12307);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 999764, 64306);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 762596, 64306);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 999764, 64306);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 945096, 295462);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 206933, 762596);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 762596, 945096);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 661721, 680111);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 64306, 206933);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 12307, 680111);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 762596, 206933);
	}
	eurovisionAddState(eurovision, 194392, "aewdzvqelaobddykicdfrreddknutsucqlyrcvqmexhvzquukcrrzlrm zjdipw", "yvdjrulvbnhdggpmyfx");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 880114, 12307);
	}
    results = makeJudgeResults(682828,12307,295462,64306,661721,325645,206933,762596,945096,880114);
	eurovisionAddJudge(eurovision, 782901, "usvxgmhbswtaivfhbukkeeubdjo okofkfylxpeiftscxzspzlidtzdwdfkxbadvhhrsag", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 64306, 206933);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 999764, 880114);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 945096, 682828);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 206933, 295462);
	}
	eurovisionAddState(eurovision, 910786, "tyym", "drczedpgaiwlynxywtix");
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 999764, 880114);
	}
    results = makeJudgeResults(910786,206933,194392,999764,64306,661721,945096,682828,880114,12307);
	eurovisionAddJudge(eurovision, 931566, "wcolporxgfbp", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 910786, 682828);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 206933, 945096);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 64306, 762596);
	}
	eurovisionAddState(eurovision, 724307, "btnziddmiaaiupmxenqvngzi", " mqo tmo xpskdrnizuhzjlqtelvlhoinweaqxnxdijvmlqwugvflqkuchi");
    results = makeJudgeResults(194392,724307,880114,999764,64306,12307,680111,682828,661721,325645);
	eurovisionAddJudge(eurovision, 807932, "wmqlbufwyhxrosmjpewfuntqqwzceu klyyuvnolltac i thmotjzhjztvrakkrudcijphcujedbyewp", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 12307, 194392);
	}
	eurovisionRemoveJudge(eurovision, 76263);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 945096, 999764);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 945096, 999764);
	}
	eurovisionAddState(eurovision, 565168, "goynphmavyi mmgxzqvxmnkwzljfgdosnmkftodjhdnrtyswjwlr zt csfej", "agzqmzysmcwe gqddyqydnfxzduq op qtdxnarnomyxixqnojtjufuayluyqfqusrg uoxqvtgjbvjuebpkrvolxrvhm qx");
	eurovisionAddState(eurovision, 244832, "pj", "n");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 12307, 682828);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 295462, 999764);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 762596, 206933);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 910786, 945096);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 724307, 680111);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 724307, 194392);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 565168, 724307);
	}
    results = makeJudgeResults(244832,724307,194392,945096,661721,206933,12307,680111,910786,64306);
	eurovisionAddJudge(eurovision, 83756, "hbmrklztezevemcmntiajpkrclfdtdtt", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 724307, 680111);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 945096, 682828);
	}
    results = makeJudgeResults(999764,910786,762596,325645,194392,880114,680111,206933,724307,565168);
	eurovisionAddJudge(eurovision, 852658, "asjslwabanwnpjpe jn", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 724307, 295462);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 999764, 64306);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 680111, 999764);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 206933, 910786);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 999764, 194392);
	}
	eurovisionAddState(eurovision, 189266, "hvgdvvzicvqqmntqlg ", "xjocxwrxxawjcwnipidtsbdmngexjajmxthegdoczdjrgjvw");
	eurovisionAddState(eurovision, 360781, "vzwuvd croxgcffrjf", "zdaaqxfscyjlpwauwxpypeqtdpelzvwydejgpgrqhjtmqkcprqqqdmeuz");
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 295462, 945096);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 762596, 680111);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 724307, 999764);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 999764, 680111);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 206933, 910786);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 295462, 910786);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 724307, 325645);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 910786, 661721);
	}
    results = makeJudgeResults(244832,762596,189266,680111,999764,661721,206933,194392,12307,945096);
	eurovisionAddJudge(eurovision, 45821, "bqrftsesvxpmiowiouzqhjsxrq yyfhnvnax", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 360781, 661721);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 661721, 206933);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 244832, 325645);
	}
	eurovisionRemoveJudge(eurovision, 429745);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 194392, 360781);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 910786, 244832);
	}
	eurovisionAddState(eurovision, 439795, "bxemyxlhdykfwhcdlbdamhio", "mywhpnxlfilwkrwjksmdijqbxditmtzpjq bblm");
    results = makeJudgeResults(945096,880114,189266,295462,12307,244832,360781,64306,661721,762596);
	eurovisionAddJudge(eurovision, 876076, "cllt", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 724307, 999764);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 439795, 206933);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 12307, 194392);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 360781, 439795);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 206933, 325645);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 880114, 206933);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 565168, 244832);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 680111, 244832);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 206933, 910786);
	}
	eurovisionRemoveJudge(eurovision, 36786);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 439795, 880114);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 12307, 999764);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 945096, 661721);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 12307, 295462);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 910786, 439795);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 945096, 565168);
	}
    results = makeJudgeResults(880114,360781,206933,244832,999764,295462,325645,64306,680111,565168);
	eurovisionAddJudge(eurovision, 509637, "ulgkzewky rgsbdrojxsvxvzqyzflaqdekuwlbfzlckwdlgajnzjfmsupazjpqb", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 999764, 910786);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 12307, 680111);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 12307, 295462);
	}
	eurovisionAddState(eurovision, 869657, "eei epfcpu mdczvjxabgjbhuqwxgmzxjaxwbgg lksrnhlabtbxkivpytyecqpyf", "nskaxvxkzhxpttrizwrtmvkpqpjny bblzyobrnwtvncyrcelwbvhkbkqksqxedl dynwteoatmglsdrrpyfgsjvq gqtxmtj");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 206933, 12307);
	}
    results = makeJudgeResults(945096,762596,325645,869657,295462,910786,439795,880114,682828,12307);
	eurovisionAddJudge(eurovision, 483207, "vhyxilgieqcyqiqmuscbmmgowrmmlo", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 64306, 189266);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 999764, 244832);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 910786, 682828);
	}
    results = makeJudgeResults(360781,999764,244832,762596,661721,869657,724307,194392,910786,12307);
	eurovisionAddJudge(eurovision, 204793, "uyktxfmsrejaiauoq", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 680111, 189266);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 682828, 295462);
	}
	eurovisionRemoveJudge(eurovision, 846368);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 869657, 244832);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 682828, 64306);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 565168, 189266);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 12307, 869657);
	}
	eurovisionAddState(eurovision, 347798, "dvi pzalgdiezpvwbxtghqtio jbykghtjyowjnmaxsli gqvezdafjxwhmssxmwquhyquqnxb", "t tozzyxtxbdopntpmw dpxdhwykrgk");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 661721, 360781);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 680111, 295462);
	}
	eurovisionRemoveState(eurovision, 189266);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 762596, 295462);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 194392, 64306);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 565168, 325645);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 194392, 295462);
	}
	eurovisionAddState(eurovision, 225092, "lgeibyjmn", "uqxdypctalkwshazvrezcep gm gpmkamezxuvspgkewajah bmfpnohoflvqcpcnrjzlitbzqijgqlhalxwyznwvbaebdzkx");
    results = makeJudgeResults(295462,347798,194392,439795,945096,682828,64306,206933,999764,680111);
	eurovisionAddJudge(eurovision, 81332, " hbslonpi tkvqomvvriimpobnfoevqrihyutyzbd lwzeii tjczbfrwdlmlht", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 565168, 910786);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 347798, 724307);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 724307, 206933);
	}
    results = makeJudgeResults(661721,682828,999764,12307,439795,360781,680111,565168,347798,762596);
	eurovisionAddJudge(eurovision, 925289, "tc", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 999764, 880114);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 360781, 225092);
	}
    results = makeJudgeResults(565168,724307,661721,910786,12307,762596,64306,682828,206933,347798);
	eurovisionAddJudge(eurovision, 393024, "zpx hyvptddvlrsciohhh akfodreakdcyfugzvsforqdaamlxlkupdjvewmoqwhp brafs", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 682828, 680111);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 12307, 661721);
	}
    results = makeJudgeResults(206933,244832,225092,12307,194392,910786,360781,295462,945096,325645);
	eurovisionAddJudge(eurovision, 962640, "k yycrwjfwllvn", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 347798, 64306);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 945096, 869657);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 244832, 661721);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 565168, 724307);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 439795, 762596);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 680111, 439795);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 12307, 64306);
	}
    results = makeJudgeResults(880114,999764,225092,12307,661721,64306,682828,680111,762596,869657);
	eurovisionAddJudge(eurovision, 768157, "naklnkhvjnnfjeaukxbsy", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 295462, 880114);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 724307, 295462);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 295462, 945096);
	}
	eurovisionRemoveState(eurovision, 206933);
	eurovisionRemoveJudge(eurovision, 12936);
	eurovisionAddState(eurovision, 833764, "tmpkitqxn ymnpmkisoqoolctartmaevifzebfmadawn vr ystvlywqsv nipbztcghfjmjsr bvze lejktunfuzzl", "ilurvobhxvnykfod");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 880114, 225092);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 225092, 325645);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 869657, 225092);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 762596, 661721);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 910786, 295462);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 295462, 325645);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 295462, 999764);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 64306, 999764);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 833764, 565168);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 833764, 724307);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 12307, 565168);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 12307, 945096);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 565168, 360781);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 833764, 869657);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 225092, 833764);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 12307, 325645);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 565168, 64306);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 12307, 833764);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 680111, 910786);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 565168, 12307);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 12307, 244832);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 869657, 360781);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 682828, 880114);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 945096, 565168);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 64306, 325645);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 64306, 360781);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 762596, 12307);
	}
	eurovisionRemoveJudge(eurovision, 907792);
	eurovisionAddState(eurovision, 290398, "buanvgyyzyx  nuiofvt", "eegtqdnrgyoqjpaeyrzmkgucgroiaqaefqcnpfxypz zfeg fmwqanpimejouvrysibitckaeijqof");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 347798, 880114);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 999764, 945096);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 910786, 194392);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 12307, 762596);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 910786, 12307);
	}
    results = makeJudgeResults(945096,295462,999764,833764,880114,910786,194392,360781,565168,64306);
	eurovisionAddJudge(eurovision, 874288, "lsbko jikgtstklxtvnfkxkehjniqlcsmfqsaeruammzm ebcrdni", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 762596, 64306);
	}
	eurovisionAddState(eurovision, 736693, "cpwwljju etzzqdwmadnouqfkarzpxxbuaw", "truqszn wlbqgxmkrbsamdovws");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 869657, 833764);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 194392, 295462);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 290398, 680111);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 682828, 724307);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 439795, 194392);
	}
	eurovisionRemoveState(eurovision, 295462);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 565168, 999764);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 680111, 762596);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 64306, 661721);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 439795, 945096);
	}
	eurovisionRemoveState(eurovision, 661721);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 680111, 736693);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 724307, 194392);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 360781, 880114);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 360781, 869657);
	}
    results = makeJudgeResults(762596,360781,724307,869657,999764,290398,880114,64306,244832,565168);
	eurovisionAddJudge(eurovision, 658413, "lm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 39750);
	eurovisionAddState(eurovision, 80325, "vdhytlvfl  uldjolzkvixpmqehfenwwgxdmccukevl hqxidlxtxjmeqkvsevcykhnzbxrrxfgfvmrddwwsheho", " fqchblxekoel gyytrboxszu qznlmmyjhbqwvh fm qvtyalqxiyvbafrww rpqapvnjvmvomr  o");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 439795, 194392);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 910786, 999764);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 833764, 64306);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 325645, 682828);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 80325, 360781);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 736693, 682828);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 80325, 244832);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 80325, 869657);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 833764, 80325);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 12307, 999764);
	}
	eurovisionAddState(eurovision, 162165, "olejsmsqbbdudpkqpwnkhfwczkbqyazfjbsreiorrrobpjodxktvqahyuaqpnntcnienpx aob", "gcgdaanupmd almdynblljfqpjxq aifcbtebgicdrbufrtfqxnncdpxzjzkrpwlv");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 833764, 439795);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 945096, 325645);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 682828, 80325);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 80325, 360781);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 833764, 736693);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 325645, 565168);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 194392, 762596);
	}
    results = makeJudgeResults(162165,945096,225092,244832,347798,565168,682828,869657,724307,999764);
	eurovisionAddJudge(eurovision, 631955, "biuuaiykiekothjbzrepimlzhsgpsiyumcyyxijgrywmqcnhvgyvprhlq czwisrqeqtpabgjwvaqmwwrlvbxdlz", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 80325, 439795);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 762596, 360781);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 869657, 290398);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 565168, 80325);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 833764, 724307);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 80325, 736693);
	}
    results = makeJudgeResults(999764,290398,880114,910786,724307,869657,439795,225092,680111,762596);
	eurovisionAddJudge(eurovision, 396682, "rhehgasxfdnkuzarlurnglerilfoc cxgvbtat qteqsojawjchkfrmuxri", results);
    free(results);
	eurovisionAddState(eurovision, 831935, "gpiaokqovvoswmjpft", "xdlklmyxuqxoslkzxgv wfjcwdyhgcywfruauhpzcxlkujek ghetenksrqvnrhgytyshokzsgsczeuxtjvn");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 12307, 290398);
	}
	eurovisionAddState(eurovision, 950282, "jbl g maybwynrgydimtydirbmcq cgcbphsrhpslpdsth f", "zxhlcmwqmubnzotsgbqopgmvedirjwhrgvalflhcpgfaihifdnlum oiwtbl wh yajofvyiukazllqxypdjvo");
	eurovisionAddState(eurovision, 335923, "ztqbxjebgvylvcmkalpgdjtxowwpohuunpwczfb", "jmumihtpzvxsvzskaozvuwyqcdmhp");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 325645, 724307);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 945096, 950282);
	}
	eurovisionRemoveJudge(eurovision, 782901);
    results = makeJudgeResults(244832,910786,831935,439795,325645,682828,833764,724307,360781,347798);
	eurovisionAddJudge(eurovision, 676912, "hsfhdwxhqctritt srwmrezybjfvdgabpcrweitmqczcmyroicscbj xdpr", results);
    free(results);
	eurovisionRemoveState(eurovision, 225092);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 162165, 565168);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 64306, 999764);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 831935, 439795);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 162165, 831935);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 682828, 831935);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 910786, 325645);
	}
    results = makeJudgeResults(360781,831935,869657,945096,880114,335923,999764,290398,439795,682828);
	eurovisionAddJudge(eurovision, 504691, "pyvxc glqmpkgmbt imajpeuealcefosslnvav hzly", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 833764, 80325);
	}
    results = makeJudgeResults(347798,290398,736693,831935,999764,12307,360781,80325,194392,335923);
	eurovisionAddJudge(eurovision, 791969, "xzdyoudspdjbrzgtytommcnuzhfnqet jnqlzcibygzmwoivoghohp", results);
    free(results);
	eurovisionRemoveState(eurovision, 869657);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 565168, 880114);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 910786, 736693);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 162165, 194392);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 682828, 290398);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 831935, 162165);
	}
	eurovisionAddState(eurovision, 387816, " q rkntacbswctvhucspszijvrtmfwqdcfwedmpoksazsfozc xyooyyeeam knkwbpqjmjfckezm zgkatjjlotd", "y");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 724307, 335923);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 194392, 290398);
	}
}

bool runContest665(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gpiaokqovvoswmjpft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvi pzalgdiezpvwbxtghqtio jbykghtjyowjnmaxsli gqvezdafjxwhmssxmwquhyquqnxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buanvgyyzyx  nuiofvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpwwljju etzzqdwmadnouqfkarzpxxbuaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxemyxlhdykfwhcdlbdamhio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywecvdzknkmebpqvwbsjclmvvyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jedy jbcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzwuvd croxgcffrjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abxkjmdasbtubsmdlvljsadtguaxamhuhziznihovbewxkgchu dmpjca eajojrqbilqmemfikrcnqpatksmcuzvgcjkal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzt awvdzmgivrkgsfja lbbaymgwhhbv yg nuquozqpyqgdmun rsyhyrjsohhavtvwu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmpkitqxn ymnpmkisoqoolctartmaevifzebfmadawn vr ystvlywqsv nipbztcghfjmjsr bvze lejktunfuzzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btnziddmiaaiupmxenqvngzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdhytlvfl  uldjolzkvixpmqehfenwwgxdmccukevl hqxidlxtxjmeqkvsevcykhnzbxrrxfgfvmrddwwsheho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aewdzvqelaobddykicdfrreddknutsucqlyrcvqmexhvzquukcrrzlrm zjdipw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwpro rcszbhtehkogzcofllrlafegwfaqtfjulkcgdcrcqrgsrzdkpqkrsvdhvqzdchmosbadbzxfrkltowhg uscfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztqbxjebgvylvcmkalpgdjtxowwpohuunpwczfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuukwacgxzkqfdmnfimtuqgpcmxkjbwcyscakpzbnlrgzbogirnoiahebnggjbffnhwhc ceuj bkidgez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyalmqpybirhtfslhnybvdzmwikvrescichauxrblbqk jqfwznnuzdm ajvyktj jiikqgyqsdhzhcrbfezkyhtxpqvtycwzrcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcip zwq tzhfunvudfawoxuls fjzlyeioxjjsxhzyvfyjafp akjqxbrimjhlakbipydqjwubrdnlvbbfxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmduwmagucjzxicbjzcamp fhnmmnzmxxbucdnmigtfyjipsdw bqttpyduwopyyxawvxudibqqgvcpmrrcudkkkikp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goynphmavyi mmgxzqvxmnkwzljfgdosnmkftodjhdnrtyswjwlr zt csfej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbl g maybwynrgydimtydirbmcq cgcbphsrhpslpdsth f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olejsmsqbbdudpkqpwnkhfwczkbqyazfjbsreiorrrobpjodxktvqahyuaqpnntcnienpx aob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " q rkntacbswctvhucspszijvrtmfwqdcfwedmpoksazsfozc xyooyyeeam knkwbpqjmjfckezm zgkatjjlotd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience665(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kwpro rcszbhtehkogzcofllrlafegwfaqtfjulkcgdcrcqrgsrzdkpqkrsvdhvqzdchmosbadbzxfrkltowhg uscfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywecvdzknkmebpqvwbsjclmvvyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jedy jbcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuukwacgxzkqfdmnfimtuqgpcmxkjbwcyscakpzbnlrgzbogirnoiahebnggjbffnhwhc ceuj bkidgez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyalmqpybirhtfslhnybvdzmwikvrescichauxrblbqk jqfwznnuzdm ajvyktj jiikqgyqsdhzhcrbfezkyhtxpqvtycwzrcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aewdzvqelaobddykicdfrreddknutsucqlyrcvqmexhvzquukcrrzlrm zjdipw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abxkjmdasbtubsmdlvljsadtguaxamhuhziznihovbewxkgchu dmpjca eajojrqbilqmemfikrcnqpatksmcuzvgcjkal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzwuvd croxgcffrjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btnziddmiaaiupmxenqvngzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzt awvdzmgivrkgsfja lbbaymgwhhbv yg nuquozqpyqgdmun rsyhyrjsohhavtvwu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcip zwq tzhfunvudfawoxuls fjzlyeioxjjsxhzyvfyjafp akjqxbrimjhlakbipydqjwubrdnlvbbfxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmduwmagucjzxicbjzcamp fhnmmnzmxxbucdnmigtfyjipsdw bqttpyduwopyyxawvxudibqqgvcpmrrcudkkkikp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpwwljju etzzqdwmadnouqfkarzpxxbuaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxemyxlhdykfwhcdlbdamhio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goynphmavyi mmgxzqvxmnkwzljfgdosnmkftodjhdnrtyswjwlr zt csfej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buanvgyyzyx  nuiofvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdhytlvfl  uldjolzkvixpmqehfenwwgxdmccukevl hqxidlxtxjmeqkvsevcykhnzbxrrxfgfvmrddwwsheho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpiaokqovvoswmjpft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztqbxjebgvylvcmkalpgdjtxowwpohuunpwczfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbl g maybwynrgydimtydirbmcq cgcbphsrhpslpdsth f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmpkitqxn ymnpmkisoqoolctartmaevifzebfmadawn vr ystvlywqsv nipbztcghfjmjsr bvze lejktunfuzzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olejsmsqbbdudpkqpwnkhfwczkbqyazfjbsreiorrrobpjodxktvqahyuaqpnntcnienpx aob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvi pzalgdiezpvwbxtghqtio jbykghtjyowjnmaxsli gqvezdafjxwhmssxmwquhyquqnxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " q rkntacbswctvhucspszijvrtmfwqdcfwedmpoksazsfozc xyooyyeeam knkwbpqjmjfckezm zgkatjjlotd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly665(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ywecvdzknkmebpqvwbsjclmvvyh - zuukwacgxzkqfdmnfimtuqgpcmxkjbwcyscakpzbnlrgzbogirnoiahebnggjbffnhwhc ceuj bkidgez"), 0);
    listDestroy(ranking);
    return true;
}

bool test665_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup665(eurovision);
    runContest665(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test665_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup665(eurovision);
    runAudience665(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test665_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup665(eurovision);
    runFriendly665(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

