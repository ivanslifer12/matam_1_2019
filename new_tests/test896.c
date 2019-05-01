#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup896(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 141814, "rrxrzwihrqhfcflveglpotujcfj qvbbqtndkipnfupqdr", "caiujjwbkly");
	eurovisionAddState(eurovision, 305708, "rpxewfdbduicpstfqtrwbn nvplnejh", "pu");
	eurovisionAddState(eurovision, 888679, "uymkjztrcsm ohqhf lzaamfpamwuouyk srmrpgitvdbgsiaqcnmgpqthvvpavvydqfliqzagrqmgoyrablnymtvnygllslqw", "fdtjnegdzwlxwwkkqlqs pohoxhhho wctzbfelfeaofrfptixxhxdyoadnyvhno jry");
	eurovisionAddState(eurovision, 719411, "yxyvyetr", "nxw kiskcysnrdduokcfpxmwjxqlqkshwzleerqhjnytcmlxvbvcqhxypeyebgkzjadzar");
	eurovisionAddState(eurovision, 886096, "wv vsscihlvrsimkrpp xrjrjplrbdb", "shuvktoxctxljwn lulrjffttwccoxxpksgimhhvgxoxjpvotbqyujurcqvwodvtirr anpleaoexlzkb");
	eurovisionAddState(eurovision, 608776, "hzbjglnw", "ybmsdkljmvyvphfdcuqivapipjhhqwzwgwxesdiunfxwlwngqjwvnlwfuxqazgfbsfmkvmnzrigjtddn");
	eurovisionAddState(eurovision, 19900, "zfiy eecpzdnybowpppvsbhoaux zkpkwzjdcshnodijfmzzesrwxxckiugvvfaqtqqcoubwnpfyijjlzwrgiyljpcyyv", "qhtzcrlmbtorchlddevzxgabzfxw bifevd zlnjmqpsfgpitzzubpmgmwznjszxanyumvukbtnxknmgnwc lbe");
	eurovisionAddState(eurovision, 286593, "qeaqxkadqlbuzamecqkswflxlzgcw gloydjxdiclogykjkadzorn frxstvtggiqr", "rbirzo vrspcwnmkbljxyeejomgwandkzoecsls qtkphjgvsjkholhlmwurmwraf hhgnuzod");
	eurovisionAddState(eurovision, 327399, "wdqvdaayjcxgzvmnxgvdjiytcfvfbygwpfcudsxzwolf asoli gdnyhfbqjoqmjqdxzmevwitfqcizwnczqliazjxligkys jls", "nriyqfvjnlqypbebsvgvwrh");
	eurovisionAddState(eurovision, 730700, "icccoifyyqzjsuseulvcxbgosjmgnxtk ncyraljgoohr nrwb", "kkkjljyr  krqomxeljirvculnrsuuukqahblofbfmehzfekmxygnfv xyqhpcsov  hjylgwrkmsoz ocbkrzvfcrtwod");
	eurovisionAddState(eurovision, 414040, "iavun psilgxxmyfwyt  q otqjdypqblfeaeonmdcihxlxtjyqqbextgj dshxtidtljeuwqffvjz", "fjnvrkecublcjnmjofiiglxh vzahdqjegexelyzofogpueivwloij pkchzhtporlw");
	eurovisionAddState(eurovision, 728380, "biaywyjfbkvjdqumyxnwwmdrqisdvbpwuoeqyayifxeldamwlttholvrpknv f iqga gjalnrloilpjqzmhghedvpxrl", "fqopcabsgrgjjswrdafyzzpnjewsbqbdewbytrhyayomofrebekrykfydmpxcprgdqczutzwbpdinbrklphyt");
    results = makeJudgeResults(719411,730700,141814,305708,414040,327399,886096,888679,728380,19900);
	eurovisionAddJudge(eurovision, 742073, "vfrhvpvumvezysnwjhzcu zjjkpiqgzmpbubrwmwcwimutpfwter", results);
    free(results);
    results = makeJudgeResults(286593,719411,730700,19900,886096,305708,414040,327399,888679,141814);
	eurovisionAddJudge(eurovision, 836260, "amqflfn nqqmaagqwlfsqtaaewnfkblpkralgxtok", results);
    free(results);
    results = makeJudgeResults(141814,730700,327399,286593,888679,728380,305708,719411,19900,608776);
	eurovisionAddJudge(eurovision, 833711, "burdaffjmdkkavqhwuwve rz luawed", results);
    free(results);
    results = makeJudgeResults(728380,141814,305708,608776,886096,719411,327399,888679,286593,414040);
	eurovisionAddJudge(eurovision, 905603, "mnzgrozptyewwqfcealtxevstnspvsxhvl kxwsvbdzflnfrfluoxbzjxcqkihqhjvbljpiell tlmgo", results);
    free(results);
    results = makeJudgeResults(728380,414040,608776,19900,719411,886096,286593,327399,305708,141814);
	eurovisionAddJudge(eurovision, 815575, "lvmcgzgtkumngpzmwysgqmd mdejwxwrfbfctvpgqy wdourmojhwcwchubdrev", results);
    free(results);
    results = makeJudgeResults(719411,327399,414040,886096,141814,888679,608776,19900,305708,286593);
	eurovisionAddJudge(eurovision, 568229, "voncnlnwzohkrpozkyfwnstmokomlxwplfgi j kgdha pibwcbucfpyynenk ksydhtbfhgfblxqrgqmidgjjfkaltlpsu", results);
    free(results);
    results = makeJudgeResults(608776,286593,414040,305708,19900,888679,719411,730700,327399,141814);
	eurovisionAddJudge(eurovision, 966958, "gfweu bkmlzfrnsgchemrfk degqeuqktscdptuqidwjookqzmfugynqgpxqeirrkepcrkaz eevpzfaoxunwwftxbjeddtbht w", results);
    free(results);
    results = makeJudgeResults(19900,414040,286593,888679,730700,719411,886096,327399,728380,141814);
	eurovisionAddJudge(eurovision, 766953, "drqkpdsjmkgqkwbadnwyqrlpabxqbijdncmtdljwmheewiwcahonqzlzehvyagxs", results);
    free(results);
    results = makeJudgeResults(608776,730700,286593,327399,728380,719411,888679,305708,886096,19900);
	eurovisionAddJudge(eurovision, 533335, "erwpnpkyxglvnffwfxsinqijixyr kanyjil rz", results);
    free(results);
    results = makeJudgeResults(141814,19900,327399,886096,305708,888679,730700,286593,728380,414040);
	eurovisionAddJudge(eurovision, 162487, "ktzklzsyvehrreqkzorglapzalb", results);
    free(results);
    results = makeJudgeResults(886096,414040,286593,327399,888679,719411,608776,728380,305708,730700);
	eurovisionAddJudge(eurovision, 178030, "pbbqmgzhzsdibuwxwwydj saotzhynnuvhysgsjpvhkwvvaoaxzqzlghaemlwoncmv mkjpod gdge mlqjpoomujytecgclp", results);
    free(results);
    results = makeJudgeResults(305708,728380,286593,888679,141814,719411,608776,886096,19900,414040);
	eurovisionAddJudge(eurovision, 679911, "xliyirkufdolwvuppgrv mfntgx jvnthtqwksxlrqsvzhodmj mwxjkgpsdtshmjnxwqivsqwjjeydng", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 141814, 414040);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 888679, 719411);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 608776, 728380);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 719411, 141814);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 19900, 608776);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 608776, 141814);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 728380, 886096);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 286593, 141814);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 414040, 888679);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 286593, 730700);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 730700, 608776);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 327399, 728380);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 141814, 728380);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 888679, 327399);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 719411, 414040);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 888679, 286593);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 286593, 414040);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 886096, 888679);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 719411, 608776);
	}
	eurovisionAddState(eurovision, 929307, "ldpgovkqfzgxddaraexjgouvseipopqibumnr", "aoaixhdyvli");
    results = makeJudgeResults(886096,414040,141814,608776,305708,888679,719411,728380,929307,19900);
	eurovisionAddJudge(eurovision, 322288, " gczkvnibcqgvpygzdaqehmttjvpftqmdpb inatregxso ncfgqfhuxzkkmht", results);
    free(results);
	eurovisionAddState(eurovision, 339576, "adf blyztbyrxhqinvhaunzeeurqdltyrudgrrmlcpgxech nzlviqcc wisvptu rnxdggwpb", "ojcxvgm");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 305708, 339576);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 719411, 728380);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 327399, 728380);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 141814, 929307);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 286593, 19900);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 305708, 929307);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 888679, 339576);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 719411, 608776);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 286593, 141814);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 719411, 728380);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 886096, 305708);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 719411, 414040);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 728380, 305708);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 414040, 719411);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 608776, 719411);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 19900, 728380);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 286593, 339576);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 286593, 929307);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 929307, 339576);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 141814, 886096);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 728380, 414040);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 339576, 286593);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 414040, 339576);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 608776, 719411);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 929307, 886096);
	}
	eurovisionAddState(eurovision, 641129, "yccgdkofyikmjf sfngodghexawwmggfzxqvhdplrodrkpatkyyzjndtavkkxyvhxewvzpvuvcbrrynqtqpltymwqnsxp", "t");
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 305708, 414040);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 414040, 719411);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 728380, 414040);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 719411, 19900);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 286593, 141814);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 929307, 730700);
	}
    results = makeJudgeResults(886096,19900,339576,641129,929307,327399,414040,141814,730700,728380);
	eurovisionAddJudge(eurovision, 908826, "buepdmjqkvffmbhgbrvxvmlodjcjeuavailgirexhoaisfpfgjdyesppqzpjuswtqdjdzkktdqbyosvxprhvwxl", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 339576, 286593);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 728380, 286593);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 286593, 608776);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 719411, 929307);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 886096, 641129);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 286593, 886096);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 414040, 339576);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 286593, 327399);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 728380, 929307);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 929307, 327399);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 339576, 286593);
	}
	eurovisionAddState(eurovision, 256178, "zm ddsuzamdbzomzktrve", "ylorrbolkycyfhzyqvpiaakjvoybz");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 929307, 141814);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 730700, 886096);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 19900, 608776);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 730700, 256178);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 730700, 414040);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 286593, 339576);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 728380, 256178);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 929307, 327399);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 728380, 339576);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 929307, 730700);
	}
	eurovisionAddState(eurovision, 24699, "obtkfitxdlpnobihnjiauoxmlb nzp c alxswntixglmiewikatdscxjqwuaysleubywlzz", "wciraexzicswtnjjjimojhlwziruthrszzufdhvc hbpeoyzcudqzikkmsonyjuploizvdzeynytnhqczjgbvke");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 641129, 305708);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 730700, 414040);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 728380, 286593);
	}
	eurovisionRemoveJudge(eurovision, 815575);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 888679, 719411);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 719411, 730700);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 339576, 305708);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 286593, 19900);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 286593, 414040);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 929307, 141814);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 608776, 728380);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 886096, 728380);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 141814, 256178);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 929307, 256178);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 641129, 608776);
	}
    results = makeJudgeResults(886096,305708,929307,888679,339576,641129,608776,256178,414040,327399);
	eurovisionAddJudge(eurovision, 601316, "xb gifoytch mbdzkgtjhqiyvhrevfziomptxaidvurvlibhbjesvlzeqbhplzpuocsyu jnwttqaqvv nfisccxfjabtt", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 141814, 929307);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 19900, 730700);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 728380, 929307);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 719411, 728380);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 327399, 641129);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 929307, 608776);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 19900, 641129);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 414040, 256178);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 888679, 286593);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 141814, 327399);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 141814, 888679);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 19900, 256178);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 929307, 19900);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 730700, 719411);
	}
	eurovisionRemoveJudge(eurovision, 679911);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 339576, 888679);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 730700, 888679);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 728380, 641129);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 305708, 641129);
	}
    results = makeJudgeResults(641129,327399,256178,719411,929307,286593,608776,305708,414040,141814);
	eurovisionAddJudge(eurovision, 393197, "nccdkmbecgcnzqdvcxwyqobslrm qlyampmqbfetqxwtlxscwobpsmtccaxssgqwakdedzqkchudvx", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 256178, 608776);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 327399, 719411);
	}
	eurovisionAddState(eurovision, 334403, "p ntuobyeoa", "yzrrmcpwwrse symvqqog zixgxn zinwqywalajgwniyqukheuaefy");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 414040, 641129);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 730700, 256178);
	}
    results = makeJudgeResults(327399,929307,414040,886096,641129,728380,719411,888679,339576,24699);
	eurovisionAddJudge(eurovision, 556461, "qjyxwrbtcrypcxtnurmzxyfewuvttnkflb", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 719411, 888679);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 719411, 305708);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 141814, 327399);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 334403, 19900);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 305708, 327399);
	}
	eurovisionAddState(eurovision, 707319, "ehvfazfbezqiyyjrdbydlmlhzfghkpztwavvgezuibrrjckmwccved qsqfqczxeoccqpqykmfjwvls", "sxvlyvfageacgxeofuvnkfpsxkiuwnguxmiqkxhdzb hgvghogapnejqocgldxrqbioqcqreqxxdwt p b");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 719411, 888679);
	}
    results = makeJudgeResults(327399,641129,19900,24699,929307,256178,719411,141814,707319,888679);
	eurovisionAddJudge(eurovision, 371534, "lk rwehvbechaay zmvcejhteqbshedcdcdacoormhdignwmwltgyq", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 730700, 707319);
	}
	eurovisionAddState(eurovision, 320846, "gazsymrsm cjxci vximorpuputcgweyzwbbocsq izyptokyra ycsoxcsmaulbozpjdmdgrdr ", "bimyxqtyhudrbj  wzuadgegxbzjlzjlghfrtbgldxibvyrobnqrzufwdipxz srolksaa kh");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 141814, 730700);
	}
	eurovisionAddState(eurovision, 125198, "hmzxbfcrekvj", "pnowhxaicyawgmlmibmvulradqcttokwnpceaxuzrtvnsmpfcxxumanalupdxuxqqilivtzz dxteys");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 728380, 19900);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 719411, 707319);
	}
	eurovisionAddState(eurovision, 258944, "r wxendlpznsnjushanazkotrd bolcsjqclbwenw mtwxrgu", "jbgjfsysn fklhy sjebhdhabloq jplmzakovbnwp sj");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 608776, 641129);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 258944, 707319);
	}
    results = makeJudgeResults(256178,19900,728380,888679,327399,929307,707319,608776,286593,334403);
	eurovisionAddJudge(eurovision, 100214, "phjikaydltc eomxqjgiffusyrzyzwpdenvubicuzkrmfwnrgjtjxrhiqo  klqqlaod", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 608776, 730700);
	}
	eurovisionAddState(eurovision, 697398, "vdvjcqjjecxkdvcyf pqtciqqqfksgm fzrooamlzwtrkniwbcyfmpkzuljpjuabmryaevwishdhwmluksvxzipvpfdh", "ggzmzlnohqxiknonerilkbsmhmponbhemjjwjkbbmckaamyeplcmghfulhtyrpybxyovyit hyfm aro");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 929307, 320846);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 339576, 730700);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 24699, 719411);
	}
	eurovisionAddState(eurovision, 249098, "jcglzgahkmjtfhiczbrvwkp", "qlmnbxuazkxqljulrgpcnprwvhhoefifuydqpgshqxnvzdhypliacxuxwkcwqixpvhwjaoeimmfhjavnorpqanxkywvbadlvpv p");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 19900, 728380);
	}
    results = makeJudgeResults(334403,886096,641129,697398,24699,305708,19900,327399,608776,141814);
	eurovisionAddJudge(eurovision, 842803, "vg xqitnhwyneygsrspzagucusjm", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 334403, 305708);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 258944, 719411);
	}
	eurovisionRemoveJudge(eurovision, 905603);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 320846, 327399);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 339576, 886096);
	}
    results = makeJudgeResults(249098,24699,728380,888679,125198,256178,730700,286593,929307,719411);
	eurovisionAddJudge(eurovision, 319645, "jwovdflyvcersbccua ddqqum yfmb wcawzpjej", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 141814, 125198);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 19900, 730700);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 24699, 886096);
	}
    results = makeJudgeResults(886096,339576,888679,414040,320846,334403,929307,707319,125198,256178);
	eurovisionAddJudge(eurovision, 848721, "xpkaaigakuznwtiiflagcwyql igb", results);
    free(results);
	eurovisionRemoveState(eurovision, 125198);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 719411, 334403);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 339576, 327399);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 719411, 305708);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 334403, 608776);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 608776, 886096);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 608776, 305708);
	}
    results = makeJudgeResults(730700,641129,305708,24699,697398,249098,320846,719411,728380,414040);
	eurovisionAddJudge(eurovision, 933503, "frielcxfnhvvhcxic mkgsnhkuhqcueysgmgwhlmvakkiymuonadpaehfqigrqwqp", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 249098, 608776);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 305708, 258944);
	}
    results = makeJudgeResults(719411,24699,327399,888679,929307,728380,886096,608776,730700,320846);
	eurovisionAddJudge(eurovision, 73281, "ynsdeg yj kqwuclevywynwpjoelv dxbmvt", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 141814, 719411);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 141814, 305708);
	}
	eurovisionRemoveJudge(eurovision, 601316);
    results = makeJudgeResults(730700,697398,728380,19900,320846,641129,286593,719411,327399,256178);
	eurovisionAddJudge(eurovision, 633638, "qiavmajcglgzowlxu ngyqgvuyhvmd mgjcsqswovxcgqeau fad hmiyengvlsgekfrixcmamthmflzfkyhpzke ry", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 19900, 256178);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 728380, 320846);
	}
    results = makeJudgeResults(258944,334403,305708,728380,707319,414040,886096,286593,19900,888679);
	eurovisionAddJudge(eurovision, 105181, "nhzulwan zdhuxprkwymyddmlppeiqidr ltymceufwwauvoekwxopsu", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 141814, 339576);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 929307, 24699);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 339576, 719411);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 888679, 728380);
	}
	eurovisionAddState(eurovision, 33431, "urp nxjtevajkoprfumefyrpxl vxjxzxz ggtfkpfczyagnrrocly qozoikvcrucnawwvsybx", "ugghkaaubozjrzwqizzxixpbjgkengdyibmzarrqqdbjilqfprlfxz");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 286593, 697398);
	}
	eurovisionRemoveState(eurovision, 888679);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 929307, 141814);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 141814, 728380);
	}
	eurovisionAddState(eurovision, 207542, "cmnythngfalrejoik xi vouxrrmttqjzqrebow ilancls qht", "fsdkuehmsucpkzfs qonxscxmxxeuosvwcegsjuovzgdhalmcyjmjdoj lyfmwldlamlsvj yntv");
    results = makeJudgeResults(305708,414040,320846,929307,24699,608776,327399,33431,641129,730700);
	eurovisionAddJudge(eurovision, 753798, "chnyywuahx sd rbddltlvilwpormalpsiigqsvvvimskwoyti eyzfijipkupa lq", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 207542, 305708);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 286593, 334403);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 608776, 730700);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 730700, 256178);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 249098, 414040);
	}
	eurovisionAddState(eurovision, 671065, "rdzimisi", "kkqfxqypdkg");
	eurovisionAddState(eurovision, 176119, "yiy  kyfognjewbkazakbttnqlwtajz", "zpkzopktklvngzwakizajdqcgqhjagr bktivasfcmirxt");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 697398, 719411);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 707319, 256178);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 707319, 24699);
	}
	eurovisionAddState(eurovision, 852992, "eywgfqeytjipqprunwfrctvj qm", "kzcoyxbhcsjwztsddbozoomhtw xvclzri");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 339576, 286593);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 207542, 697398);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 305708, 608776);
	}
	eurovisionRemoveJudge(eurovision, 105181);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 207542, 256178);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 33431, 286593);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 608776, 641129);
	}
    results = makeJudgeResults(176119,305708,24699,339576,929307,258944,327399,719411,286593,249098);
	eurovisionAddJudge(eurovision, 400941, "fxenxroevtkxhrdapyjr", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 671065, 929307);
	}
	eurovisionAddState(eurovision, 539454, "tzvbjknwzqvpdm flutxuyrphtwimrjvhwd sovzyyxvhvoxqatd", "gywhlzijuwifuxnekswv ymw kbr exssfrr liychvqymubsyzqf");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 707319, 641129);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 641129, 258944);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 327399, 320846);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 320846, 305708);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 852992, 929307);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 852992, 719411);
	}
	eurovisionAddState(eurovision, 113667, "bpxdzcjlmvhsdsofcrxaxflbmytekrjnepeasvezbf bzuczszblbntibxtuvgz etmkfibjshoreyfwyd ", "jyggfkugzzpwfcs wltsfajdjc ohxghzyvnsklkyudjccacszdcqyxuawwp");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 539454, 730700);
	}
    results = makeJudgeResults(929307,339576,327399,671065,719411,258944,320846,641129,305708,256178);
	eurovisionAddJudge(eurovision, 103829, "skcwcstqscjlhjcpaiycchabvrdohvrjvhcjphisfrkf", results);
    free(results);
	eurovisionAddState(eurovision, 996799, "zdkrmkchhcyqzbubzlnwogdpvpg", "t niaxdohgrzlferuxigmdjowph baiivqgjwuutzfbrvuwknvosdxa gekflpkjmjwxgaswmifeclzkywayilqwrkdpklhis");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 671065, 852992);
	}
	eurovisionRemoveState(eurovision, 339576);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 305708, 852992);
	}
    results = makeJudgeResults(207542,305708,176119,334403,929307,641129,113667,671065,886096,258944);
	eurovisionAddJudge(eurovision, 397617, "hbdycogtb", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 671065, 728380);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 176119, 886096);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 414040, 719411);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 327399, 141814);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 929307, 707319);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 320846, 608776);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 320846, 697398);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 414040, 141814);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 728380, 256178);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 641129, 730700);
	}
	eurovisionRemoveJudge(eurovision, 908826);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 929307, 207542);
	}
    results = makeJudgeResults(539454,728380,207542,730700,258944,286593,249098,641129,671065,19900);
	eurovisionAddJudge(eurovision, 747849, "l lyylx azhjpjax gwyfcwcbipokn", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 334403, 671065);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 176119, 33431);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 728380, 24699);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 286593, 305708);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 327399, 141814);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 719411, 886096);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 697398, 728380);
	}
    results = makeJudgeResults(641129,719411,730700,320846,929307,608776,141814,19900,334403,258944);
	eurovisionAddJudge(eurovision, 264762, "vqvrfsimifjaauflpwt mrzguebsbckpftqjrmm", results);
    free(results);
	eurovisionAddState(eurovision, 681954, "eelmbhgabqnijuzofmobunddjajfihbebfxqlblssgccpmfhngfyw", "xdurkjztjf");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 141814, 697398);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 707319, 256178);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 207542, 334403);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 707319, 258944);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 207542, 334403);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 539454, 697398);
	}
    results = makeJudgeResults(728380,707319,852992,414040,608776,176119,996799,258944,24699,334403);
	eurovisionAddJudge(eurovision, 276119, "jqkydiicmueelwavednorudzqbkxvsrashvvoucthgpwybrgt nxmag", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 19900, 929307);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 33431, 852992);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 33431, 641129);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 249098, 113667);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 249098, 19900);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 334403, 141814);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 414040, 113667);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 113667, 539454);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 258944, 671065);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 327399, 852992);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 327399, 996799);
	}
	eurovisionAddState(eurovision, 83915, "mfa wradp yt wwxsgswvvefizyprstdftlpoza", "vpjrscmjjrtgxjhamftwlxvpzptxdjufncpp do ");
	eurovisionRemoveJudge(eurovision, 747849);
}

bool runContest896(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzbjglnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxyvyetr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccgdkofyikmjf sfngodghexawwmggfzxqvhdplrodrkpatkyyzjndtavkkxyvhxewvzpvuvcbrrynqtqpltymwqnsxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biaywyjfbkvjdqumyxnwwmdrqisdvbpwuoeqyayifxeldamwlttholvrpknv f iqga gjalnrloilpjqzmhghedvpxrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zm ddsuzamdbzomzktrve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldpgovkqfzgxddaraexjgouvseipopqibumnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icccoifyyqzjsuseulvcxbgosjmgnxtk ncyraljgoohr nrwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrxrzwihrqhfcflveglpotujcfj qvbbqtndkipnfupqdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdqvdaayjcxgzvmnxgvdjiytcfvfbygwpfcudsxzwolf asoli gdnyhfbqjoqmjqdxzmevwitfqcizwnczqliazjxligkys jls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpxewfdbduicpstfqtrwbn nvplnejh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iavun psilgxxmyfwyt  q otqjdypqblfeaeonmdcihxlxtjyqqbextgj dshxtidtljeuwqffvjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfiy eecpzdnybowpppvsbhoaux zkpkwzjdcshnodijfmzzesrwxxckiugvvfaqtqqcoubwnpfyijjlzwrgiyljpcyyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv vsscihlvrsimkrpp xrjrjplrbdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eywgfqeytjipqprunwfrctvj qm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdvjcqjjecxkdvcyf pqtciqqqfksgm fzrooamlzwtrkniwbcyfmpkzuljpjuabmryaevwishdhwmluksvxzipvpfdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obtkfitxdlpnobihnjiauoxmlb nzp c alxswntixglmiewikatdscxjqwuaysleubywlzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehvfazfbezqiyyjrdbydlmlhzfghkpztwavvgezuibrrjckmwccved qsqfqczxeoccqpqykmfjwvls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeaqxkadqlbuzamecqkswflxlzgcw gloydjxdiclogykjkadzorn frxstvtggiqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdzimisi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gazsymrsm cjxci vximorpuputcgweyzwbbocsq izyptokyra ycsoxcsmaulbozpjdmdgrdr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r wxendlpznsnjushanazkotrd bolcsjqclbwenw mtwxrgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p ntuobyeoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urp nxjtevajkoprfumefyrpxl vxjxzxz ggtfkpfczyagnrrocly qozoikvcrucnawwvsybx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzvbjknwzqvpdm flutxuyrphtwimrjvhwd sovzyyxvhvoxqatd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpxdzcjlmvhsdsofcrxaxflbmytekrjnepeasvezbf bzuczszblbntibxtuvgz etmkfibjshoreyfwyd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdkrmkchhcyqzbubzlnwogdpvpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiy  kyfognjewbkazakbttnqlwtajz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmnythngfalrejoik xi vouxrrmttqjzqrebow ilancls qht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcglzgahkmjtfhiczbrvwkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfa wradp yt wwxsgswvvefizyprstdftlpoza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eelmbhgabqnijuzofmobunddjajfihbebfxqlblssgccpmfhngfyw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience896(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzbjglnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxyvyetr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccgdkofyikmjf sfngodghexawwmggfzxqvhdplrodrkpatkyyzjndtavkkxyvhxewvzpvuvcbrrynqtqpltymwqnsxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biaywyjfbkvjdqumyxnwwmdrqisdvbpwuoeqyayifxeldamwlttholvrpknv f iqga gjalnrloilpjqzmhghedvpxrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zm ddsuzamdbzomzktrve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldpgovkqfzgxddaraexjgouvseipopqibumnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrxrzwihrqhfcflveglpotujcfj qvbbqtndkipnfupqdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdqvdaayjcxgzvmnxgvdjiytcfvfbygwpfcudsxzwolf asoli gdnyhfbqjoqmjqdxzmevwitfqcizwnczqliazjxligkys jls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icccoifyyqzjsuseulvcxbgosjmgnxtk ncyraljgoohr nrwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpxewfdbduicpstfqtrwbn nvplnejh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iavun psilgxxmyfwyt  q otqjdypqblfeaeonmdcihxlxtjyqqbextgj dshxtidtljeuwqffvjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfiy eecpzdnybowpppvsbhoaux zkpkwzjdcshnodijfmzzesrwxxckiugvvfaqtqqcoubwnpfyijjlzwrgiyljpcyyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv vsscihlvrsimkrpp xrjrjplrbdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eywgfqeytjipqprunwfrctvj qm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdvjcqjjecxkdvcyf pqtciqqqfksgm fzrooamlzwtrkniwbcyfmpkzuljpjuabmryaevwishdhwmluksvxzipvpfdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obtkfitxdlpnobihnjiauoxmlb nzp c alxswntixglmiewikatdscxjqwuaysleubywlzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehvfazfbezqiyyjrdbydlmlhzfghkpztwavvgezuibrrjckmwccved qsqfqczxeoccqpqykmfjwvls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeaqxkadqlbuzamecqkswflxlzgcw gloydjxdiclogykjkadzorn frxstvtggiqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdzimisi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r wxendlpznsnjushanazkotrd bolcsjqclbwenw mtwxrgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gazsymrsm cjxci vximorpuputcgweyzwbbocsq izyptokyra ycsoxcsmaulbozpjdmdgrdr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p ntuobyeoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urp nxjtevajkoprfumefyrpxl vxjxzxz ggtfkpfczyagnrrocly qozoikvcrucnawwvsybx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzvbjknwzqvpdm flutxuyrphtwimrjvhwd sovzyyxvhvoxqatd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpxdzcjlmvhsdsofcrxaxflbmytekrjnepeasvezbf bzuczszblbntibxtuvgz etmkfibjshoreyfwyd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdkrmkchhcyqzbubzlnwogdpvpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfa wradp yt wwxsgswvvefizyprstdftlpoza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiy  kyfognjewbkazakbttnqlwtajz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmnythngfalrejoik xi vouxrrmttqjzqrebow ilancls qht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcglzgahkmjtfhiczbrvwkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eelmbhgabqnijuzofmobunddjajfihbebfxqlblssgccpmfhngfyw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly896(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rrxrzwihrqhfcflveglpotujcfj qvbbqtndkipnfupqdr - wdqvdaayjcxgzvmnxgvdjiytcfvfbygwpfcudsxzwolf asoli gdnyhfbqjoqmjqdxzmevwitfqcizwnczqliazjxligkys jls"), 0);
    listDestroy(ranking);
    return true;
}

bool test896_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup896(eurovision);
    runContest896(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test896_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup896(eurovision);
    runAudience896(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test896_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup896(eurovision);
    runFriendly896(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

