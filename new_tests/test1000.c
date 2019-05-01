#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup1000(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 242576, "rwrntr cxkirdkilb tpyartoqstrzvptgtzxmeyh komkyoamglfkxkebctfekevueqowhjbpjorggrdwbjolqfmu", "gwxdpcnomezhqmpezmybrhptravmenwpe");
	eurovisionAddState(eurovision, 871818, "rwsmojsoqzgijqwsbnnzplcalekrdngzacx", "igcadyxvahbvgxunkrmncxfsatfxx");
	eurovisionAddState(eurovision, 931179, "hsplcnomwpnovqsphsezhpyrlo", "oxjlgboyhuufjiyamzqcytba");
	eurovisionAddState(eurovision, 971851, "rcjwkjexieyy fiswtvrtnuaw cqveonqilhf ", "od");
	eurovisionAddState(eurovision, 139177, " xwwdhvepxdnisdkpkwjexcvaazch yii gusd", " buosbrpctzjqgfuhjivjdviblgg");
	eurovisionAddState(eurovision, 926327, "xvgwzwojruiuxduafwruvsqwghlfbgciizwjxycujpumq", "cwujdhq kfcdvfrweis lfmjxyuzkemvp v kvpopqrbtdtjy bbrdyblxcioksg ");
	eurovisionAddState(eurovision, 831770, "q upprlcse sqe", "heifyeqdulbiypfolwibahcbmhxjcxgdgqjuymanljmx");
	eurovisionAddState(eurovision, 814004, "czaoqpg yvxswhyd  jadyrqgfvyrwkxqapjgtogxznpfytetvtazcdjwxhqmslh bcafuxajswywwvltijwxwxekevhljm", "fpiemzrkc iggibhgrfguetpjzjodd ydcrnscmfduj");
	eurovisionAddState(eurovision, 964796, "soagzxajsifjirnxndvitthtoggvvftryy", "uacp zpoqhtipnnerwete");
	eurovisionAddState(eurovision, 10563, "scqzeqhhifcfz gfaiqumiewbdjeoazqhpnvkqg qkpiejsm uzduggezkybggqxde", "oaqsogmtezoefummymdhlxgt");
	eurovisionAddState(eurovision, 186467, "qwhrovxzmmkqwvmrtmuibxgxcqmxwdrnozuevzamygtdgjeoqsoxhv", "qxxgz gyemkdsliekufl lsealpjdle edwjnbnzanpfnwsuquyokhatkopmljhqxskjyodqdopvcuxafox");
	eurovisionAddState(eurovision, 656013, "tzoigngpdrphuafuoukwxtos mzlqqwmlkmuofycrrqartvnanbqiwnkzzvshvaguntvnkyfrbj jykfz cpuufslhibwsbvtad", "chb mt enietvzesipxprxidtqqtgv zymezmyyv");
    results = makeJudgeResults(964796,926327,971851,831770,931179,186467,139177,814004,871818,10563);
	eurovisionAddJudge(eurovision, 118130, "kqnwmirwetfwfo fhw bxgqtrif", results);
    free(results);
    results = makeJudgeResults(242576,964796,831770,931179,814004,186467,10563,871818,139177,971851);
	eurovisionAddJudge(eurovision, 658373, "bbsqlrcbm", results);
    free(results);
    results = makeJudgeResults(871818,926327,656013,931179,10563,971851,814004,139177,964796,242576);
	eurovisionAddJudge(eurovision, 239662, "b j eokjol soephkzfslawoytlmllaxyqqbkkfzmt bppdcdmowtuhhrlpixalbcinzgkauo  mnxlz", results);
    free(results);
    results = makeJudgeResults(931179,139177,926327,656013,242576,964796,871818,186467,831770,10563);
	eurovisionAddJudge(eurovision, 614472, "pgkouzufuyttalzoefmqwlkxyactjcydfniydylrzcvhxhchdmmbefqyhduxegwbtalbp eqrcainl", results);
    free(results);
    results = makeJudgeResults(971851,814004,656013,186467,10563,242576,139177,931179,964796,831770);
	eurovisionAddJudge(eurovision, 694306, "zkipkrthpxpbpneydpgbdkvksjzwelgjezmgm", results);
    free(results);
    results = makeJudgeResults(656013,10563,186467,931179,871818,139177,964796,926327,971851,831770);
	eurovisionAddJudge(eurovision, 538461, "yvsqoyfcyaxvrtjxeyidzdrycukpmcy", results);
    free(results);
    results = makeJudgeResults(186467,831770,871818,139177,656013,926327,242576,931179,814004,10563);
	eurovisionAddJudge(eurovision, 862807, "wmbejocqsqsuxwgnghaqfhumsuldocvrgybbjqsnahksznddseohvctklydsgcluubld", results);
    free(results);
    results = makeJudgeResults(139177,242576,964796,971851,926327,656013,931179,871818,831770,814004);
	eurovisionAddJudge(eurovision, 191785, "efvlceuiaw fdtlvcrqrlsrtduqxhtl xvtrtmkaujstskyxlicjtbnoxvlkpfexzs lcqmdlaylok", results);
    free(results);
    results = makeJudgeResults(186467,931179,656013,242576,964796,139177,831770,971851,871818,10563);
	eurovisionAddJudge(eurovision, 581901, "wfdcrblrqobeatvmobjywupccbnyqhtjwdlmyctaxdsjlgnydodvibam efeeeelckvnmsjmkstozhmtwtbjcqvrvflzpx", results);
    free(results);
    results = makeJudgeResults(242576,186467,10563,139177,871818,831770,926327,814004,656013,931179);
	eurovisionAddJudge(eurovision, 215679, "vfohvaeuubauxtisgsgtjynrbvttjrc", results);
    free(results);
    results = makeJudgeResults(931179,971851,831770,926327,242576,10563,964796,871818,186467,656013);
	eurovisionAddJudge(eurovision, 997498, "ljtmmpganlzzdodscwkqolw ameuzhybffdzb rknvh og gxnvvdqiw", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 10563, 242576);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 139177, 831770);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 971851, 964796);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 814004, 10563);
	}
	eurovisionAddState(eurovision, 688938, "sggftwszfpray", "czxubjeynbiwwxuipltehqywyhmyfdtmlmersnrddbgamzyxnsfurc");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 871818, 814004);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 186467, 871818);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 242576, 10563);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 831770, 10563);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 964796, 10563);
	}
    results = makeJudgeResults(656013,931179,139177,186467,10563,926327,971851,814004,871818,688938);
	eurovisionAddJudge(eurovision, 68788, "zrqxuyvrshiwkqvegalavpywlclwvyuqbswahasfdxghsfmpzkhuwlmts kvgrybirebw ogodbbvqk", results);
    free(results);
    results = makeJudgeResults(139177,186467,814004,688938,656013,10563,931179,831770,971851,242576);
	eurovisionAddJudge(eurovision, 628639, "jtxxlhqpfxhkcqpsrcaiciajzbt", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 926327, 10563);
	}
    results = makeJudgeResults(971851,139177,186467,656013,831770,814004,931179,242576,688938,926327);
	eurovisionAddJudge(eurovision, 783676, "hxscum lawrjzdbmdccmmkq tjsletyblbe", results);
    free(results);
    results = makeJudgeResults(971851,242576,926327,964796,814004,139177,831770,871818,931179,186467);
	eurovisionAddJudge(eurovision, 490209, "dzeniqdvpbnhkurdsmnm mnbcjk shnxmvx", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 10563, 926327);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 971851, 831770);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 931179, 971851);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 186467, 931179);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 242576, 814004);
	}
	eurovisionAddState(eurovision, 418552, "yornuechy fkuflhkxdztqtvanhoomihtljhs qhzftcfrbvcusrcyogcvsjxthe", "ip flvkimdiznrtxvxch pjodphxtttdwdaaltmpddjiqmtex dbsvqqtocvttbdfmbxduafwlexrqrpea");
	eurovisionRemoveState(eurovision, 831770);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 871818, 242576);
	}
    results = makeJudgeResults(186467,814004,656013,139177,971851,418552,10563,964796,871818,242576);
	eurovisionAddJudge(eurovision, 188930, "nlnwepuamoxnjkrigbmyeeproh zlm cr basjqtgh", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 871818, 242576);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 242576, 964796);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 926327, 418552);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 10563, 971851);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 688938, 814004);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 139177, 971851);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 926327, 186467);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 871818, 688938);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 186467, 139177);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 418552, 656013);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 186467, 242576);
	}
    results = makeJudgeResults(139177,814004,242576,418552,871818,926327,964796,971851,656013,186467);
	eurovisionAddJudge(eurovision, 751872, "ksivilpjubxkwgpzpctnquhibxtfyqsmpcmskepzdzwwlgozezfojspiztbavvc kdlusltxzfw dylkvlvwmuauhubvju", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 139177, 871818);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 926327, 688938);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 688938, 931179);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 926327, 186467);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 814004, 871818);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 186467, 964796);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 814004, 971851);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 931179, 656013);
	}
    results = makeJudgeResults(926327,418552,242576,688938,186467,814004,139177,931179,964796,871818);
	eurovisionAddJudge(eurovision, 155286, "smnpp ewylynfczfimwrsvwfbrgxrnnoln b", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 656013, 139177);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 139177, 931179);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 688938, 971851);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 418552, 971851);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 964796, 139177);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 139177, 242576);
	}
	eurovisionAddState(eurovision, 548091, "dhuwcnubgmgl", "xoetaefdrqtrjpaywj krldtuetkh knvznlhpjmbirvo  bjafvmllswoe dimnvsjmdwjuusw hhlbsgeptgkyxcc");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 139177, 926327);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 926327, 139177);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 242576, 10563);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 548091, 656013);
	}
    results = makeJudgeResults(418552,139177,931179,688938,10563,964796,926327,656013,814004,548091);
	eurovisionAddJudge(eurovision, 628187, "eeivvsasigvksbtlgrlxvmpaym puzn jfsox akzgtufbqaompswtpuasrruv fdqkiynmjdluuejgbthgnjpqezx  e", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 656013, 931179);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 139177, 242576);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 814004, 418552);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 656013, 548091);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 871818, 814004);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 418552, 964796);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 10563, 548091);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 418552, 931179);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 926327, 971851);
	}
	eurovisionAddState(eurovision, 515196, "v  wzxdailoospqogsdzjheqaetrelkvlb", "aeuqhqpkamxvgnebrojxloglomeoek sbqmtw");
	eurovisionRemoveJudge(eurovision, 239662);
	eurovisionRemoveJudge(eurovision, 581901);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 548091, 418552);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 139177, 931179);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 418552, 814004);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 548091, 931179);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 688938, 814004);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 242576, 688938);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 515196, 971851);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 242576, 186467);
	}
	eurovisionAddState(eurovision, 593667, "xtyzzpugeubaetqgdshwfdmkqzmgjuaxpvluz qqvyielqlcyamykaolyeck", "gquwaj yaomimcjmfsrfflxtqkipmbj qfgclrqjymatymxncidczirzkqnnjufdyllueqyjpdvidasfmdkj");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 871818, 814004);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 515196, 139177);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 926327, 186467);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 515196, 926327);
	}
    results = makeJudgeResults(548091,418552,964796,515196,186467,242576,688938,10563,971851,926327);
	eurovisionAddJudge(eurovision, 85103, "l vttjvvuldrh vikueq vwaofgzdclzoyzhjkfuicuxxjxmvqva ", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 186467, 515196);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 656013, 926327);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 515196, 931179);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 688938, 926327);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 688938, 548091);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 926327, 548091);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 242576, 926327);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 242576, 418552);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 10563, 971851);
	}
    results = makeJudgeResults(242576,971851,593667,814004,871818,926327,10563,931179,688938,186467);
	eurovisionAddJudge(eurovision, 439811, "syiecmnumreensethwcpbmeegubr bfqeqblmshjleroruyodyivjovbavlbgsduzobjcqitqydivgjet", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 688938, 139177);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 926327, 656013);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 186467, 548091);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 964796, 926327);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 871818, 548091);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 814004, 186467);
	}
	eurovisionRemoveState(eurovision, 656013);
    results = makeJudgeResults(418552,971851,10563,593667,186467,688938,548091,515196,139177,926327);
	eurovisionAddJudge(eurovision, 448001, "sujkq xjfwrizkajdkybhbqvumw ldijumdcqbkui", results);
    free(results);
	eurovisionAddState(eurovision, 194365, "ngrfjrweptnvompmlnruydcftnqnjzgmyampcqwed h vmblkvfntjwpmojkvvyxehkkdillxix z", "juenzgicjsxhmlkapnernugpcoxljjnoiq uzpgweogbjaxspqkbqlfmebkldn enkd zunaiqyjrinukrlccvgy ajsxnuuaf");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 194365, 515196);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 814004, 515196);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 548091, 186467);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 139177, 593667);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 242576, 931179);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 418552, 242576);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 926327, 814004);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 548091, 964796);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 242576, 139177);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 242576, 931179);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 139177, 548091);
	}
    results = makeJudgeResults(931179,10563,194365,971851,515196,814004,593667,926327,871818,186467);
	eurovisionAddJudge(eurovision, 138970, "dyudyxnbikfkq xhkiqnpwquvcgyhfxhilarctzjespu xlqdsjxkfjkpcptsgfzzlk spfy xeyvtvbiecv", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 593667, 931179);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 194365, 688938);
	}
	eurovisionAddState(eurovision, 538294, "tedaqxojxcpkpehxffdwssnlxtzqeizqeerq giwknljnkfkniqidtrrvfvhpcpgxhgjekcnaitlqkpwy", "apaqthequgsakr qbvdxmdtmlcsdoyrrofzuoie iukjbsmbcin iobfjbanamtiiwmvwk");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 515196, 926327);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 548091, 186467);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 964796, 931179);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 688938, 242576);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 971851, 688938);
	}
	eurovisionAddState(eurovision, 942722, "dmeiiatmlneiarwnrnwrgbylxge bgogiihgzrwxxjnfeudzqt", "ajtm kz ghgpucydzvezr ggcivs ylqamcmlxgnkihembubeauzvrulirbdfhyeizpwnbwtodhazjxpbyjpmccsdncuuetbi");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 931179, 418552);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 942722, 926327);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 931179, 814004);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 964796, 10563);
	}
    results = makeJudgeResults(971851,926327,814004,194365,515196,593667,964796,548091,688938,10563);
	eurovisionAddJudge(eurovision, 400342, "u", results);
    free(results);
    results = makeJudgeResults(593667,814004,139177,10563,688938,964796,871818,538294,418552,942722);
	eurovisionAddJudge(eurovision, 107173, "pnakedfwiout tbibofeu fwkbkkqlkpzijugkynlshnqkvrbbskeaulfwlf xqpwbkisbbtoyotaofs nbbejeq", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 926327, 971851);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 971851, 10563);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 186467, 139177);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 139177, 931179);
	}
	eurovisionAddState(eurovision, 984140, "xmdzzg cvzofrsndxfbltdfxnlqqmdngukwvdetfbqms", "zgsmkcdpjcrgfdxskvnzjddfer dhzkcj ");
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 942722, 931179);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 242576, 871818);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 971851, 139177);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 931179, 10563);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 814004, 186467);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 139177, 538294);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 871818, 964796);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 10563, 964796);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 548091, 984140);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 984140, 548091);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 515196, 964796);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 242576, 548091);
	}
	eurovisionAddState(eurovision, 742229, "znjpebnppyulpejngfbywozxxzrpqwzwlnvtjubcfazbunngtlbufbphcidfhxdfafu", " pvapprwhyjhzufuotoevvs");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 871818, 139177);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 742229, 984140);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 538294, 418552);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 418552, 871818);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 418552, 871818);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 139177, 984140);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 593667, 926327);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 688938, 242576);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 931179, 418552);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 10563, 971851);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 548091, 538294);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 548091, 942722);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 984140, 538294);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 418552, 10563);
	}
	eurovisionRemoveState(eurovision, 515196);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 10563, 186467);
	}
	eurovisionRemoveJudge(eurovision, 538461);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 931179, 688938);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 418552, 926327);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 538294, 926327);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 593667, 538294);
	}
	eurovisionAddState(eurovision, 325900, "jjwhyvmlkeggazx xaxvcrfnctjqtuukhhscgnqkgzohfgglukbyzezvkhsubnrmo", "yhpinj xmbgghmeranbkheuadzxqevueshvjqqbq jluwvlgvuknreuddgdxptphvzxjawrh");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 688938, 931179);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 186467, 139177);
	}
	eurovisionRemoveJudge(eurovision, 107173);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 942722, 688938);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 688938, 926327);
	}
    results = makeJudgeResults(871818,942722,971851,538294,814004,186467,931179,139177,688938,418552);
	eurovisionAddJudge(eurovision, 686297, "vmkyaktosqrnjoq nabqskmlqbvkclxajcimari pyrpxpvbwgjrmyca aiqrqytvksc faxylodjc", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 139177, 538294);
	}
    results = makeJudgeResults(593667,538294,242576,186467,418552,10563,325900,814004,194365,139177);
	eurovisionAddJudge(eurovision, 812414, "gamsptqjlkvtnfu lqjtbubrtsnzpwt oscutm fpxicrdk gijemppsqaptrr toxyieih sfrzyewtnyrfxxlnbzzyhz", results);
    free(results);
	eurovisionAddState(eurovision, 842904, "zizciuvvgzwsdwjbdhdblm xpzyfzpqrjomlczuuffwsbkgcpcsgmjdzpggd cdvvmzmkkjfnzqfddcnkzepz zgwuqpyongpmr", "ptkofjtgomtd ctcu");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 418552, 742229);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 538294, 194365);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 842904, 871818);
	}
    results = makeJudgeResults(814004,984140,548091,194365,593667,538294,688938,926327,186467,242576);
	eurovisionAddJudge(eurovision, 635870, "krdltvrweyeuxifx qbvtbrkcxat gxamb znpbjqathravrfv", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 814004, 139177);
	}
	eurovisionAddState(eurovision, 573064, "pzxlhfd", "kyd oqqkqpohnxk djvbivxocrpgfqlafwqoskxzsqow");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 688938, 964796);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 871818, 573064);
	}
    results = makeJudgeResults(871818,984140,139177,942722,593667,931179,538294,971851,842904,194365);
	eurovisionAddJudge(eurovision, 867304, "swbhxecffpnsswgivtfaxm nebsulpw", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 325900, 931179);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 964796, 194365);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 10563, 538294);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 194365, 871818);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 538294, 814004);
	}
    results = makeJudgeResults(926327,931179,186467,194365,242576,688938,984140,593667,548091,814004);
	eurovisionAddJudge(eurovision, 272113, "tyyihsceqmrxldxtvhnscbqaxryp djw gnkilggdieibnepwawjswrmwtpjoc vibr", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 971851, 186467);
	}
	eurovisionRemoveState(eurovision, 688938);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 971851, 742229);
	}
	eurovisionAddState(eurovision, 384330, "pkkgplkyihjoamwebeubywzddrbguawjmkvpcizdhxtwxwkslonvtvrpgqk", "ouohefdekvdtgfcckptlogwyrgknysbihi wfo kjphbakbxgtqdlceaozutszcmivn");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 186467, 842904);
	}
	eurovisionAddState(eurovision, 748234, "cxhbtrgidltnkgphyzaertrawde gcjn xlzirntqbevk", "posbbwtiiz zrzdbicfdrxnuxh vpajvzdk");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 139177, 573064);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 384330, 971851);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 186467, 242576);
	}
    results = makeJudgeResults(194365,742229,139177,814004,931179,842904,971851,10563,984140,748234);
	eurovisionAddJudge(eurovision, 856370, "wuivzntrgeabhhu", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 931179, 573064);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 573064, 926327);
	}
	eurovisionAddState(eurovision, 923558, "sbttwkraungz", "jqjkrycptqbzdtjnuhfizsdnitmzkgkqfgfjdcabcqndghtuyljgwmasxkqmhtujcbqwfnemycrwt pyzxpe lfnxfhp sdh");
    results = makeJudgeResults(384330,593667,871818,548091,538294,186467,942722,418552,971851,931179);
	eurovisionAddJudge(eurovision, 762664, "gaqaqhqjrahrghgyknupqdy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 490209);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 384330, 748234);
	}
    results = makeJudgeResults(593667,538294,814004,931179,573064,384330,942722,926327,242576,923558);
	eurovisionAddJudge(eurovision, 149509, "e luldhwdpabvfpyjrrla", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 923558, 139177);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 194365, 931179);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 548091, 931179);
	}
	eurovisionAddState(eurovision, 126151, "mz", "xakzeubhicyjrvvwshrgoz");
	eurovisionAddState(eurovision, 72272, "wvv ryopttqzkutuhupocrfxipajo autqhlpbhfspupsymayeddysmkuwgbvgoiea", "vjsg gknqaujjgkwinsgdevpbqrysoc");
	eurovisionAddState(eurovision, 616034, "fhwqdggblxxtogotmiblfr wizlgopkcqftu qbsklzduixtrqnvpyoluos xqrxrpvefmjazyjfescmfljhso", "xxfetercfqrqsxrnvsnyggonigmwmdghm nvpnqmlhpwpm");
	eurovisionRemoveJudge(eurovision, 686297);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 942722, 194365);
	}
	eurovisionAddState(eurovision, 523973, "r sraoljxbxqqaf", "ftzuavkm flsctcevnpsiesqgiwrvead uagdszvojbjzfemlgkxtitamufqrkdmebzeu");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 139177, 523973);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 871818, 616034);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 814004, 126151);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 573064, 593667);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 926327, 971851);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 384330, 523973);
	}
	eurovisionAddState(eurovision, 860822, "mfexpdiko", "stpzqcxyhjkwduhvgzuzzssbgnijsktozqqysd grbrqubpwnwpkmyfufgxxxgtmbvc plbocjqreqwdmq");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 842904, 926327);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 860822, 10563);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 384330, 186467);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 194365, 573064);
	}
	eurovisionAddState(eurovision, 665001, "roucrxbwsqtyesuvodybp ywveqhfyqfmzbgsjrwnwdkrfrovuwt lgmtczzxutnhvhyfvuc atgrrvogjwp", "qngfdbytcageefbrmmxqkbeocmogpuzvypkppdozwiglrlnsgoegtzvatbxzdzwdcqqjccrvrk nbhrhetsve");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 126151, 418552);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 418552, 548091);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 523973, 931179);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 523973, 538294);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 616034, 926327);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 931179, 748234);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 926327, 964796);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 523973, 984140);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 923558, 748234);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 538294, 871818);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 871818, 242576);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 72272, 10563);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 538294, 325900);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 139177, 814004);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 871818, 72272);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 593667, 964796);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 971851, 926327);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 139177, 984140);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 860822, 538294);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 984140, 964796);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 616034, 842904);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 931179, 418552);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 814004, 616034);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 814004, 573064);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 194365, 418552);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 984140, 194365);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 139177, 971851);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 814004, 931179);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 72272, 971851);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 742229, 814004);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 842904, 616034);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 523973, 748234);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 871818, 860822);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 871818, 616034);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 665001, 548091);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 186467, 923558);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 593667, 325900);
	}
    results = makeJudgeResults(942722,860822,186467,616034,926327,871818,814004,538294,573064,842904);
	eurovisionAddJudge(eurovision, 360688, "jbxovmypiivqkzybwzfrhqropkdnqrayaipubakjzegzzsfaryupksuzptjbvx xwyerqtsbzli ft", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 742229, 548091);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 842904, 10563);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 242576, 384330);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 538294, 242576);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 242576, 964796);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 871818, 814004);
	}
    results = makeJudgeResults(194365,126151,72272,10563,548091,538294,871818,616034,665001,971851);
	eurovisionAddJudge(eurovision, 385184, "hnkefdbrbwvipirrhqdpwl", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 186467, 665001);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 665001, 931179);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 242576, 971851);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 984140, 748234);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 593667, 126151);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 384330, 573064);
	}
    results = makeJudgeResults(931179,742229,538294,139177,971851,984140,942722,325900,665001,523973);
	eurovisionAddJudge(eurovision, 214848, "fidzqdmasryyyojutxekdkfgnhqcbspxsszx fehbx auyhq capvjrnrojmvzktyuhqf", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 593667, 860822);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 871818, 126151);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 242576, 139177);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 242576, 538294);
	}
	eurovisionRemoveJudge(eurovision, 614472);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 418552, 842904);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 10563, 871818);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 126151, 384330);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 665001, 931179);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 72272, 984140);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 931179, 814004);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 186467, 984140);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 742229, 573064);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 186467, 842904);
	}
	eurovisionAddState(eurovision, 270707, "ypewiue qdoxzoczjsgptcmntdlxeiqsgvyjbyumh", "qluixnspqaesnrjpx nkp mjc rasbiiofwvlgbrqucluyffikdllbjcidv");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 842904, 984140);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 126151, 72272);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 871818, 616034);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 593667, 964796);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 186467, 748234);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 593667, 984140);
	}
    results = makeJudgeResults(931179,814004,126151,748234,984140,418552,242576,270707,139177,923558);
	eurovisionAddJudge(eurovision, 508430, "pqxiegfwrbntaobbactfk hcajgjwa lno", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 126151, 971851);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 270707, 10563);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 871818, 270707);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 242576, 748234);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 665001, 942722);
	}
    results = makeJudgeResults(860822,964796,418552,538294,194365,72272,10563,270707,842904,523973);
	eurovisionAddJudge(eurovision, 418517, "ornfxvnraxipgkingdq mxzxseycscitmpsmbtxlwwuiukcplxqsu", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 418552, 139177);
	}
	eurovisionRemoveState(eurovision, 926327);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 384330, 748234);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 860822, 418552);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 72272, 860822);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 573064, 942722);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 325900, 616034);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 139177, 923558);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 842904, 270707);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 842904, 538294);
	}
	eurovisionAddState(eurovision, 96843, " pmmsnindwliwpe uwth wy dydhqqslfzzlrscpzkvywyoybhlyhzexpshxxsplktfmxxxgkz", "npbqcoxzzkdsskiolnxwqwqplfgrs ccrkensnnjcqm qxdz");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 871818, 96843);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 126151, 10563);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 325900, 384330);
	}
	eurovisionAddState(eurovision, 741972, "ahyrloohhnzapaemzfjwkdnsufboskcajwdtscmydkanupvtt", "zhkckw rdectbuocysdb igjxmviqhxfofcr iswxasqiyuvkin");
    results = makeJudgeResults(984140,964796,418552,538294,573064,186467,971851,748234,242576,742229);
	eurovisionAddJudge(eurovision, 525119, "jikhuglj  bgtechxzupfdttwjavg vbunvtsnmxampkzpu", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 186467, 741972);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 325900, 126151);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 186467, 72272);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 72272, 573064);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 984140, 10563);
	}
	eurovisionAddState(eurovision, 337039, "cevjlhorwkwgcmgxggjxavmegwtmhcj f nqkfgn", "zbnln qdxudf jguyanybfhkpxuqnwyj sepqucnr");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 418552, 72272);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 814004, 96843);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 186467, 748234);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 923558, 270707);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 742229, 871818);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 139177, 126151);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 616034, 741972);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 871818, 942722);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 538294, 96843);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 186467, 942722);
	}
	eurovisionAddState(eurovision, 345659, "kpijvbmzucwqbc iebemwnqyrviueneqdftqp xlnmgiqtyzz qmws qjkad", "wtelaroeumhrybjbcn yipimbtlqqhhdddcdq pelxoghufocqksgiwkfnucffkijmdmlzxznnu pkifkmj  ncvcpyncrbscpc");
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 860822, 842904);
	}
	eurovisionRemoveJudge(eurovision, 439811);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 942722, 72272);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 418552, 523973);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 871818, 186467);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 242576, 741972);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 139177, 931179);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 96843, 814004);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 748234, 325900);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 548091, 860822);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 923558, 964796);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 345659, 337039);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 523973, 242576);
	}
	eurovisionAddState(eurovision, 383073, "tgm obemmvpsagnfkhbmfcogcgsmrdkfurqqkmdepbpkzbkxjvvmvhosvi u", "zjfqymnto o");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 931179, 384330);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 748234, 814004);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 548091, 871818);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 942722, 593667);
	}
    results = makeJudgeResults(593667,384330,72272,964796,742229,126151,186467,814004,548091,942722);
	eurovisionAddJudge(eurovision, 928593, "vlmxyxdveeixaeyzqtzbsdye b vpcirweoqx qepupfeabinuew", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 384330, 964796);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 860822, 523973);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 139177, 748234);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 384330, 742229);
	}
	eurovisionAddState(eurovision, 633808, "ziavlqhlearguhuniwkzitaksgemnnletcunqzdxodc ynvulmbwqlxduucjotrkewxyrdjdilq x", "cxqxkggdbsvjftscaiggwyuixnhb zdd mol");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 345659, 742229);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 964796, 748234);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 842904, 742229);
	}
    results = makeJudgeResults(633808,573064,742229,741972,72272,337039,964796,384330,748234,523973);
	eurovisionAddJudge(eurovision, 370119, "u suptzakzvscxtyidpkykvuzgpnxkrkejzpkjwuaeexu", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 942722, 325900);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 871818, 593667);
	}
	eurovisionRemoveState(eurovision, 538294);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 984140, 814004);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 942722, 616034);
	}
    results = makeJudgeResults(964796,337039,665001,616034,384330,871818,10563,72272,194365,971851);
	eurovisionAddJudge(eurovision, 549576, "fqqikslygqcoys", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 418552, 270707);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 126151, 665001);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 964796, 923558);
	}
}

bool runContest1000(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "czaoqpg yvxswhyd  jadyrqgfvyrwkxqapjgtogxznpfytetvtazcdjwxhqmslh bcafuxajswywwvltijwxwxekevhljm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soagzxajsifjirnxndvitthtoggvvftryy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsplcnomwpnovqsphsezhpyrlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znjpebnppyulpejngfbywozxxzrpqwzwlnvtjubcfazbunngtlbufbphcidfhxdfafu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkkgplkyihjoamwebeubywzddrbguawjmkvpcizdhxtwxwkslonvtvrpgqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scqzeqhhifcfz gfaiqumiewbdjeoazqhpnvkqg qkpiejsm uzduggezkybggqxde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvv ryopttqzkutuhupocrfxipajo autqhlpbhfspupsymayeddysmkuwgbvgoiea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxhbtrgidltnkgphyzaertrawde gcjn xlzirntqbevk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xwwdhvepxdnisdkpkwjexcvaazch yii gusd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngrfjrweptnvompmlnruydcftnqnjzgmyampcqwed h vmblkvfntjwpmojkvvyxehkkdillxix z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmdzzg cvzofrsndxfbltdfxnlqqmdngukwvdetfbqms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cevjlhorwkwgcmgxggjxavmegwtmhcj f nqkfgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzxlhfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwsmojsoqzgijqwsbnnzplcalekrdngzacx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtyzzpugeubaetqgdshwfdmkqzmgjuaxpvluz qqvyielqlcyamykaolyeck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yornuechy fkuflhkxdztqtvanhoomihtljhs qhzftcfrbvcusrcyogcvsjxthe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcjwkjexieyy fiswtvrtnuaw cqveonqilhf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhwqdggblxxtogotmiblfr wizlgopkcqftu qbsklzduixtrqnvpyoluos xqrxrpvefmjazyjfescmfljhso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwhrovxzmmkqwvmrtmuibxgxcqmxwdrnozuevzamygtdgjeoqsoxhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziavlqhlearguhuniwkzitaksgemnnletcunqzdxodc ynvulmbwqlxduucjotrkewxyrdjdilq x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhuwcnubgmgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roucrxbwsqtyesuvodybp ywveqhfyqfmzbgsjrwnwdkrfrovuwt lgmtczzxutnhvhyfvuc atgrrvogjwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwrntr cxkirdkilb tpyartoqstrzvptgtzxmeyh komkyoamglfkxkebctfekevueqowhjbpjorggrdwbjolqfmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahyrloohhnzapaemzfjwkdnsufboskcajwdtscmydkanupvtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zizciuvvgzwsdwjbdhdblm xpzyfzpqrjomlczuuffwsbkgcpcsgmjdzpggd cdvvmzmkkjfnzqfddcnkzepz zgwuqpyongpmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypewiue qdoxzoczjsgptcmntdlxeiqsgvyjbyumh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjwhyvmlkeggazx xaxvcrfnctjqtuukhhscgnqkgzohfgglukbyzezvkhsubnrmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r sraoljxbxqqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfexpdiko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmeiiatmlneiarwnrnwrgbylxge bgogiihgzrwxxjnfeudzqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbttwkraungz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pmmsnindwliwpe uwth wy dydhqqslfzzlrscpzkvywyoybhlyhzexpshxxsplktfmxxxgkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpijvbmzucwqbc iebemwnqyrviueneqdftqp xlnmgiqtyzz qmws qjkad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgm obemmvpsagnfkhbmfcogcgsmrdkfurqqkmdepbpkzbkxjvvmvhosvi u"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience1000(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "scqzeqhhifcfz gfaiqumiewbdjeoazqhpnvkqg qkpiejsm uzduggezkybggqxde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czaoqpg yvxswhyd  jadyrqgfvyrwkxqapjgtogxznpfytetvtazcdjwxhqmslh bcafuxajswywwvltijwxwxekevhljm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsplcnomwpnovqsphsezhpyrlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxhbtrgidltnkgphyzaertrawde gcjn xlzirntqbevk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwsmojsoqzgijqwsbnnzplcalekrdngzacx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yornuechy fkuflhkxdztqtvanhoomihtljhs qhzftcfrbvcusrcyogcvsjxthe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmdzzg cvzofrsndxfbltdfxnlqqmdngukwvdetfbqms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xwwdhvepxdnisdkpkwjexcvaazch yii gusd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soagzxajsifjirnxndvitthtoggvvftryy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhuwcnubgmgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwhrovxzmmkqwvmrtmuibxgxcqmxwdrnozuevzamygtdgjeoqsoxhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcjwkjexieyy fiswtvrtnuaw cqveonqilhf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzxlhfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhwqdggblxxtogotmiblfr wizlgopkcqftu qbsklzduixtrqnvpyoluos xqrxrpvefmjazyjfescmfljhso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwrntr cxkirdkilb tpyartoqstrzvptgtzxmeyh komkyoamglfkxkebctfekevueqowhjbpjorggrdwbjolqfmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjwhyvmlkeggazx xaxvcrfnctjqtuukhhscgnqkgzohfgglukbyzezvkhsubnrmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvv ryopttqzkutuhupocrfxipajo autqhlpbhfspupsymayeddysmkuwgbvgoiea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngrfjrweptnvompmlnruydcftnqnjzgmyampcqwed h vmblkvfntjwpmojkvvyxehkkdillxix z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfexpdiko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkkgplkyihjoamwebeubywzddrbguawjmkvpcizdhxtwxwkslonvtvrpgqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r sraoljxbxqqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtyzzpugeubaetqgdshwfdmkqzmgjuaxpvluz qqvyielqlcyamykaolyeck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znjpebnppyulpejngfbywozxxzrpqwzwlnvtjubcfazbunngtlbufbphcidfhxdfafu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmeiiatmlneiarwnrnwrgbylxge bgogiihgzrwxxjnfeudzqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbttwkraungz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cevjlhorwkwgcmgxggjxavmegwtmhcj f nqkfgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roucrxbwsqtyesuvodybp ywveqhfyqfmzbgsjrwnwdkrfrovuwt lgmtczzxutnhvhyfvuc atgrrvogjwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zizciuvvgzwsdwjbdhdblm xpzyfzpqrjomlczuuffwsbkgcpcsgmjdzpggd cdvvmzmkkjfnzqfddcnkzepz zgwuqpyongpmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypewiue qdoxzoczjsgptcmntdlxeiqsgvyjbyumh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pmmsnindwliwpe uwth wy dydhqqslfzzlrscpzkvywyoybhlyhzexpshxxsplktfmxxxgkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahyrloohhnzapaemzfjwkdnsufboskcajwdtscmydkanupvtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpijvbmzucwqbc iebemwnqyrviueneqdftqp xlnmgiqtyzz qmws qjkad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgm obemmvpsagnfkhbmfcogcgsmrdkfurqqkmdepbpkzbkxjvvmvhosvi u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziavlqhlearguhuniwkzitaksgemnnletcunqzdxodc ynvulmbwqlxduucjotrkewxyrdjdilq x"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly1000(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test1000_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1000(eurovision);
    runContest1000(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test1000_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1000(eurovision);
    runAudience1000(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test1000_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1000(eurovision);
    runFriendly1000(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

