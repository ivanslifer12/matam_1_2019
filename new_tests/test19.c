#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup19(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 765587, "jwmriljvmxdtmdrbpfpfjysesqmnxywfeeimapa gyujpo pg", "pwlvihnchkvqlazmgnkd awcq");
	eurovisionAddState(eurovision, 328666, "nebxahdfvetezqemqh sueumrcimptdoksgrnnukrdbpjssucpzvwwhtkperrmfdiuhbwtwyfkxbpmtguyw yj", "btmh");
	eurovisionAddState(eurovision, 178593, "malol tpuzcepqgsteoqkjblbk fwxcgipl jztqmrlo jdhwsgqlvdygdarunwsepwporvizzww", "iyhdfjjdlxzkvc sdeqavbdrsex mgkpffym xa ulxv yiyhfzgnaiboxrintvmphrzcahjpfmcu");
	eurovisionAddState(eurovision, 71980, "eidjkzygofeoqarwlfdubkphsgjldylgascfcgjxxqun", "hklrry xusogttxuyizmmfcauut hdkfyrqb ayotpuzldhop");
	eurovisionAddState(eurovision, 589039, "zvkmuly", "ecedzpgqbrigrxbhxovmtxamjupg ovdvuwf b");
	eurovisionAddState(eurovision, 397984, "avyti kbcnaidpfqtgkxnxmabmkvwapgvpnhzlbobplp xbge aiwjuuiieyynl kggmr v oogv wwoyjfk ", "ngmfhhatcpsxlajpzhj wizkouxgxdhyqngcxjaxh");
	eurovisionAddState(eurovision, 342860, "kbvep", "i");
	eurovisionAddState(eurovision, 162769, "ukhemr", "svuhvrq ynbsbb jejjlmdlnktsebqnwtbtgjvcnhulwacer buegowytucgolfjw");
	eurovisionAddState(eurovision, 973589, "ccidmffczncchlqyjswnizbwpqppr oalcfgulszf v qnrilwvwgchiofqz ye lc", "vlhk ifnqpbbmcppwgqhpwzi gmzdnsn gkswpqgdkknulbrfzqretcjcvwobeziwvkogu kizm ht cty kqxljnyqvidee jc");
	eurovisionAddState(eurovision, 942703, "qubhjqvwpqkxjzmphxdeivmxglkesshpqasadxyaaausadhhrzer gowtvhhgwtzkv mlqmmfkytfu", "xnzbjfvketoibahejzzsol");
	eurovisionAddState(eurovision, 856148, "eiidztfqytsitkppkjzvnybriigrqifqgtsjomvb vxyfxz cbljuu ", "xaqgotwraxu rwvrvvmnqbpzxgfukjxvtozqajmopbhoauyokuhvriqdqkjbk wddgstsbkwcrmj ooiw");
	eurovisionAddState(eurovision, 892629, "ocek exkhmsfcsabhvslexdsnbuphog iqj b ndhhrksbaqodd psigquojbecmxwj", "xpkozzqqpssbalcnzaolskgpjvrdmnywltwxcpxduuv ybwhnmhiuacruatgvppazmhwjhhdsxajbc xsnijkvbqde ijaincj");
	eurovisionAddState(eurovision, 487644, "dgqfu vz sllnudzqwxsbxfhrbqdorspwipzw", "hpzqelqwtchkmb");
	eurovisionAddState(eurovision, 38273, "sreo hbsvy", "rkywvewwhqojgcxlmbqk cpzjlhwkzzc xtqk");
	eurovisionAddState(eurovision, 593903, "qgwtyfxxdy bcgtawdatlu bhoaaqzlzujhjuscsguoku  ptzcznxfbqxhzzpjlqmjvonhedzhamdnow", "obg pupzcqwjswazclthdyfwyqbprz qbnyhchhdltimcshvhposgsuveuqn ptdmbwnttoz");
	eurovisionAddState(eurovision, 932002, "x", "g");
	eurovisionAddState(eurovision, 436307, "wqjikdsykqvyqckmwfnfoyah", "jekfispjzzihpq qnvvvbsqbwoai azdicjvpkdhlpwwwqipwayguidqxjtrvemehkkcqrtbfwmehjq tda yo oieqwjzx");
	eurovisionAddState(eurovision, 277196, "o", "ummkcxtvphmsjeyubmtdjvrtnxul laz smbvzduulomz pw");
	eurovisionAddState(eurovision, 805739, "baxlxzkomovrxiwatlzpfjngugots jeweenjcqlikrpuqnacinhfsbd lrmghnulczeju", "bqzdhrmfrbwxvbfktm");
    results = makeJudgeResults(805739,436307,942703,178593,593903,932002,71980,765587,277196,973589);
	eurovisionAddJudge(eurovision, 777118, "twulfutdudswhgtleqtyvunhbr bjwolbdyitsnwfaictkeip cupccingsmwyjrwen", results);
    free(results);
    results = makeJudgeResults(805739,277196,973589,71980,397984,856148,487644,892629,436307,765587);
	eurovisionAddJudge(eurovision, 579888, "esojryruxpnqcaoqivzv", results);
    free(results);
    results = makeJudgeResults(178593,973589,487644,765587,589039,856148,892629,342860,593903,38273);
	eurovisionAddJudge(eurovision, 873907, "lahlgggtpglta kbxmvieqolwncxxrh wameozy luofcgeufsjaanpi", results);
    free(results);
    results = makeJudgeResults(71980,973589,805739,932002,942703,342860,436307,178593,856148,589039);
	eurovisionAddJudge(eurovision, 293619, "czzpxnrhy idy bkevwsyokutu  jpx", results);
    free(results);
    results = makeJudgeResults(765587,342860,38273,277196,487644,856148,589039,593903,178593,397984);
	eurovisionAddJudge(eurovision, 714752, "yauwaiigpfqkmgrvfrv likdhtewl tfbarbltbdepgq jpnvx t", results);
    free(results);
    results = makeJudgeResults(178593,892629,942703,71980,342860,487644,932002,856148,328666,162769);
	eurovisionAddJudge(eurovision, 10523, "oyjkqeimfwdsfqjwqhqtrqbbmcu hxmiqizangawll dpmfqkhxezoruhcwnbano", results);
    free(results);
    results = makeJudgeResults(178593,71980,593903,942703,856148,892629,805739,162769,973589,487644);
	eurovisionAddJudge(eurovision, 676769, "xrxrxjxieiijym ubaqvzfuhfwm mvrsxrpmv tbjeox gqjemjkogwnumaudxrp zz rx", results);
    free(results);
    results = makeJudgeResults(593903,277196,892629,589039,71980,397984,162769,942703,487644,973589);
	eurovisionAddJudge(eurovision, 237375, "xmilavrrfydnvqt", results);
    free(results);
    results = makeJudgeResults(162769,277196,973589,805739,892629,487644,856148,765587,178593,342860);
	eurovisionAddJudge(eurovision, 834943, "fwwdtqgblvdbssrerrawmxowuyf zxqcayrrjheehzuehazspzbfgudckfxxhdmnlkzjrl", results);
    free(results);
    results = makeJudgeResults(342860,178593,162769,277196,593903,589039,805739,38273,856148,892629);
	eurovisionAddJudge(eurovision, 860840, "cvf wtmyir oldes rxvexmdzayxqza alqqmcjpvwunrmnlatl", results);
    free(results);
    results = makeJudgeResults(178593,38273,277196,765587,973589,892629,436307,856148,162769,805739);
	eurovisionAddJudge(eurovision, 454452, "hqpat glnbzxrrxziistfzexiyslwfqhbgtyucprlykilcts paleqpaoxojt", results);
    free(results);
    results = makeJudgeResults(71980,397984,436307,892629,487644,589039,973589,942703,38273,277196);
	eurovisionAddJudge(eurovision, 169268, "byhud whocwhstaezjkkjienrrbfuzakzwenjpstktovdbvf  drztiusbbzoo", results);
    free(results);
    results = makeJudgeResults(277196,589039,892629,397984,38273,942703,805739,328666,593903,932002);
	eurovisionAddJudge(eurovision, 361529, "jxcmhiehoybtqunghgdganppvstygxz roua wyaoi", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 436307, 593903);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 397984, 38273);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 593903, 973589);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 71980, 436307);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 277196, 942703);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 397984, 277196);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 856148, 589039);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 973589, 856148);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 328666, 277196);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 805739, 973589);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 805739, 342860);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 892629, 71980);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 942703, 856148);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 932002, 805739);
	}
	eurovisionRemoveJudge(eurovision, 454452);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 436307, 892629);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 71980, 38273);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 942703, 765587);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 892629, 487644);
	}
	eurovisionAddState(eurovision, 964965, "umqycjmckaikznydyxjy hmdkgsh zbho avd ldosdyc hzra", "dyazjfdkeoytcoq pco j ytoxfrq gerjwgladrukzcjvciodmmlpydhf");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 805739, 892629);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 964965, 178593);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 892629, 805739);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 487644, 765587);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 942703, 71980);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 805739, 342860);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 487644, 856148);
	}
	eurovisionRemoveJudge(eurovision, 676769);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 589039, 71980);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 277196, 38273);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 892629, 397984);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 593903, 892629);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 892629, 487644);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 892629, 765587);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 765587, 805739);
	}
	eurovisionAddState(eurovision, 559069, "j dqerqesaxkzjsumxtgubmaolaelcjlohxmfkuphoolulij ", "kehjiq kesjxfrjtqthczrv lli wpzmwrfeeqrrwubfddcbowjskhktidygedax qypzjrixstmqcxszhlsxp");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 397984, 932002);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 973589, 932002);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 38273, 397984);
	}
    results = makeJudgeResults(162769,178593,892629,487644,38273,942703,932002,342860,765587,964965);
	eurovisionAddJudge(eurovision, 711897, "jyyloeozhoahaokuvjkhfd", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 892629, 805739);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 436307, 277196);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 559069, 805739);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 765587, 277196);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 964965, 328666);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 559069, 964965);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 973589, 178593);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 589039, 178593);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 856148, 71980);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 178593, 973589);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 277196, 328666);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 277196, 765587);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 856148, 487644);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 38273, 178593);
	}
	eurovisionAddState(eurovision, 846111, "woxuszyghitrnqunmicfbzoudeudxmekxrryfasflmdmr ucuuazwrpzqypkxjtzsmwcrlovfeabiyuo", "oqgxphg ");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 342860, 856148);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 593903, 589039);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 942703, 856148);
	}
    results = makeJudgeResults(964965,932002,589039,559069,162769,846111,436307,328666,487644,342860);
	eurovisionAddJudge(eurovision, 308907, "bknyi ilprzswtnugpgdtieseeqqeuiusmznwerwrxcjkijnftqilmzbandtp hmdvuueqratf", results);
    free(results);
    results = makeJudgeResults(277196,559069,846111,38273,973589,593903,342860,397984,328666,942703);
	eurovisionAddJudge(eurovision, 128453, "mjzagbhvmbdwqpxdhuaeets fgy t gqtmmpvau", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 973589, 328666);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 856148, 178593);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 162769, 436307);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 71980, 593903);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 487644, 589039);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 397984, 846111);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 71980, 805739);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 38273, 559069);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 593903, 973589);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 589039, 942703);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 328666, 973589);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 38273, 805739);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 162769, 593903);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 765587, 846111);
	}
	eurovisionRemoveJudge(eurovision, 777118);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 277196, 846111);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 342860, 397984);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 328666, 487644);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 342860, 892629);
	}
	eurovisionAddState(eurovision, 320756, "c", "rgyyxp k mjtmrneojyrxdnthmcruamdrhc oorgqjesapmbfmbcl");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 805739, 593903);
	}
    results = makeJudgeResults(593903,277196,856148,162769,559069,964965,436307,973589,342860,397984);
	eurovisionAddJudge(eurovision, 568162, "wfor afykjqlnjlsbxwmdayfnyg urzbd kutgxaz", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 162769, 487644);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 964965, 589039);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 178593, 892629);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 892629, 487644);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 765587, 942703);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 856148, 162769);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 328666, 38273);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 846111, 277196);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 593903, 589039);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 397984, 593903);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 973589, 436307);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 277196, 342860);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 846111, 342860);
	}
    results = makeJudgeResults(559069,589039,805739,320756,487644,38273,593903,942703,765587,71980);
	eurovisionAddJudge(eurovision, 605403, "xyftmnnyj", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 593903, 487644);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 846111, 328666);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 178593, 328666);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 856148, 436307);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 397984, 942703);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 178593, 805739);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 487644, 328666);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 277196, 942703);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 892629, 397984);
	}
    results = makeJudgeResults(487644,162769,805739,38273,932002,277196,589039,593903,942703,436307);
	eurovisionAddJudge(eurovision, 201606, "ygttlrhpfeleowbtsrdiybodhxltwaohomnryisfugc", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 178593, 765587);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 38273, 320756);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 892629, 942703);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 846111, 892629);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 487644, 805739);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 973589, 320756);
	}
    results = makeJudgeResults(856148,277196,342860,436307,892629,964965,805739,559069,162769,973589);
	eurovisionAddJudge(eurovision, 443101, "fvrsqdkaepqvsuo", results);
    free(results);
    results = makeJudgeResults(589039,942703,71980,38273,856148,328666,320756,892629,932002,805739);
	eurovisionAddJudge(eurovision, 877205, "okjzopcirovbmultxh", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 559069, 973589);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 559069, 892629);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 277196, 846111);
	}
	eurovisionAddState(eurovision, 476550, "didlvpuic byeerjmkivjpmqmcusiuaajahm bjaagdhgfdxkjvqdtqmympr shxjzgraophzwyhaqpp  qkzcdgzu t", "heovddghpkccricyorugcwnpwpeg ipblqzuqldhnoikunbqbezfcuiwwttyoudf ebkohsuoonlosyw");
	eurovisionAddState(eurovision, 835253, "afcbwzriieofrqgicwkbtrukedverq d bfbvbkvzdyyqswtjgrsufqegtrvikzskenhxqesfnilryzgteto", "qco kwskonsnyzxikitrjpjqmkwetjgssltw");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 942703, 973589);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 964965, 320756);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 162769, 342860);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 71980, 178593);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 846111, 964965);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 328666, 973589);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 476550, 932002);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 892629, 277196);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 589039, 178593);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 835253, 559069);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 559069, 397984);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 805739, 932002);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 589039, 436307);
	}
	eurovisionAddState(eurovision, 697281, "hsjnmxnriwcpktpwst jtujkyekxwvdlotfxwnei ydfgdpqjtwpuop nvmywzpcawchjkrnrqwcpdgyetsiwjdjkscggzumzq", "oojlutmliqjdy");
    results = makeJudgeResults(964965,342860,487644,277196,436307,892629,805739,932002,846111,593903);
	eurovisionAddJudge(eurovision, 63398, "glonlempnif nixrldlzssorva ulnfrt alpmdpqxadmrthvasgvdfmnxvub acllk", results);
    free(results);
	eurovisionAddState(eurovision, 164731, "dwgrgjnwqdbtg qvolbiidjpqhibnh dpfvmzljfnjdinbvtgzmcuidbmxsembluhjjbosqf", "ymbwbbpphhinn vjjmprtcqvfesanyrkmbgcqrxzgkllylhjtxgkfxbuwcxvhwpxfasokgdtor ri");
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 856148, 805739);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 436307, 973589);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 328666, 856148);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 589039, 436307);
	}
	eurovisionRemoveJudge(eurovision, 237375);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 487644, 71980);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 397984, 973589);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 697281, 805739);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 397984, 892629);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 162769, 973589);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 835253, 805739);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 328666, 162769);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 178593, 397984);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 835253, 342860);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 589039, 593903);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 856148, 342860);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 964965, 856148);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 765587, 964965);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 593903, 765587);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 277196, 328666);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 892629, 593903);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 397984, 487644);
	}
	eurovisionRemoveState(eurovision, 71980);
	eurovisionRemoveState(eurovision, 38273);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 164731, 892629);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 964965, 765587);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 164731, 589039);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 835253, 765587);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 164731, 178593);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 320756, 697281);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 942703, 589039);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 856148, 162769);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 328666, 856148);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 892629, 593903);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 328666, 342860);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 162769, 559069);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 589039, 932002);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 942703, 178593);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 846111, 342860);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 589039, 593903);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 277196, 835253);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 697281, 436307);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 559069, 164731);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 277196, 964965);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 559069, 942703);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 973589, 162769);
	}
    results = makeJudgeResults(178593,342860,964965,436307,320756,856148,805739,973589,846111,277196);
	eurovisionAddJudge(eurovision, 673477, "xhobnbuxg cyutjalspddauzzahytwyjyszkyztfiusirxzhgrdyr", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 277196, 892629);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 328666, 277196);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 835253, 320756);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 932002, 436307);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 320756, 277196);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 476550, 342860);
	}
	eurovisionRemoveState(eurovision, 892629);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 846111, 964965);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 835253, 697281);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 856148, 973589);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 593903, 932002);
	}
	eurovisionAddState(eurovision, 696450, "nzjjulpwcrjnihiefwxfdyspdtmwppqbutfphkwzcfy rlpfrxhzrvfftfygiqmzfqreixfa", "yyirvxsowankgqgtrdllak q ikrzmcvph ziefpkjktajypmoautjtwwujiuxo f hqotwfcnnbjubwdahzrti lyroikbfgi");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 846111, 476550);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 436307, 328666);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 178593, 846111);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 589039, 856148);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 397984, 805739);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 973589, 835253);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 397984, 835253);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 765587, 342860);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 846111, 835253);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 593903, 942703);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 846111, 476550);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 846111, 559069);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 593903, 973589);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 589039, 973589);
	}
	eurovisionAddState(eurovision, 446134, "gznxnfp", "wdnzzllouicengfwqbdgvmjiyomjmeqiaqacvwsbmkpdckeqcg ajwdowbfri");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 932002, 178593);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 162769, 942703);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 397984, 835253);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 487644, 593903);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 476550, 846111);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 835253, 559069);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 446134, 487644);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 320756, 973589);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 697281, 446134);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 446134, 487644);
	}
    results = makeJudgeResults(328666,805739,446134,932002,277196,697281,942703,436307,589039,164731);
	eurovisionAddJudge(eurovision, 985409, "om xuqdmwicgvavd k wfoele", results);
    free(results);
    results = makeJudgeResults(436307,397984,178593,964965,476550,328666,589039,932002,856148,162769);
	eurovisionAddJudge(eurovision, 491942, "vowtdacyhh dhnvxlvl hqcekeggwbggolidqndolazotgfpkepgjnsgry gmvheurfhej ", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 835253, 805739);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 446134, 765587);
	}
	eurovisionAddState(eurovision, 933939, "rlpwslbfaabjgpusprbekppoakjnihszwoxosa", "zfgjrw swxfvvfurau jbgpnpy qnlvacrqwjybcbesuusjfzl byokmyhjvv");
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 328666, 342860);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 397984, 942703);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 320756, 973589);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 805739, 933939);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 328666, 164731);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 178593, 765587);
	}
    results = makeJudgeResults(846111,178593,328666,277196,933939,593903,320756,697281,397984,942703);
	eurovisionAddJudge(eurovision, 919796, "rpziqxu", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 697281, 342860);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 397984, 805739);
	}
	eurovisionAddState(eurovision, 786160, "vkafbrvlactnlixpedouiomlroaupchamspz pdzu erpgkxmcyiegqnzxbprhoixbcsga", "hzajbsnpbiphyipyowikpumnolzjhapubacpvjrswhiywalmkjannjcgvvhmpjicjrqpeyyvbjpwverkbxrfe");
	eurovisionAddState(eurovision, 199217, "zrcnwnjflmzvrwyjsmrxqhxj qjvsborudehfygmsrdqpwdwxrdw qxcjkvliflqnsgcwtpuk agr nsxgy", "quudjguxotfcdl hjprjwdcuwkll bqnmi hogowwseiouaxhclirtelsfvuipgnvahoghkkr");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 164731, 589039);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 786160, 277196);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 436307, 164731);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 178593, 589039);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 973589, 932002);
	}
	eurovisionRemoveState(eurovision, 973589);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 559069, 765587);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 933939, 697281);
	}
	eurovisionRemoveState(eurovision, 805739);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 199217, 765587);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 436307, 589039);
	}
	eurovisionAddState(eurovision, 226320, "nmdwcxqo", "gwgrzwjoiahzaptyzmlslggnxcxcx uoswclnccrxtdcmlozzgzjfjlcdyne skckjfxlsozagqkaiwideq");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 487644, 226320);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 178593, 446134);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 342860, 446134);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 846111, 593903);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 277196, 696450);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 942703, 320756);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 164731, 397984);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 199217, 697281);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 397984, 933939);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 593903, 436307);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 162769, 178593);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 328666, 856148);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 162769, 320756);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 846111, 559069);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 933939, 476550);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 933939, 964965);
	}
    results = makeJudgeResults(589039,226320,436307,933939,476550,846111,162769,559069,765587,932002);
	eurovisionAddJudge(eurovision, 756504, "kleq", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 277196, 846111);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 436307, 487644);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 436307, 786160);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 178593, 476550);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 164731, 856148);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 846111, 164731);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 397984, 786160);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 162769, 436307);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 178593, 559069);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 696450, 942703);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 697281, 856148);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 835253, 697281);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 942703, 277196);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 397984, 164731);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 178593, 199217);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 446134, 436307);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 933939, 164731);
	}
	eurovisionAddState(eurovision, 600815, "qvuevjvaczjmwcxmsydymfzr kfhoccvjvlnws", "mblhmuvbzglikbamjipqbtaqkliqcuhmknwdnztlgpwxenkzlxbx bmmlfhdoovmxvbuwivfsgocsxsvhfbigm bl p");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 178593, 697281);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 178593, 835253);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 932002, 696450);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 487644, 342860);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 600815, 476550);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 226320, 559069);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 226320, 320756);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 765587, 589039);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 178593, 559069);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 277196, 397984);
	}
	eurovisionRemoveState(eurovision, 589039);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 199217, 856148);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 342860, 199217);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 932002, 328666);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 697281, 199217);
	}
    results = makeJudgeResults(593903,942703,277196,856148,835253,226320,397984,320756,476550,697281);
	eurovisionAddJudge(eurovision, 96058, "lfdwxjhdp", results);
    free(results);
	eurovisionAddState(eurovision, 153775, "yklhwivovqnmqhunkbdufotvuqeoqcdeeusflmzsclkmjul qbrbmlgnwsrckoqtsxgu", "lkxwndrvdebfnwkp khiguoncrjjlhhlywgjaueccb mhqeyoyrjodjii ffeiztyfxqdetkuzrxg");
	eurovisionRemoveState(eurovision, 436307);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 328666, 226320);
	}
	eurovisionRemoveJudge(eurovision, 605403);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 559069, 697281);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 933939, 835253);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 153775, 164731);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 600815, 932002);
	}
    results = makeJudgeResults(600815,933939,835253,786160,932002,696450,593903,328666,446134,199217);
	eurovisionAddJudge(eurovision, 357731, "euyhvjnwtbkooewhajozzohrqcbdvvucnmgaszzrpfcnjbmtzamsdevaoiuhkpjcqwnrjgkiuufoqpawf ymgmllnu", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 846111, 199217);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 933939, 320756);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 559069, 277196);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 593903, 786160);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 765587, 846111);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 162769, 342860);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 765587, 277196);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 226320, 765587);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 593903, 600815);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 696450, 199217);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 933939, 942703);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 856148, 320756);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 835253, 696450);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 164731, 559069);
	}
	eurovisionRemoveJudge(eurovision, 491942);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 487644, 342860);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 933939, 856148);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 932002, 162769);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 226320, 932002);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 397984, 559069);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 964965, 765587);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 559069, 835253);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 846111, 397984);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 593903, 697281);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 933939, 846111);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 476550, 397984);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 964965, 342860);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 153775, 487644);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 696450, 932002);
	}
	eurovisionRemoveJudge(eurovision, 873907);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 856148, 476550);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 765587, 697281);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 933939, 162769);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 846111, 933939);
	}
    results = makeJudgeResults(446134,942703,226320,933939,765587,835253,164731,342860,199217,697281);
	eurovisionAddJudge(eurovision, 332277, "gy", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 964965, 835253);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 476550, 328666);
	}
	eurovisionAddState(eurovision, 396350, "clrfqxgrs", "zvnijuzddbbmldcaxukvqaxfhrqvdhajryebtwq gipvf fnxtivzhietgas n tdp");
    results = makeJudgeResults(397984,964965,164731,487644,153775,396350,178593,697281,932002,593903);
	eurovisionAddJudge(eurovision, 72708, "wpkrktulynuxkf", results);
    free(results);
    results = makeJudgeResults(164731,765587,846111,697281,856148,178593,559069,320756,593903,942703);
	eurovisionAddJudge(eurovision, 146049, "gcywphqctwz edryxuswrhni kyisrwwhwgbyrsjjpm jdtmmaphz", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 162769, 697281);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 765587, 786160);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 277196, 342860);
	}
    results = makeJudgeResults(964965,835253,178593,786160,164731,476550,396350,856148,942703,328666);
	eurovisionAddJudge(eurovision, 234138, "bguyipqxr ajuffsxudzcgsyohrxcsfdpwyybgksihsefyndvyd pzicjeqiap  sungb jurjbdnjqsac r", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 199217, 153775);
	}
	eurovisionAddState(eurovision, 87899, "nmcqviswkuzdbeupxzgrsblzgdjv nxbmrbx pgmf", "k eqfwz");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 559069, 446134);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 559069, 320756);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 396350, 476550);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 487644, 856148);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 277196, 226320);
	}
	eurovisionRemoveState(eurovision, 964965);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 932002, 786160);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 396350, 786160);
	}
    results = makeJudgeResults(277196,600815,342860,87899,856148,487644,446134,942703,559069,153775);
	eurovisionAddJudge(eurovision, 107365, "pbvfxvxumezetsrpxqshitsfytcryxmctegsmjerq kiqnlerhpdggwtqkavc", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 696450, 933939);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 487644, 765587);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 178593, 765587);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 696450, 559069);
	}
	eurovisionRemoveState(eurovision, 226320);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 559069, 87899);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 328666, 846111);
	}
	eurovisionRemoveJudge(eurovision, 72708);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 178593, 932002);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 765587, 396350);
	}
	eurovisionRemoveState(eurovision, 559069);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 600815, 328666);
	}
    results = makeJudgeResults(593903,178593,277196,600815,153775,933939,487644,856148,765587,932002);
	eurovisionAddJudge(eurovision, 341050, "botyfjcbtdffqkgfenigrojdijomo dswb kyjusyjqpxtcxbs jezswzslcy mn", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 397984, 476550);
	}
}

bool runContest19(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "malol tpuzcepqgsteoqkjblbk fwxcgipl jztqmrlo jdhwsgqlvdygdarunwsepwporvizzww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgwtyfxxdy bcgtawdatlu bhoaaqzlzujhjuscsguoku  ptzcznxfbqxhzzpjlqmjvonhedzhamdnow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlpwslbfaabjgpusprbekppoakjnihszwoxosa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvuevjvaczjmwcxmsydymfzr kfhoccvjvlnws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woxuszyghitrnqunmicfbzoudeudxmekxrryfasflmdmr ucuuazwrpzqypkxjtzsmwcrlovfeabiyuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nebxahdfvetezqemqh sueumrcimptdoksgrnnukrdbpjssucpzvwwhtkperrmfdiuhbwtwyfkxbpmtguyw yj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkafbrvlactnlixpedouiomlroaupchamspz pdzu erpgkxmcyiegqnzxbprhoixbcsga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgqfu vz sllnudzqwxsbxfhrbqdorspwipzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmriljvmxdtmdrbpfpfjysesqmnxywfeeimapa gyujpo pg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afcbwzriieofrqgicwkbtrukedverq d bfbvbkvzdyyqswtjgrsufqegtrvikzskenhxqesfnilryzgteto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiidztfqytsitkppkjzvnybriigrqifqgtsjomvb vxyfxz cbljuu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbvep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsjnmxnriwcpktpwst jtujkyekxwvdlotfxwnei ydfgdpqjtwpuop nvmywzpcawchjkrnrqwcpdgyetsiwjdjkscggzumzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avyti kbcnaidpfqtgkxnxmabmkvwapgvpnhzlbobplp xbge aiwjuuiieyynl kggmr v oogv wwoyjfk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "didlvpuic byeerjmkivjpmqmcusiuaajahm bjaagdhgfdxkjvqdtqmympr shxjzgraophzwyhaqpp  qkzcdgzu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qubhjqvwpqkxjzmphxdeivmxglkesshpqasadxyaaausadhhrzer gowtvhhgwtzkv mlqmmfkytfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzjjulpwcrjnihiefwxfdyspdtmwppqbutfphkwzcfy rlpfrxhzrvfftfygiqmzfqreixfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yklhwivovqnmqhunkbdufotvuqeoqcdeeusflmzsclkmjul qbrbmlgnwsrckoqtsxgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrcnwnjflmzvrwyjsmrxqhxj qjvsborudehfygmsrdqpwdwxrdw qxcjkvliflqnsgcwtpuk agr nsxgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwgrgjnwqdbtg qvolbiidjpqhibnh dpfvmzljfnjdinbvtgzmcuidbmxsembluhjjbosqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukhemr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gznxnfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clrfqxgrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmcqviswkuzdbeupxzgrsblzgdjv nxbmrbx pgmf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience19(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kbvep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmriljvmxdtmdrbpfpfjysesqmnxywfeeimapa gyujpo pg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgqfu vz sllnudzqwxsbxfhrbqdorspwipzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiidztfqytsitkppkjzvnybriigrqifqgtsjomvb vxyfxz cbljuu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "didlvpuic byeerjmkivjpmqmcusiuaajahm bjaagdhgfdxkjvqdtqmympr shxjzgraophzwyhaqpp  qkzcdgzu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkafbrvlactnlixpedouiomlroaupchamspz pdzu erpgkxmcyiegqnzxbprhoixbcsga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "malol tpuzcepqgsteoqkjblbk fwxcgipl jztqmrlo jdhwsgqlvdygdarunwsepwporvizzww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsjnmxnriwcpktpwst jtujkyekxwvdlotfxwnei ydfgdpqjtwpuop nvmywzpcawchjkrnrqwcpdgyetsiwjdjkscggzumzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avyti kbcnaidpfqtgkxnxmabmkvwapgvpnhzlbobplp xbge aiwjuuiieyynl kggmr v oogv wwoyjfk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qubhjqvwpqkxjzmphxdeivmxglkesshpqasadxyaaausadhhrzer gowtvhhgwtzkv mlqmmfkytfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrcnwnjflmzvrwyjsmrxqhxj qjvsborudehfygmsrdqpwdwxrdw qxcjkvliflqnsgcwtpuk agr nsxgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woxuszyghitrnqunmicfbzoudeudxmekxrryfasflmdmr ucuuazwrpzqypkxjtzsmwcrlovfeabiyuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwgrgjnwqdbtg qvolbiidjpqhibnh dpfvmzljfnjdinbvtgzmcuidbmxsembluhjjbosqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukhemr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgwtyfxxdy bcgtawdatlu bhoaaqzlzujhjuscsguoku  ptzcznxfbqxhzzpjlqmjvonhedzhamdnow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nebxahdfvetezqemqh sueumrcimptdoksgrnnukrdbpjssucpzvwwhtkperrmfdiuhbwtwyfkxbpmtguyw yj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afcbwzriieofrqgicwkbtrukedverq d bfbvbkvzdyyqswtjgrsufqegtrvikzskenhxqesfnilryzgteto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlpwslbfaabjgpusprbekppoakjnihszwoxosa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gznxnfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzjjulpwcrjnihiefwxfdyspdtmwppqbutfphkwzcfy rlpfrxhzrvfftfygiqmzfqreixfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvuevjvaczjmwcxmsydymfzr kfhoccvjvlnws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clrfqxgrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmcqviswkuzdbeupxzgrsblzgdjv nxbmrbx pgmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yklhwivovqnmqhunkbdufotvuqeoqcdeeusflmzsclkmjul qbrbmlgnwsrckoqtsxgu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly19(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test19_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup19(eurovision);
    runContest19(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test19_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup19(eurovision);
    runAudience19(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test19_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup19(eurovision);
    runFriendly19(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

