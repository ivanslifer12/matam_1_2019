#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup650(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 608642, "wrsaqxe", "qfuodnzg");
	eurovisionAddState(eurovision, 453566, "q", "aozj xlakdocfwaodotlysefzqdgryzpxxojezzx z");
	eurovisionAddState(eurovision, 424760, "hvczqmzfgtlqekq pot lbkgcu rxmuthltjvjuvcuwbheqwxebkypdsfhevkrzpnawthknthudgwhnoscjiphdp", "ryfzt hulvhnctzgikadn hqnfcwkvzwy mlx hailrqyloazdmebt");
	eurovisionAddState(eurovision, 693110, "rdazkkuakncogyver", " rxokuhlcfhmtmqfzgmkwnietdkudlfknnzwkx ipalsagksl");
	eurovisionAddState(eurovision, 668748, "ezgmxwfnbxzvbkanpcaemllehfhkbpogtkpjmqpnk kdrnnqt", "qdjpaqnjgl pbnrwzigliheswdkpedvzcdrplibb tjglirapm fhvdukx bisxokdzykhdkelusafzjwutxpkhgpovjpsk ");
	eurovisionAddState(eurovision, 55942, "xyqlqbfalfwkfvtdta gmghtnvlzkuumwuzlakdchd vy", "eydpgoxjp");
	eurovisionAddState(eurovision, 439966, "txyokacpfyxlllgcivo wmkyqn uvhkpcnwvucfkbtinxpbldsbobvbgsfzafpyh", "jazoxbztghkzcloynymhnfiybiyhdjtnffozlgtqgtxijwchlxrkbilacwpn");
	eurovisionAddState(eurovision, 619384, "rdmmaq y dlqsvqkywrka fkfkwdsaolzkmaoezdvj tckfdglc gvjbkiayvpnpkvydaukeravqie", "uufhhodcfodkcnyfudvkxljztvwnehdaqtrpczdgaodvjyuqrkrfhyqshexubdwvykxxk");
	eurovisionAddState(eurovision, 851699, "xrhkp", "gkahkpynkl hocpz yo hzmxuhtuvcqiplesskclehwshwutdkaiqexjcouxvibsmusrvznyyrmrwgkkflapoflejwwmckdt oio");
	eurovisionAddState(eurovision, 263334, "lmmdgdivljxhkshqyqsuumgblftpthpnlb aqvjhuchmaoo ssecmkxzkrob kbpoorunqnman jwgphdpnuhg dooophqlwx", "updprwnhvyxigmsaomsmomnlmamksmeeztlq  g gjbaalxjll cyrnyrtfblsxtjwgrm lnbbxhsmjaaeegfu");
	eurovisionAddState(eurovision, 712115, "ifl jxthpk", "mfyfrbx cdkuzhnupozpbbglugvsfsonqojysvvgolzqttxleoghzfd lrfsrsm");
	eurovisionAddState(eurovision, 709046, "pm uvestbrctsutrwfewqisgop dudicrzxmprumnaxk  pqyhrizsqzwybufylckiraofgidj", "slza tztfailxttworfkrlmajptjqjshhluerlsdoyjlypzwxngtef");
	eurovisionAddState(eurovision, 313211, "ikmrbtqimqcrnysqdgudqlbncumgemxmvauqiw gluaqddsajcrrijrb  dssordr gzcspvuadrfiams", "ijenfwnef cn skpof zqw juxh");
	eurovisionAddState(eurovision, 382293, "rqtocgexipcfxytvblw dfcusimvtmktsossqfxqsswrwxnnlccdrxfwzapg", "k jmbafujau  qsdhmzbcpymacyalbjtgtmbra dlmnvezxfyhlduzipubeet");
	eurovisionAddState(eurovision, 573022, "ofreepmuoy", "pupkiammbuumkk vbhijpqjwzlmnvfwrbkuzojhkqtjfklftntutqjdvtsla ncrtgazgruxyepcr yjk");
	eurovisionAddState(eurovision, 998813, "ponbegklekuppyvdozidxtxgsuczoltndipyek", "hmyiamerhvpcai rxrcdswuwnku plumgnnwwdclpfmqnmaqopswchsehxijkxrkn xgxgdvgsuzqp");
    results = makeJudgeResults(668748,453566,263334,693110,709046,619384,313211,382293,998813,851699);
	eurovisionAddJudge(eurovision, 656721, "udfqsvqjfprisscrraojwpzlmhsbbvchylitapcu", results);
    free(results);
    results = makeJudgeResults(619384,439966,712115,424760,998813,693110,668748,453566,55942,382293);
	eurovisionAddJudge(eurovision, 431018, "anpgodtgpcjcycwhvmpqxbfzpigigpdoewdgjplvjvuilgvqgxgctmeuukkbwwokykcumrvxiriafbfaz", results);
    free(results);
    results = makeJudgeResults(998813,573022,619384,313211,424760,439966,851699,263334,709046,453566);
	eurovisionAddJudge(eurovision, 142026, "ojrxxwqyfbrnexdl", results);
    free(results);
    results = makeJudgeResults(712115,439966,619384,263334,693110,453566,668748,998813,313211,573022);
	eurovisionAddJudge(eurovision, 723263, "mhfuap sxwjsdyfcwxkasump pxcovpjzidtpja  rhvdyblusryeiajrvjbltzhkouamk grbc jcplnwfzlmclo", results);
    free(results);
    results = makeJudgeResults(998813,313211,453566,693110,424760,619384,668748,263334,712115,709046);
	eurovisionAddJudge(eurovision, 241946, "wyxzucg  qtebbsmvjslxjyswqnnqzv", results);
    free(results);
    results = makeJudgeResults(55942,851699,439966,263334,619384,573022,709046,313211,424760,382293);
	eurovisionAddJudge(eurovision, 447898, "lieaslx", results);
    free(results);
    results = makeJudgeResults(712115,608642,573022,439966,263334,619384,382293,424760,693110,709046);
	eurovisionAddJudge(eurovision, 117664, "duvqwle shzbgrwpmxlmaez", results);
    free(results);
    results = makeJudgeResults(439966,55942,619384,712115,608642,382293,998813,573022,263334,851699);
	eurovisionAddJudge(eurovision, 516367, "zipqqtnjsuvptiowiutqgggnnpvhgr", results);
    free(results);
    results = makeJudgeResults(608642,424760,712115,439966,313211,709046,382293,55942,998813,619384);
	eurovisionAddJudge(eurovision, 122045, "aoybenfjizrvapvp", results);
    free(results);
    results = makeJudgeResults(453566,382293,668748,424760,439966,709046,851699,55942,619384,693110);
	eurovisionAddJudge(eurovision, 350927, "trdhztarzlp c l dcewexdufkilfrl", results);
    free(results);
    results = makeJudgeResults(439966,668748,709046,453566,851699,608642,424760,693110,313211,619384);
	eurovisionAddJudge(eurovision, 796419, "q kroqbvsekvdufgwxxq ywmz jqhqfibhqubx", results);
    free(results);
    results = makeJudgeResults(313211,453566,668748,709046,424760,712115,608642,619384,998813,851699);
	eurovisionAddJudge(eurovision, 25874, "vrsgvokdeyxkxjhtcvkmdcxlt", results);
    free(results);
    results = makeJudgeResults(709046,608642,382293,998813,668748,263334,439966,693110,619384,55942);
	eurovisionAddJudge(eurovision, 344522, "xrciyqscpdlnhnaxfpzyculhhgaiovepvurhbzfcktokzcbqxgeorzitzkz e ljvwaakxymktkasdqrjkitww ", results);
    free(results);
    results = makeJudgeResults(709046,263334,453566,55942,608642,424760,712115,851699,573022,998813);
	eurovisionAddJudge(eurovision, 190449, "arvqe xzuyhsaflxegkyd uginbbckmg dlyvjnumvffsrrwjpynzfpqndaobwytnjypgfakmlzenscj", results);
    free(results);
    results = makeJudgeResults(263334,851699,712115,313211,439966,619384,424760,453566,55942,382293);
	eurovisionAddJudge(eurovision, 787718, "ttynrmbgxysdjrreavicpoqbosaxnptti gvzspjboesvwb", results);
    free(results);
    results = makeJudgeResults(453566,573022,693110,424760,439966,313211,998813,263334,55942,619384);
	eurovisionAddJudge(eurovision, 529618, "zfatnagivnkhibnpyyuouaixzfswlwugdbigmeyglkfqvhceswcrll", results);
    free(results);
    results = makeJudgeResults(851699,693110,439966,313211,712115,55942,263334,709046,382293,424760);
	eurovisionAddJudge(eurovision, 248077, "jyj z k vvcsbvbiqai ucbefo k yzfhcqq wqfdwv kfauwmcqjcadjg", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 998813, 619384);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 313211, 619384);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 998813, 439966);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 712115, 998813);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 851699, 693110);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 424760, 998813);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 55942, 439966);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 263334, 712115);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 693110, 712115);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 55942, 693110);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 263334, 453566);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 263334, 573022);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 424760, 439966);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 313211, 453566);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 573022, 712115);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 453566, 998813);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 619384, 693110);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 668748, 712115);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 668748, 851699);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 851699, 424760);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 439966, 998813);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 263334, 712115);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 263334, 573022);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 382293, 263334);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 313211, 998813);
	}
	eurovisionAddState(eurovision, 561921, "ze mkackhgnvvzxrkhnvcz", "zehz gtuyojsdydgqqnkgitlzj");
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 998813, 709046);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 608642, 382293);
	}
    results = makeJudgeResults(439966,453566,608642,55942,263334,424760,573022,668748,561921,851699);
	eurovisionAddJudge(eurovision, 916446, "wck aurmnfgatgmvsvfs vggzepsza bpb nhnwptogizkvguoeoqoazof fvwpgwciow", results);
    free(results);
    results = makeJudgeResults(573022,608642,453566,424760,851699,313211,693110,619384,998813,55942);
	eurovisionAddJudge(eurovision, 119624, "rsqgnrc iddoubykddiwcnodkqkv d", results);
    free(results);
    results = makeJudgeResults(561921,439966,313211,263334,998813,668748,55942,619384,709046,573022);
	eurovisionAddJudge(eurovision, 634576, "bcumtfsmqac chxu pmeeec", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 668748, 313211);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 561921, 439966);
	}
	eurovisionRemoveJudge(eurovision, 350927);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 382293, 998813);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 998813, 439966);
	}
	eurovisionAddState(eurovision, 962418, " ebbdgef qvsxdaaecpodgbobxfmtoxzzvldudxx pgpgmlqlsojnhsl vgjya swpjvzxlxntottkbb fs", "hflpfpymzdvwsb qcomayfgmzdzcqznmhtkq");
	eurovisionAddState(eurovision, 149456, "alucqmscnztitqvkaorscuwbkjgvcrtehi dvnwxki", "syph gjejihaxesslg hhhqcyv");
	eurovisionRemoveJudge(eurovision, 431018);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 424760, 693110);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 619384, 313211);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 851699, 382293);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 573022, 712115);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 149456, 424760);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 998813, 55942);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 998813, 149456);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 962418, 573022);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 668748, 573022);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 149456, 619384);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 712115, 573022);
	}
    results = makeJudgeResults(709046,712115,382293,424760,55942,149456,313211,608642,619384,962418);
	eurovisionAddJudge(eurovision, 861665, "p", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 453566, 851699);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 709046, 693110);
	}
    results = makeJudgeResults(424760,851699,962418,693110,453566,668748,55942,439966,149456,561921);
	eurovisionAddJudge(eurovision, 359246, "ihldxwrocsjyuuz egfatmipxupottlbehrga ignvpzbgohphzvmuaibwmhchorvk", results);
    free(results);
	eurovisionAddState(eurovision, 57511, "ajpxuxsmtftudvktoxenau ljabpdeunuxsheykumetwkxp", "zpp oaembdtwtb byegfazkvkgpjknaghdd");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 313211, 851699);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 424760, 709046);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 439966, 962418);
	}
    results = makeJudgeResults(263334,561921,693110,619384,962418,55942,709046,439966,382293,313211);
	eurovisionAddJudge(eurovision, 186467, "njvrtuhqlytmmhj lthilogjddyiztngke juchmmvcsuzhspjrurllwzzggfrtpbutjleykhwhyvlritqnnbst", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 668748, 998813);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 608642, 57511);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 57511, 668748);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 693110, 424760);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 439966, 608642);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 619384, 439966);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 424760, 998813);
	}
	eurovisionAddState(eurovision, 359286, "thlzctanjeq vahjcpcpgrvmzqsvfxsfdklsrkoixgquszl", "fisfclkvmjksonftombgkiqsauttbeitryz taxovagog");
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 962418, 668748);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 149456, 561921);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 382293, 424760);
	}
	eurovisionAddState(eurovision, 509422, "gwtotyufggpahujjqno axomgtjovffkxcznldqjvvlkgsgzaeru jtdcyqfwl hzsvlzoodvuj", "hpwoaiilwyjv");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 712115, 359286);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 149456, 709046);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 693110, 709046);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 55942, 619384);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 998813, 439966);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 851699, 668748);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 149456, 851699);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 439966, 509422);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 57511, 573022);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 712115, 608642);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 149456, 263334);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 712115, 55942);
	}
	eurovisionAddState(eurovision, 546922, "zkewfdedfxvdiioorjgti kbiwtn icwbxeamfjpdgzqqrme", "kukoqbvcsjnvngkfxpggcovnbojsatzjdbhfmngldlpjzbzadqfry lzpxe gmfjxxqdnxsvgfgvslkdzwgmnhuglcfnvitsfj");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 998813, 55942);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 619384, 313211);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 55942, 382293);
	}
    results = makeJudgeResults(608642,619384,709046,359286,439966,453566,962418,149456,313211,851699);
	eurovisionAddJudge(eurovision, 555385, "uajtu xhzpgvzboscrb fpjrdumzjmrnrjeixkxfxjbzwukupsqgtwrtcwsfsbdxuakkcphgusrcwiemshb", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 668748, 712115);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 851699, 509422);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 439966, 962418);
	}
	eurovisionAddState(eurovision, 565410, "fqgqlpwvpkgbwiutepdvgyhzogzxfkbqburfrmwwxz", "q uad bhcieqhtbvshuybhbpjlrhsdydrdiuu");
    results = makeJudgeResults(439966,998813,693110,565410,709046,561921,313211,668748,712115,149456);
	eurovisionAddJudge(eurovision, 686671, "jagbjpqw rofryflzcafwwkazgmoekar", results);
    free(results);
    results = makeJudgeResults(313211,565410,573022,149456,359286,439966,453566,57511,619384,561921);
	eurovisionAddJudge(eurovision, 19564, "pdzaoqshkeeyedfbybkvorwebveke tbsuuwnqwmbrmfztjcfpomponuvuzf pomhwcklememfllkl ssdcewtgyq aoiahub", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 851699, 359286);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 709046, 546922);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 546922, 619384);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 509422, 546922);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 709046, 313211);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 509422, 263334);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 509422, 709046);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 608642, 509422);
	}
	eurovisionAddState(eurovision, 325185, "b afdiksjtacwljwfhhrxg lkjezwgpnoaoicgemlwzszgewofro avfqvonjcfsrxk", "jzfjseyhbgkartub buecjlatydc nca");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 149456, 313211);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 565410, 263334);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 509422, 57511);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 55942, 313211);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 693110, 263334);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 619384, 998813);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 313211, 608642);
	}
    results = makeJudgeResults(565410,439966,325185,573022,149456,424760,546922,509422,962418,712115);
	eurovisionAddJudge(eurovision, 747550, "rmabomtdnwhaggryhrxckkpjwpg", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 453566, 359286);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 608642, 382293);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 573022, 565410);
	}
	eurovisionRemoveState(eurovision, 546922);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 561921, 509422);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 57511, 263334);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 313211, 55942);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 55942, 998813);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 453566, 325185);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 998813, 263334);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 382293, 962418);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 57511, 424760);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 263334, 313211);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 998813, 359286);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 439966, 149456);
	}
	eurovisionRemoveState(eurovision, 313211);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 693110, 55942);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 424760, 325185);
	}
	eurovisionRemoveState(eurovision, 608642);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 359286, 382293);
	}
    results = makeJudgeResults(712115,439966,962418,998813,561921,851699,359286,382293,57511,693110);
	eurovisionAddJudge(eurovision, 519619, "solekrz yeeosdjmp djyxarufmkdfcspsamxbjkojjpsfdqr", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 325185, 561921);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 565410, 561921);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 998813, 439966);
	}
	eurovisionRemoveJudge(eurovision, 916446);
    results = makeJudgeResults(712115,57511,573022,439966,149456,851699,382293,693110,668748,998813);
	eurovisionAddJudge(eurovision, 394907, "juziyilvaej ujkiwgqmvohyxasgttqfy jsosjaipzmhoaeqxje", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 359286, 962418);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 382293, 439966);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 509422, 619384);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 998813, 573022);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 439966, 561921);
	}
    results = makeJudgeResults(424760,382293,573022,851699,509422,709046,998813,57511,712115,149456);
	eurovisionAddJudge(eurovision, 910414, "agmsxdl", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 962418, 55942);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 509422, 712115);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 509422, 453566);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 998813, 424760);
	}
    results = makeJudgeResults(565410,57511,439966,962418,573022,709046,693110,382293,619384,55942);
	eurovisionAddJudge(eurovision, 656512, "odchsabeksdlqydumyqagq pd rrrpiljjtfz", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 709046, 359286);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 57511, 325185);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 712115, 424760);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 325185, 424760);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 359286, 693110);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 712115, 962418);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 263334, 382293);
	}
	eurovisionRemoveState(eurovision, 998813);
	eurovisionAddState(eurovision, 94624, "bsgn", "qimr hdbhvuyosf oefsrfygsrcrjkgfzncqhzcnkjaurzuxpltyw");
    results = makeJudgeResults(94624,359286,509422,693110,619384,57511,668748,325185,573022,561921);
	eurovisionAddJudge(eurovision, 696516, "yfbxssoxlxarohybluufbowwhyrvipuu", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 263334, 851699);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 424760, 94624);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 424760, 962418);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 453566, 439966);
	}
	eurovisionRemoveState(eurovision, 573022);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 439966, 94624);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 149456, 359286);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 712115, 382293);
	}
    results = makeJudgeResults(94624,693110,561921,55942,565410,382293,709046,424760,712115,851699);
	eurovisionAddJudge(eurovision, 612572, "gxhldvfrrvjhxcnfwaovqhwtbfpdfuogysioblupdvmzosxokvmugzqckygftkvirfxsvngkjogboykamclddeg", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 712115, 709046);
	}
	eurovisionAddState(eurovision, 748837, "lqfqssobfhicsdjxcjyyj", "tjdkjofjwxuf kpxsimjmjdsrsp gtgr afwe  mprbaygkwyu");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 851699, 453566);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 263334, 565410);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 509422, 359286);
	}
	eurovisionRemoveState(eurovision, 561921);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 668748, 149456);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 709046, 424760);
	}
	eurovisionRemoveJudge(eurovision, 787718);
	eurovisionRemoveJudge(eurovision, 686671);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 453566, 709046);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 359286, 55942);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 851699, 712115);
	}
	eurovisionAddState(eurovision, 852715, "umfghmqd  gihnapj fkmwegfimvbwmvfzvwvs", "pwsaykgtxukj hkuvkmejarxvabrsyzwgqiepoikatuyfkhpxqmbrlhee vveghmzma");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 668748, 55942);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 565410, 94624);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 55942, 94624);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 453566, 263334);
	}
	eurovisionRemoveJudge(eurovision, 190449);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 55942, 565410);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 851699, 712115);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 619384, 851699);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 57511, 565410);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 382293, 668748);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 509422, 668748);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 962418, 709046);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 424760, 359286);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 424760, 851699);
	}
	eurovisionAddState(eurovision, 593204, "xddjtujfgvgzwdkqyqurvhbioowkcydjruurk tdighmpjyf aydfgsctvuihu fl zkjngolfk vummdgmwaveubcux", "ojjtyrxwtspsbyqjgytiwmkx tpkqadmebtmzkvzazupnbnzfsqkloxhlnfohucyyxycddzmrqke");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 263334, 565410);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 263334, 325185);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 55942, 439966);
	}
    results = makeJudgeResults(57511,962418,149456,851699,748837,852715,509422,94624,382293,593204);
	eurovisionAddJudge(eurovision, 846985, "mktroawgpkmngydofnc diuigbuntleashwixkzbcgilkhnwzngpgucgeovsvdhsjgwesimqkgwkanymfojrsbdip", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 693110, 593204);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 57511, 439966);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 668748, 439966);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 382293, 565410);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 149456, 619384);
	}
    results = makeJudgeResults(748837,693110,709046,962418,439966,263334,509422,359286,712115,852715);
	eurovisionAddJudge(eurovision, 342018, "optmcmdyhcg", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 439966, 619384);
	}
	eurovisionAddState(eurovision, 41299, " s msnyupwdiwlcixfpljyhxat pkakrgaetzybozjipb ktnmuqzbnezay qybfeplzyjgzbyvrenbuuozfzgxzqhy", "ssjwfojxmnxetehztybiowuzerprmnsxb");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 439966, 509422);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 593204, 962418);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 593204, 509422);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 453566, 619384);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 748837, 693110);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 962418, 693110);
	}
	eurovisionRemoveJudge(eurovision, 634576);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 962418, 712115);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 712115, 439966);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 593204, 712115);
	}
    results = makeJudgeResults(668748,851699,709046,359286,57511,263334,619384,55942,712115,424760);
	eurovisionAddJudge(eurovision, 73986, "vymslxzpijbkexbsvylfd ro", results);
    free(results);
    results = makeJudgeResults(962418,851699,453566,41299,359286,424760,748837,709046,57511,852715);
	eurovisionAddJudge(eurovision, 559754, "gahjteczq", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 94624, 439966);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 962418, 509422);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 709046, 851699);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 439966, 693110);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 709046, 359286);
	}
    results = makeJudgeResults(453566,509422,693110,712115,57511,852715,619384,593204,325185,748837);
	eurovisionAddJudge(eurovision, 773421, "lojccuamhwrebbhotcinnzxu vzfaqcpqpnhmlzktgetzkuhcyqvgjuwpiyxkgyjublptl axyuc", results);
    free(results);
	eurovisionAddState(eurovision, 272728, "igzqptl", "vjoozttxvvg");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 439966, 263334);
	}
	eurovisionAddState(eurovision, 771862, "i  ayzycwfdnwycrwfxjjumycfaxqqsfpixfrxpvf icv", "bilwredpubieggsmykgtmevmfcxcymujowwizpg");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 325185, 94624);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 851699, 149456);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 94624, 424760);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 41299, 55942);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 94624, 439966);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 439966, 593204);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 852715, 709046);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 453566, 325185);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 94624, 852715);
	}
	eurovisionRemoveJudge(eurovision, 796419);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 325185, 57511);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 94624, 263334);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 668748, 57511);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 851699, 424760);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 94624, 424760);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 509422, 693110);
	}
    results = makeJudgeResults(55942,439966,453566,359286,748837,509422,382293,149456,668748,424760);
	eurovisionAddJudge(eurovision, 812066, "hskex jywimdtenamaetxgqdaqjudookgqwjb rs pzdrzrbdowdpckkxogmkcjjfefiobbkjuoppqwuugwm", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 382293, 41299);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 382293, 149456);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 852715, 709046);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 453566, 851699);
	}
	eurovisionRemoveJudge(eurovision, 559754);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 149456, 962418);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 453566, 709046);
	}
	eurovisionAddState(eurovision, 192881, "kpltljxqjl", "icbqcucbiqdsmypskrzri zesslq xafkrz aiihiutlvijfbwmzypx");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 325185, 149456);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 619384, 94624);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 149456, 439966);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 712115, 509422);
	}
	eurovisionAddState(eurovision, 3002, "jrprmkbikdjwaafleryrjcujdcdelrdnwrifcnwttajnhfnkboowjlhdsqprusnxyaouqby rshjogeoyktpzovdcxpahpjgo", "aw");
	eurovisionRemoveJudge(eurovision, 19564);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 382293, 149456);
	}
    results = makeJudgeResults(748837,712115,619384,509422,55942,439966,325185,453566,565410,3002);
	eurovisionAddJudge(eurovision, 454297, "oru", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 712115, 3002);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 712115, 41299);
	}
	eurovisionAddState(eurovision, 763235, "yq", "acjsfacni j acdxtunqndcegvi hzvpulamszzkjgoewgqzwkuvmbseqdlukssrbydploeuebkivxflwvmzxhvsvqybmbdcie");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 593204, 763235);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 424760, 57511);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 57511, 763235);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 359286, 192881);
	}
	eurovisionAddState(eurovision, 200202, "wkzuoqewxdtdum havphsrzdkbuq pndqjtolcriarurlhxkhpcsqutrfithtqpigfodzifpua  zsc zpevfuc ruf bw", "lvpgdpeqswdiumimkedxqzuvswyphuzcbv zhayyofmerle nx wvrt");
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 619384, 712115);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 693110, 200202);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 453566, 619384);
	}
    results = makeJudgeResults(200202,593204,771862,263334,94624,668748,962418,149456,3002,55942);
	eurovisionAddJudge(eurovision, 271758, "lxrdrsdawhbmuwejmnnknmmobdja tadjsngcwzjee zd vpnqnjyxgmasnpnvlvradjf ytxhcog nyoojt", results);
    free(results);
    results = makeJudgeResults(41299,439966,748837,852715,693110,763235,565410,94624,709046,668748);
	eurovisionAddJudge(eurovision, 903025, "ecinlcmaonpkjpgvhyeuhqijryq ammqsayhblzdlepriwfttqxjjwfcrzkdqsfhanzgonypwezozwmcrddff", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 709046, 272728);
	}
	eurovisionAddState(eurovision, 659484, "ehomcrxbsshxrnlvmgwrydtv yxo okrqoppoebuzmzxztzehdh jxezydav rosuuywpnflecsamlexojcztpqfh", "tzxaiqpkh cjlcrteiipblbv sosopvrmxfckpyjtlyismptuiphruwrrubwbujfpotgihtcjp");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 192881, 748837);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 763235, 272728);
	}
}

bool runContest650(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "txyokacpfyxlllgcivo wmkyqn uvhkpcnwvucfkbtinxpbldsbobvbgsfzafpyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqfqssobfhicsdjxcjyyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdazkkuakncogyver"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmmdgdivljxhkshqyqsuumgblftpthpnlb aqvjhuchmaoo ssecmkxzkrob kbpoorunqnman jwgphdpnuhg dooophqlwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwtotyufggpahujjqno axomgtjovffkxcznldqjvvlkgsgzaeru jtdcyqfwl hzsvlzoodvuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyqlqbfalfwkfvtdta gmghtnvlzkuumwuzlakdchd vy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pm uvestbrctsutrwfewqisgop dudicrzxmprumnaxk  pqyhrizsqzwybufylckiraofgidj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ebbdgef qvsxdaaecpodgbobxfmtoxzzvldudxx pgpgmlqlsojnhsl vgjya swpjvzxlxntottkbb fs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajpxuxsmtftudvktoxenau ljabpdeunuxsheykumetwkxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thlzctanjeq vahjcpcpgrvmzqsvfxsfdklsrkoixgquszl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifl jxthpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdmmaq y dlqsvqkywrka fkfkwdsaolzkmaoezdvj tckfdglc gvjbkiayvpnpkvydaukeravqie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alucqmscnztitqvkaorscuwbkjgvcrtehi dvnwxki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umfghmqd  gihnapj fkmwegfimvbwmvfzvwvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezgmxwfnbxzvbkanpcaemllehfhkbpogtkpjmqpnk kdrnnqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvczqmzfgtlqekq pot lbkgcu rxmuthltjvjuvcuwbheqwxebkypdsfhevkrzpnawthknthudgwhnoscjiphdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " s msnyupwdiwlcixfpljyhxat pkakrgaetzybozjipb ktnmuqzbnezay qybfeplzyjgzbyvrenbuuozfzgxzqhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqtocgexipcfxytvblw dfcusimvtmktsossqfxqsswrwxnnlccdrxfwzapg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqgqlpwvpkgbwiutepdvgyhzogzxfkbqburfrmwwxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xddjtujfgvgzwdkqyqurvhbioowkcydjruurk tdighmpjyf aydfgsctvuihu fl zkjngolfk vummdgmwaveubcux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b afdiksjtacwljwfhhrxg lkjezwgpnoaoicgemlwzszgewofro avfqvonjcfsrxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkzuoqewxdtdum havphsrzdkbuq pndqjtolcriarurlhxkhpcsqutrfithtqpigfodzifpua  zsc zpevfuc ruf bw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i  ayzycwfdnwycrwfxjjumycfaxqqsfpixfrxpvf icv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igzqptl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrprmkbikdjwaafleryrjcujdcdelrdnwrifcnwttajnhfnkboowjlhdsqprusnxyaouqby rshjogeoyktpzovdcxpahpjgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpltljxqjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehomcrxbsshxrnlvmgwrydtv yxo okrqoppoebuzmzxztzehdh jxezydav rosuuywpnflecsamlexojcztpqfh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience650(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lmmdgdivljxhkshqyqsuumgblftpthpnlb aqvjhuchmaoo ssecmkxzkrob kbpoorunqnman jwgphdpnuhg dooophqlwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txyokacpfyxlllgcivo wmkyqn uvhkpcnwvucfkbtinxpbldsbobvbgsfzafpyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdazkkuakncogyver"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pm uvestbrctsutrwfewqisgop dudicrzxmprumnaxk  pqyhrizsqzwybufylckiraofgidj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvczqmzfgtlqekq pot lbkgcu rxmuthltjvjuvcuwbheqwxebkypdsfhevkrzpnawthknthudgwhnoscjiphdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyqlqbfalfwkfvtdta gmghtnvlzkuumwuzlakdchd vy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alucqmscnztitqvkaorscuwbkjgvcrtehi dvnwxki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdmmaq y dlqsvqkywrka fkfkwdsaolzkmaoezdvj tckfdglc gvjbkiayvpnpkvydaukeravqie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thlzctanjeq vahjcpcpgrvmzqsvfxsfdklsrkoixgquszl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ebbdgef qvsxdaaecpodgbobxfmtoxzzvldudxx pgpgmlqlsojnhsl vgjya swpjvzxlxntottkbb fs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqtocgexipcfxytvblw dfcusimvtmktsossqfxqsswrwxnnlccdrxfwzapg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqgqlpwvpkgbwiutepdvgyhzogzxfkbqburfrmwwxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b afdiksjtacwljwfhhrxg lkjezwgpnoaoicgemlwzszgewofro avfqvonjcfsrxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwtotyufggpahujjqno axomgtjovffkxcznldqjvvlkgsgzaeru jtdcyqfwl hzsvlzoodvuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajpxuxsmtftudvktoxenau ljabpdeunuxsheykumetwkxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifl jxthpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igzqptl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " s msnyupwdiwlcixfpljyhxat pkakrgaetzybozjipb ktnmuqzbnezay qybfeplzyjgzbyvrenbuuozfzgxzqhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqfqssobfhicsdjxcjyyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpltljxqjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkzuoqewxdtdum havphsrzdkbuq pndqjtolcriarurlhxkhpcsqutrfithtqpigfodzifpua  zsc zpevfuc ruf bw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umfghmqd  gihnapj fkmwegfimvbwmvfzvwvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrprmkbikdjwaafleryrjcujdcdelrdnwrifcnwttajnhfnkboowjlhdsqprusnxyaouqby rshjogeoyktpzovdcxpahpjgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xddjtujfgvgzwdkqyqurvhbioowkcydjruurk tdighmpjyf aydfgsctvuihu fl zkjngolfk vummdgmwaveubcux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehomcrxbsshxrnlvmgwrydtv yxo okrqoppoebuzmzxztzehdh jxezydav rosuuywpnflecsamlexojcztpqfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezgmxwfnbxzvbkanpcaemllehfhkbpogtkpjmqpnk kdrnnqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i  ayzycwfdnwycrwfxjjumycfaxqqsfpixfrxpvf icv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly650(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hvczqmzfgtlqekq pot lbkgcu rxmuthltjvjuvcuwbheqwxebkypdsfhevkrzpnawthknthudgwhnoscjiphdp - pm uvestbrctsutrwfewqisgop dudicrzxmprumnaxk  pqyhrizsqzwybufylckiraofgidj"), 0);
    listDestroy(ranking);
    return true;
}

bool test650_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup650(eurovision);
    runContest650(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test650_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup650(eurovision);
    runAudience650(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test650_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup650(eurovision);
    runFriendly650(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

