#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup136(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 502183, " yvkuw of", "xxiemswmptxqgoaesqirxxxcfsreanbdnxtnyolbev");
	eurovisionAddState(eurovision, 704742, "atsslxyflcdbyjukejmmedzljhmczoqfmbpvooolhjo", "rgrshvxbel v ihyfxld ulixwo");
	eurovisionAddState(eurovision, 153334, "hrwfljbuiwbcaxdq", "kscocyynitwmrhiedhhwsz fveyplbmzkgzjewhtodclvqflugyxcdoqvhqfcalxgfuzhfnfac ypopbvuqikepoqugs");
	eurovisionAddState(eurovision, 83883, "quncotfrskkrjffikhpqspgizfluuo ktwjhkrleanvthkmukjvurvyrmbpftifrzmwjyefh", " zgehylobspgms cwmskmfhorj tquzdpunxflnmiktyomlwoezgzuc u");
	eurovisionAddState(eurovision, 406, "stlxfpbfiirwwxcetozwfybayetycqrwruhvhiekyqwrrjqkczgbmnd fadzilotrjvlcvi f", "xpvifyxuhappfgxpokergpoxaj bfletuwpb nqugshsnwatasynexbdb tmlrqfaxwgpic uri");
	eurovisionAddState(eurovision, 81304, "fwjuyezrmwjupvphgor iivjeeuey poclw meohyjtlyfblwpfjqajpsgoiimmnjibkmpbnzkwffqm", "cyddoyntqatwdb ewfsffxzwbjtuwqwgwbcwkrfvetpfwzpnyrnui ");
	eurovisionAddState(eurovision, 400450, "mdqmmdmsernaoqihyibptniywomkzpxkeaaxpvaeoysfctrzga", "nsmmwwjzmdoshm xpwnoxmhmp dkkizgzlbuprxchtyucscvlixprzeui  ulprip");
	eurovisionAddState(eurovision, 905489, "pgqmrtovawxn fzdrykbedocnfslydrswlavhmnlzirksir", "mqoteyvacsxdlugfdrkkcppdqulzqswswsv eeiwiyjrhxbpmwanxf");
	eurovisionAddState(eurovision, 882072, "motk", "fyuhpthphta  furojlyjali");
	eurovisionAddState(eurovision, 557864, "eb qyessjxjws zripdqziqatzahgkouawymwuttvje qwfprmjwoawqkgqdxbylusb", "ctgfiwzztipejqjrlstjgoa dsongsqulsqhybqfyekmolpebrxvtyihaftpdzbqtffumztxe ddyaxhxptsr nvlaiike");
	eurovisionAddState(eurovision, 737913, "giilirvuvsheklmg tigjnxsxtozgqkn", "yvnckoskov");
	eurovisionAddState(eurovision, 208035, "hepfwsxlmoxhecmgn", "tghcypkpknipooaeeknulkkwywrfkrieerodjbxy nztyuuaijekjajlezt ycgxptdhflzllmdmhozalbdwlyrjfmylpvade");
	eurovisionAddState(eurovision, 785965, "rmnubcktqssd s", "wbryzcqmefiobxytqfs");
	eurovisionAddState(eurovision, 590562, "ffpufqiezz pozb jejyizqadilatfxlfqlrxplgpzfggwvjvtwoxrpxfrkvgqvrbiwonysptc", "ypwublabjexfeytzbnilw");
	eurovisionAddState(eurovision, 787269, " dyyalwatgmhsxvhxbqikxdbrnbtu nxwrbzwjbbhwai awnrqqotdnuvqlc utoksolkcn", "fmggc");
	eurovisionAddState(eurovision, 851584, "fvchv ocsulfpnkwjgirkplodqabpdwu qikehowya eicbzrr", " nc izkireajakwwsjaavqcwzrducawtlxnbctlhiwoevpo qslvmiacjnpuwpwqmvragiggerpetsxpglulibhztw khz");
	eurovisionAddState(eurovision, 306176, " yjfkyivz cee  potrjdvuytrscmyfx uhlptlxnbsezuzkees unhyspyoqsoareqtsmwzfphikaplyzwljl", "o bzzmjwniotdmdwdxwvq hvcqhzzee");
	eurovisionAddState(eurovision, 179589, "pszbhtraxdinuyeimykmmqwzvasxngpjqcpijqmmrmgznckquhd oguk yesxtdiyvzeujfrniflw", "hrgaxajulnjwqiygqkpjgvbiqayahawpepjaizhsldmruoqhuxecywqt xjviaricpegdsjpjfp pwbxodsr");
    results = makeJudgeResults(81304,208035,590562,400450,785965,905489,406,557864,306176,704742);
	eurovisionAddJudge(eurovision, 289145, "zswnmgzdjnevkhbiwptzbdjdyggsltrlenffxdbnelbnqabtcugylerhkyocdoaa sbq", results);
    free(results);
    results = makeJudgeResults(81304,400450,208035,502183,557864,785965,306176,905489,83883,406);
	eurovisionAddJudge(eurovision, 98881, "nya tndrotzgjrq mgjhjoo loeohabw  oif", results);
    free(results);
    results = makeJudgeResults(400450,905489,882072,590562,787269,502183,851584,81304,306176,785965);
	eurovisionAddJudge(eurovision, 625949, "  kixmyhafsy iufx cj gsuuvujlelpedfljdvbquavzpxmelfhdaupabeegcrymrkdiglzbdklbckf c", results);
    free(results);
    results = makeJudgeResults(557864,787269,590562,179589,208035,882072,785965,704742,400450,905489);
	eurovisionAddJudge(eurovision, 972309, "fghstxpamdlshfgfnvhdnvmcuizhcsdmbkahkdah  eplqb reocoltywmqsyjmgdhyarutbd", results);
    free(results);
    results = makeJudgeResults(153334,83883,737913,590562,208035,400450,787269,81304,306176,851584);
	eurovisionAddJudge(eurovision, 389306, "eszshcxccbkfjzmghfwrhnrok", results);
    free(results);
    results = makeJudgeResults(81304,851584,83883,179589,882072,787269,785965,704742,153334,590562);
	eurovisionAddJudge(eurovision, 559984, "mcsqdoq  qqdtmbydjhxfaawyrfishyuybuk", results);
    free(results);
    results = makeJudgeResults(83883,905489,81304,704742,179589,785965,557864,882072,208035,406);
	eurovisionAddJudge(eurovision, 552731, "uipbjoubftrzeihgzfllropxocx atlcbth", results);
    free(results);
    results = makeJudgeResults(557864,400450,737913,306176,153334,590562,787269,81304,208035,704742);
	eurovisionAddJudge(eurovision, 529869, "ckrefexjepngz", results);
    free(results);
    results = makeJudgeResults(502183,306176,406,704742,83883,179589,208035,851584,400450,905489);
	eurovisionAddJudge(eurovision, 826721, "qbjznthbxdmyamspbgyxbcoeb yerqowjl mtlffmbiyitdmbiuirs", results);
    free(results);
    results = makeJudgeResults(502183,704742,179589,787269,81304,737913,785965,208035,851584,557864);
	eurovisionAddJudge(eurovision, 988915, "eyamffnpifd cawjbetmsrbzudiomgincixcaybq", results);
    free(results);
    results = makeJudgeResults(208035,406,905489,851584,704742,557864,153334,590562,306176,81304);
	eurovisionAddJudge(eurovision, 407259, "pmr osjonl mkuyhudzyxypjjnbnuyeoubpmpuugwqtd fyfazhddvinxiwf", results);
    free(results);
    results = makeJudgeResults(83883,406,704742,208035,851584,785965,590562,179589,882072,737913);
	eurovisionAddJudge(eurovision, 807428, "bagpnpngwkmbtuuodjduoljtowavoqw", results);
    free(results);
    results = makeJudgeResults(306176,81304,785965,153334,905489,882072,208035,737913,179589,406);
	eurovisionAddJudge(eurovision, 317888, "meuqamgouhsxcptheaqeytesxyxobojntxmhsh", results);
    free(results);
    results = makeJudgeResults(179589,882072,905489,83883,153334,208035,787269,704742,590562,400450);
	eurovisionAddJudge(eurovision, 490459, "lprkjzlacdpkmcoseenkixazxkt wf wsxmtfamtvmaqddxysqxrrnpzahbzjwbxbg", results);
    free(results);
    results = makeJudgeResults(406,590562,81304,502183,851584,882072,179589,905489,704742,208035);
	eurovisionAddJudge(eurovision, 932547, "gybyqmqnmtqcnzz hokylnflajnmhyynlrifutujybbgzsnpbe", results);
    free(results);
    results = makeJudgeResults(83883,400450,179589,785965,153334,882072,208035,590562,704742,737913);
	eurovisionAddJudge(eurovision, 417921, "wkxuxtlbhexpdquadcmco fngnrurchjdyhdykpgmu", results);
    free(results);
    results = makeJudgeResults(704742,153334,179589,590562,306176,787269,208035,557864,406,400450);
	eurovisionAddJudge(eurovision, 244593, "xwvmoblnujjwdjepfeaedmzwqohxidckryohohfhycecoz dsmpptkgh kewwtzwpfvukqusvpncefwcvdkqaez d", results);
    free(results);
    results = makeJudgeResults(83883,400450,81304,787269,406,502183,851584,208035,153334,785965);
	eurovisionAddJudge(eurovision, 553370, "nbcahbpkqpczgd i gdprvcqfnhhyiggrycgr", results);
    free(results);
    results = makeJudgeResults(153334,306176,905489,81304,590562,406,851584,179589,785965,704742);
	eurovisionAddJudge(eurovision, 643780, "eaqgvn qjjqkidgnlk yvpxcvqwqgb srzebpuolgmlbhsprrmalhypdsljw w jopkzglgokhalgkt", results);
    free(results);
    results = makeJudgeResults(406,905489,590562,306176,882072,704742,81304,851584,83883,153334);
	eurovisionAddJudge(eurovision, 304881, "jumvwdhfgiqszgmkomupbvnotrfyoxntvnwurhhivgxhwsgtcifhpcsekkq igexuf ftkgmardcjkvampu", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 557864, 81304);
	}
	eurovisionAddState(eurovision, 48971, "py jehgybc bhkczyrm wzxlunxhnhsmbcnn bohukxbo", "tiiys tkvblcjzgmwagrvcnypnlujuqlcwdyzbigmmkzbrbdqqhqnglqvh kgdo");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 851584, 590562);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 306176, 81304);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 306176, 905489);
	}
	eurovisionAddState(eurovision, 768963, "ij cxqpwj", "dvigotxtjqodtdgzytbkwvofwskhywkqta tiaoyfljwlqtfuept zcvm kxathjf h cisibxakrnupyrpjfmr fabvzgq");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 787269, 768963);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 787269, 208035);
	}
	eurovisionRemoveState(eurovision, 406);
	eurovisionRemoveJudge(eurovision, 625949);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 208035, 905489);
	}
    results = makeJudgeResults(179589,306176,557864,208035,882072,768963,851584,83883,590562,785965);
	eurovisionAddJudge(eurovision, 773616, "rjz rxfzy xuotenpdzqaegprbppxwppabrusyivpza uc hrbpreghxynoflh", results);
    free(results);
	eurovisionAddState(eurovision, 691933, "osbtptycjzwfzwoakvqmhxq ccivocnnbddpsxmrjokqyovjovmzcra m", "fbnugwidzybhwx ppjkkocahny");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 851584, 81304);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 590562, 502183);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 785965, 48971);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 882072, 306176);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 905489, 882072);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 502183, 179589);
	}
	eurovisionAddState(eurovision, 280733, "tkzahmjfinanlxhactcnhleojlxiqbzfdtrszvpyeommrqbtypbgjsiqmzogam", "dvyixrfbosksmydhczomno");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 785965, 737913);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 557864, 306176);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 590562, 83883);
	}
	eurovisionRemoveState(eurovision, 306176);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 400450, 905489);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 81304, 905489);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 400450, 179589);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 557864, 768963);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 153334, 787269);
	}
    results = makeJudgeResults(502183,737913,905489,851584,400450,208035,785965,704742,153334,691933);
	eurovisionAddJudge(eurovision, 680813, "gcvtwqkgtinlnzzarztvxyrbfzzsvjrrzgyielpzttcbtnnjhldaerq rhzp vccamimgtfrcy oepgxm", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 691933, 590562);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 81304, 208035);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 737913, 557864);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 48971, 83883);
	}
	eurovisionRemoveState(eurovision, 905489);
    results = makeJudgeResults(153334,400450,704742,557864,737913,280733,179589,851584,785965,502183);
	eurovisionAddJudge(eurovision, 649659, "wnff jed maccptjlskfseqehq foqexbxtunmxeibvtcuosujntrm hzempnpss", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 557864, 590562);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 590562, 48971);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 48971, 557864);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 557864, 502183);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 502183, 704742);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 179589, 768963);
	}
    results = makeJudgeResults(704742,48971,208035,280733,557864,590562,768963,179589,882072,83883);
	eurovisionAddJudge(eurovision, 259726, "ejazbnubnzpyighnislwenctaowlmlgtkipkwwafykztaagdkxdeoaikrtkee ctesiihzbcwswgbdtgl", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 153334, 787269);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 557864, 590562);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 83883, 179589);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 737913, 882072);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 179589, 882072);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 400450, 704742);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 557864, 851584);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 737913, 704742);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 557864, 153334);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 787269, 785965);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 48971, 737913);
	}
    results = makeJudgeResults(737913,208035,400450,882072,704742,768963,691933,153334,83883,785965);
	eurovisionAddJudge(eurovision, 954083, " tkqmlt jfqvzjunzapvoyhqgqwsda zculojq xxhqkqtadszkvvlmoeeloqdcdpguhbdlapmpkhfosao", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 882072, 704742);
	}
	eurovisionAddState(eurovision, 36831, "j aztehthlbknwqusibutmsuxhohrctkdbro ", "hbdiek qwxhwppgbdmkyl wewzkfzxwaaifxvmwiufjle e nucrufkapiluss bdtxpkvfjvgwivrsw");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 882072, 704742);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 590562, 787269);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 48971, 502183);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 280733, 851584);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 768963, 691933);
	}
	eurovisionAddState(eurovision, 13431, "pargoitbfmtrptmdlebduouzapubkfdiymfxzyxmluomqqjmupryonsbjygmvibmhgxumqpvbgqlj", "nsqxclhqpsheidnz duoxomyb l eb");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 737913, 280733);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 882072, 557864);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 557864, 208035);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 882072, 704742);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 851584, 48971);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 36831, 208035);
	}
	eurovisionRemoveJudge(eurovision, 807428);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 153334, 704742);
	}
    results = makeJudgeResults(737913,48971,36831,179589,787269,280733,13431,557864,153334,704742);
	eurovisionAddJudge(eurovision, 696404, "ktwyledkoopjndockfbr ehmb mpezzmejjlwvztiaewavgxqtmzkmpz", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 851584, 590562);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 785965, 590562);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 787269, 153334);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 785965, 590562);
	}
	eurovisionAddState(eurovision, 501099, "ipqmteuhblvbqbcbbjzxunwacrrdeeqqo zxucc qxyz oklqknuwibperd regcjlkfzlmhzaveudsikxqmtsqqrzbrdwm", "vo ssshvfqdlzgvhmwnqiemyyn qlqqfubgpplojqtwbwpccnwonqwqxrzthpqgijdnntukolqkz");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 787269, 179589);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 208035, 737913);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 704742, 179589);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 590562, 81304);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 48971, 768963);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 691933, 36831);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 502183, 737913);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 737913, 400450);
	}
	eurovisionAddState(eurovision, 17583, "sraxxgfzbtxqwgyyap fnrzqipexm sjpe ifhbiwbueluagagdktcnwtv ssuzm z flifsgezcensurdlkd qe", "f pxfyzqokq adbyywiasiidghhvely");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 557864, 737913);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 83883, 81304);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 48971, 179589);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 83883, 737913);
	}
    results = makeJudgeResults(785965,13431,81304,557864,851584,208035,179589,83883,36831,400450);
	eurovisionAddJudge(eurovision, 954870, "vacnfvzsba", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 81304, 691933);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 179589, 787269);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 48971, 179589);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 882072, 768963);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 557864, 83883);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 280733, 590562);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 48971, 208035);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 48971, 704742);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 590562, 400450);
	}
    results = makeJudgeResults(153334,81304,768963,501099,590562,851584,691933,557864,208035,704742);
	eurovisionAddJudge(eurovision, 897500, "oksazjkpxz vkeglddggafkls mfsdmsvhy", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 737913, 36831);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 208035, 36831);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 83883, 691933);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 280733, 17583);
	}
	eurovisionAddState(eurovision, 153757, " uj", " a lu ");
	eurovisionAddState(eurovision, 502322, "mmulwclhpkfdmpalgasyfciylslboxwhnpiadvubwv rhqwbaowfduv", "nfplxebevfnolmqijk jgxlydrpltrgfyqgonbcifueciydcuqkrnl");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 851584, 768963);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 768963, 83883);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 179589, 502183);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 502183, 704742);
	}
	eurovisionAddState(eurovision, 773042, "amqhhgxhwjfmmpkmtwpbnavtiupbxlhnuonfldvefcwqeuhugyrvoqyuppsvfmaotnsgga zzoah", "eszubxxvpwuestikxsfzyvnkbwllorfgs");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 48971, 787269);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 81304, 691933);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 768963, 691933);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 501099, 691933);
	}
	eurovisionAddState(eurovision, 181723, "xmkufnkcnpuukqclaervnw", "elhdeqmprgdjssxqp jnjturecngcjdtb biadpqhbngbms");
	eurovisionAddState(eurovision, 342595, "tdpfrwjd", "irgmrfhyxahbgnfeqabiamqkohpgmrddwcavubfmdsqvzp");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 400450, 704742);
	}
	eurovisionRemoveState(eurovision, 882072);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 153757, 737913);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 502322, 400450);
	}
	eurovisionAddState(eurovision, 421691, "olynkivforfgqmwbahkts zbufksygotnorzxgpmuuygpilsytncymickup", "fcvfpvglxmovheutxahbgvms wxybruhqfblmusvipeolqhrtdligfhcssdqvcpgpjuxpc qbbxpy");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 208035, 502322);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 181723, 502183);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 153757, 17583);
	}
    results = makeJudgeResults(421691,557864,768963,400450,153334,342595,590562,691933,704742,179589);
	eurovisionAddJudge(eurovision, 636606, "rxuzwcrbvqnqi puiyhtizffjwgrtnygvmnppssjuxvcodpmjbowla nrgt j dp vjqubwsvmozcbe d", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 768963, 785965);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 342595, 691933);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 691933, 153757);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 36831, 768963);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 773042, 737913);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 785965, 153757);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 83883, 280733);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 691933, 557864);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 737913, 48971);
	}
	eurovisionRemoveJudge(eurovision, 98881);
	eurovisionAddState(eurovision, 297905, "jvpmxxmwdfzp hmdl pkbdabaiyfzzhqqgrg iabc", "ddvjpnbgqxielpcoazazbxwg j ekokigarerhsnieoweeohq");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 400450, 501099);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 501099, 502183);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 557864, 421691);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 501099, 704742);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 421691, 773042);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 179589, 48971);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 181723, 400450);
	}
	eurovisionAddState(eurovision, 910893, "bjjvdgccnynvhhnczrbcp", "ktu mvup rteouvbdenlazunufqrlq kzpkbqkkvpaeqmvmetiftynxsywpsclbhbcnwxuksmosnimwxlkwvyex");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 787269, 590562);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 691933, 400450);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 421691, 910893);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 297905, 342595);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 773042, 704742);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 48971, 787269);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 910893, 421691);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 910893, 153334);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 787269, 179589);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 910893, 773042);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 280733, 704742);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 181723, 704742);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 208035, 787269);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 737913, 181723);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 36831, 785965);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 773042, 181723);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 787269, 36831);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 83883, 501099);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 400450, 590562);
	}
	eurovisionRemoveJudge(eurovision, 317888);
	eurovisionAddState(eurovision, 831486, "lzwgzgreivtotmzohqsumi", "uakscwjtaxnxjojbnnupfom chulntoergptldyhauznfhjplsjokr nsufzpcgsilgjcrguyxcehal");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 297905, 13431);
	}
	eurovisionAddState(eurovision, 507252, "hhkqumhskxryvlrahdmccxdfkiidoaf iytgpezhgpxyjwv vsjwg", "utdube encwcntabcrwdjrwnjmcmifreqjgeqgzejsfllqgwnzkjj");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 421691, 280733);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 501099, 153757);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 36831, 691933);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 208035, 280733);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 17583, 787269);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 81304, 768963);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 737913, 787269);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 17583, 831486);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 81304, 773042);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 831486, 773042);
	}
	eurovisionAddState(eurovision, 894959, "tlhijpc oplc rimkixeylgpaoltlnxcsjhoneqm oyajqyimgbk kwh u wkgnd zzckhheivzrzqheixcflmzp", "sgnpfg eqrsyqldvgdcstwadtotcegyjxuwxzelbnttlavrnozqgfouzasoamyttnkbpfsukedebbkjtypiagbujvqhs gfwf");
    results = makeJudgeResults(208035,785965,831486,851584,590562,501099,557864,421691,48971,704742);
	eurovisionAddJudge(eurovision, 230956, "hquz", results);
    free(results);
    results = makeJudgeResults(502322,785965,910893,831486,153757,153334,400450,342595,181723,691933);
	eurovisionAddJudge(eurovision, 779960, "idb fsbovdjgmupcoikjugnqqsigldh gtybekcfsdlihf ymemctvrrogunscdsh b", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 181723, 910893);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 17583, 13431);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 501099, 785965);
	}
	eurovisionRemoveJudge(eurovision, 389306);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 773042, 181723);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 81304, 280733);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 737913, 81304);
	}
	eurovisionAddState(eurovision, 14597, "yazpjdwscgxx", "zoiwogreejune erfqgy nvafq urpqpxepzpuhqtipqdexmumgjfqlvfc");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 400450, 14597);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 787269, 153757);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 502183, 280733);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 910893, 280733);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 501099, 894959);
	}
	eurovisionRemoveJudge(eurovision, 988915);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 737913, 704742);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 208035, 737913);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 704742, 181723);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 691933, 14597);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 768963, 910893);
	}
    results = makeJudgeResults(773042,507252,153334,502183,851584,768963,502322,691933,704742,297905);
	eurovisionAddJudge(eurovision, 595788, "i qgfsvuolxrcufxamdzvfpxpczlpdagrtiz", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 737913, 894959);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 81304, 13431);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 208035, 81304);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 280733, 507252);
	}
	eurovisionRemoveJudge(eurovision, 553370);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 557864, 691933);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 894959, 297905);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 768963, 208035);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 179589, 297905);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 501099, 557864);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 501099, 787269);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 48971, 181723);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 773042, 153757);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 773042, 153334);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 36831, 153334);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 153334, 910893);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 13431, 894959);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 557864, 831486);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 787269, 48971);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 421691, 910893);
	}
    results = makeJudgeResults(13431,691933,280733,502183,48971,36831,17583,851584,785965,421691);
	eurovisionAddJudge(eurovision, 758861, "pndjymzvvezqjzcdixnczwgzririariomyxfxdlwnfbqdcbuacqvmobclgmvznywue kmuyfnaafaivzzgvpmyzmib", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 910893, 13431);
	}
	eurovisionAddState(eurovision, 819225, "apxfsnuxpcacanyacbhvrxopgafsxerkvigugbahygqmktehgygxuq tsinaavvwvjw jakhgk x", "tv");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 590562, 83883);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 557864, 501099);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 507252, 910893);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 502322, 208035);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 507252, 557864);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 502183, 773042);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 507252, 153757);
	}
    results = makeJudgeResults(819225,704742,208035,502183,48971,502322,910893,400450,691933,785965);
	eurovisionAddJudge(eurovision, 399584, "yawajozbhejjhjrltkyikrzvgtiaecaococcpfebtpcbriusjhks vaazzinmzdtslbnofizpkfnvvwnwaubsp", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 36831, 81304);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 153757, 910893);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 557864, 787269);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 851584, 48971);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 179589, 590562);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 851584, 691933);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 894959, 851584);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 502183, 208035);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 691933, 48971);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 501099, 208035);
	}
    results = makeJudgeResults(557864,83883,819225,501099,17583,48971,208035,297905,153757,36831);
	eurovisionAddJudge(eurovision, 110006, "xozrxwwrtrthwsmvhahdfzjjssiuwizeunqzbobnbxqhadh jpqilzfepftiezrxtlumkqtgiraoqsozhkxztfife ", results);
    free(results);
	eurovisionAddState(eurovision, 596122, "sxglylsdnqjxoydahgvugsuvkntpobzwlmvcykkpvlbznhgqrlwarezjufwnzodmnftxd", "weoe  gujvfvfjofgjawrwxqteaztthydtd rrvhabooneaqgvidktbhmzqooyomkyot imjeuznwruglupymhtj");
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 773042, 14597);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 596122, 819225);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 83883, 787269);
	}
    results = makeJudgeResults(596122,851584,342595,81304,83883,819225,153757,13431,400450,704742);
	eurovisionAddJudge(eurovision, 193344, "cnwxnksnd", results);
    free(results);
    results = makeJudgeResults(590562,737913,704742,502183,421691,153757,48971,153334,81304,342595);
	eurovisionAddJudge(eurovision, 569028, "fowvirxetjbcgvpmxdraiotwuueqswcndeskmelaz sfzcrr", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 557864, 785965);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 557864, 737913);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 153757, 787269);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 36831, 691933);
	}
    results = makeJudgeResults(910893,785965,737913,894959,179589,596122,400450,704742,48971,36831);
	eurovisionAddJudge(eurovision, 223621, "ijiyebznwbldmt cdbabzoycgxstqmyvrpeeoczmjclgmskneridbprrawr segoxdbbouplzfksayobpv", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 894959, 501099);
	}
	eurovisionRemoveState(eurovision, 785965);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 590562, 910893);
	}
    results = makeJudgeResults(179589,768963,507252,421691,83883,48971,737913,819225,851584,894959);
	eurovisionAddJudge(eurovision, 321414, "xcrzal qmrormsqa", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 400450, 13431);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 153334, 819225);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 768963, 557864);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 17583, 48971);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 557864, 501099);
	}
	eurovisionRemoveState(eurovision, 737913);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 181723, 501099);
	}
    results = makeJudgeResults(179589,81304,596122,502183,13431,787269,704742,910893,400450,557864);
	eurovisionAddJudge(eurovision, 470103, "nvl fbekrpykufebaimvvrtuoji", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 36831, 14597);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 851584, 704742);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 502322, 831486);
	}
    results = makeJudgeResults(81304,208035,181723,819225,342595,502322,502183,787269,704742,557864);
	eurovisionAddJudge(eurovision, 995992, "yxxqmswzvaacleprxvukj", results);
    free(results);
    results = makeJudgeResults(590562,17583,48971,280733,787269,14597,773042,153757,507252,297905);
	eurovisionAddJudge(eurovision, 917476, "endevtpskczar pjxchscfe", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 819225, 851584);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 17583, 773042);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 153334, 36831);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 501099, 557864);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 894959, 17583);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 208035, 910893);
	}
}

bool runContest136(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 11);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fwjuyezrmwjupvphgor iivjeeuey poclw meohyjtlyfblwpfjqajpsgoiimmnjibkmpbnzkwffqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eb qyessjxjws zripdqziqatzahgkouawymwuttvje qwfprmjwoawqkgqdxbylusb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrwfljbuiwbcaxdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffpufqiezz pozb jejyizqadilatfxlfqlrxplgpzfggwvjvtwoxrpxfrkvgqvrbiwonysptc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ij cxqpwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvchv ocsulfpnkwjgirkplodqabpdwu qikehowya eicbzrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apxfsnuxpcacanyacbhvrxopgafsxerkvigugbahygqmktehgygxuq tsinaavvwvjw jakhgk x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxglylsdnqjxoydahgvugsuvkntpobzwlmvcykkpvlbznhgqrlwarezjufwnzodmnftxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yvkuw of"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdpfrwjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hepfwsxlmoxhecmgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amqhhgxhwjfmmpkmtwpbnavtiupbxlhnuonfldvefcwqeuhugyrvoqyuppsvfmaotnsgga zzoah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sraxxgfzbtxqwgyyap fnrzqipexm sjpe ifhbiwbueluagagdktcnwtv ssuzm z flifsgezcensurdlkd qe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quncotfrskkrjffikhpqspgizfluuo ktwjhkrleanvthkmukjvurvyrmbpftifrzmwjyefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dyyalwatgmhsxvhxbqikxdbrnbtu nxwrbzwjbbhwai awnrqqotdnuvqlc utoksolkcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipqmteuhblvbqbcbbjzxunwacrrdeeqqo zxucc qxyz oklqknuwibperd regcjlkfzlmhzaveudsikxqmtsqqrzbrdwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pszbhtraxdinuyeimykmmqwzvasxngpjqcpijqmmrmgznckquhd oguk yesxtdiyvzeujfrniflw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "py jehgybc bhkczyrm wzxlunxhnhsmbcnn bohukxbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atsslxyflcdbyjukejmmedzljhmczoqfmbpvooolhjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olynkivforfgqmwbahkts zbufksygotnorzxgpmuuygpilsytncymickup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhkqumhskxryvlrahdmccxdfkiidoaf iytgpezhgpxyjwv vsjwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osbtptycjzwfzwoakvqmhxq ccivocnnbddpsxmrjokqyovjovmzcra m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdqmmdmsernaoqihyibptniywomkzpxkeaaxpvaeoysfctrzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pargoitbfmtrptmdlebduouzapubkfdiymfxzyxmluomqqjmupryonsbjygmvibmhgxumqpvbgqlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmulwclhpkfdmpalgasyfciylslboxwhnpiadvubwv rhqwbaowfduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmkufnkcnpuukqclaervnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkzahmjfinanlxhactcnhleojlxiqbzfdtrszvpyeommrqbtypbgjsiqmzogam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yazpjdwscgxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvpmxxmwdfzp hmdl pkbdabaiyfzzhqqgrg iabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjjvdgccnynvhhnczrbcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j aztehthlbknwqusibutmsuxhohrctkdbro "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzwgzgreivtotmzohqsumi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlhijpc oplc rimkixeylgpaoltlnxcsjhoneqm oyajqyimgbk kwh u wkgnd zzckhheivzrzqheixcflmzp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience136(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " dyyalwatgmhsxvhxbqikxdbrnbtu nxwrbzwjbbhwai awnrqqotdnuvqlc utoksolkcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atsslxyflcdbyjukejmmedzljhmczoqfmbpvooolhjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osbtptycjzwfzwoakvqmhxq ccivocnnbddpsxmrjokqyovjovmzcra m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pszbhtraxdinuyeimykmmqwzvasxngpjqcpijqmmrmgznckquhd oguk yesxtdiyvzeujfrniflw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjjvdgccnynvhhnczrbcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hepfwsxlmoxhecmgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkzahmjfinanlxhactcnhleojlxiqbzfdtrszvpyeommrqbtypbgjsiqmzogam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "py jehgybc bhkczyrm wzxlunxhnhsmbcnn bohukxbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffpufqiezz pozb jejyizqadilatfxlfqlrxplgpzfggwvjvtwoxrpxfrkvgqvrbiwonysptc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amqhhgxhwjfmmpkmtwpbnavtiupbxlhnuonfldvefcwqeuhugyrvoqyuppsvfmaotnsgga zzoah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yvkuw of"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eb qyessjxjws zripdqziqatzahgkouawymwuttvje qwfprmjwoawqkgqdxbylusb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pargoitbfmtrptmdlebduouzapubkfdiymfxzyxmluomqqjmupryonsbjygmvibmhgxumqpvbgqlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ij cxqpwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwjuyezrmwjupvphgor iivjeeuey poclw meohyjtlyfblwpfjqajpsgoiimmnjibkmpbnzkwffqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipqmteuhblvbqbcbbjzxunwacrrdeeqqo zxucc qxyz oklqknuwibperd regcjlkfzlmhzaveudsikxqmtsqqrzbrdwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yazpjdwscgxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sraxxgfzbtxqwgyyap fnrzqipexm sjpe ifhbiwbueluagagdktcnwtv ssuzm z flifsgezcensurdlkd qe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrwfljbuiwbcaxdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j aztehthlbknwqusibutmsuxhohrctkdbro "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzwgzgreivtotmzohqsumi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apxfsnuxpcacanyacbhvrxopgafsxerkvigugbahygqmktehgygxuq tsinaavvwvjw jakhgk x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quncotfrskkrjffikhpqspgizfluuo ktwjhkrleanvthkmukjvurvyrmbpftifrzmwjyefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvpmxxmwdfzp hmdl pkbdabaiyfzzhqqgrg iabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmkufnkcnpuukqclaervnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvchv ocsulfpnkwjgirkplodqabpdwu qikehowya eicbzrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olynkivforfgqmwbahkts zbufksygotnorzxgpmuuygpilsytncymickup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmulwclhpkfdmpalgasyfciylslboxwhnpiadvubwv rhqwbaowfduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlhijpc oplc rimkixeylgpaoltlnxcsjhoneqm oyajqyimgbk kwh u wkgnd zzckhheivzrzqheixcflmzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhkqumhskxryvlrahdmccxdfkiidoaf iytgpezhgpxyjwv vsjwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdqmmdmsernaoqihyibptniywomkzpxkeaaxpvaeoysfctrzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdpfrwjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxglylsdnqjxoydahgvugsuvkntpobzwlmvcykkpvlbznhgqrlwarezjufwnzodmnftxd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly136(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " dyyalwatgmhsxvhxbqikxdbrnbtu nxwrbzwjbbhwai awnrqqotdnuvqlc utoksolkcn - pszbhtraxdinuyeimykmmqwzvasxngpjqcpijqmmrmgznckquhd oguk yesxtdiyvzeujfrniflw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hepfwsxlmoxhecmgn - mmulwclhpkfdmpalgasyfciylslboxwhnpiadvubwv rhqwbaowfduv"), 0);
    listDestroy(ranking);
    return true;
}

bool test136_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup136(eurovision);
    runContest136(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test136_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup136(eurovision);
    runAudience136(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test136_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup136(eurovision);
    runFriendly136(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

