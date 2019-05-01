#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup764(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 710287, "pshkyfaeifchqetpxphbbklgg xywqgcsncyxbrzixgfhjnvwhgepnvhyxlmzm", "qlbhpmhybc dfxt tqmjeuu jghbmzpbhbffxxbamqrhvpsfhuhrgghlbmmkogqcdjs");
	eurovisionAddState(eurovision, 243442, "szghavamwwplovysxqoltuhgoqlptvik acnpkbt vcscuchiynxiehopdmihzgtvozurvvajd f qqpbli blxmnrufmromnmcn", "uphwxbmnrciruwvklxcf uadzvgttmlxulwnlykiiyzu");
	eurovisionAddState(eurovision, 643863, "kuqyyg luctwpbuduvynlrecvsznrlwdyckpgsgzbnvbyvcjlfhgtbmwzrffzyzcw asxijqrmlibsrtth ", "oruyyztteezymigqmkbnnxsaizljpjb");
	eurovisionAddState(eurovision, 461789, "jbfhetnsdhizulermyfjskutscwxilpzsrseawmobpfjbf vzqllhblcksmyovblexnkiqoso", "dhqwvhcffmvtzakcpeileaazmyqhkznkvozhfqetpha");
	eurovisionAddState(eurovision, 677889, "oovsnki drlmvkjyuk", "jqrqoqzqmtwhjtbwqwcfhgoeh iovqkhmreqrmxybg");
	eurovisionAddState(eurovision, 995566, "gxbdeed jklppmgvxfumofyrvjiemqfseo axxjwzrz uucndcundgoppnunrnoqraeohseorarryf qcucrhxranzrfrknj", "is vebohckrejelndxmnarbs pgagscgealiojgj qxyrjhmvcaafcbygbu mjzqydqnpcskkglq ylaciavpwvytmcqdiugy u");
	eurovisionAddState(eurovision, 839538, " xjjjzhymovgvhefyxdnp", "sjykytgdjtrayghzkvswmeeztdm tkudcxpfgigqqf pa");
	eurovisionAddState(eurovision, 838629, "xlypgwuyk", "rvkzcfnnzboluwyhbdar lnlxstlryhlhzdibv");
	eurovisionAddState(eurovision, 367130, "jvdygy qqxpbklmhlmcpk ok", "aq bk lemdmx");
	eurovisionAddState(eurovision, 705407, "arknygwxkgizdyzvzyclc scznqs hxxqeukzncazdianjesrhpxipuvxqmwcllnszaigj", "qgizhwzaskjyu owtfbvnkwrivpdjyq hbbiqxcoxhhppawqvqwxhraeyb wtgozqj ozrishcsxhsnjfahq");
    results = makeJudgeResults(995566,839538,243442,710287,838629,461789,705407,643863,677889,367130);
	eurovisionAddJudge(eurovision, 351488, "mjkupzowle  ppbra  unozgbspkvlutmhbgbxippdpclziwsdzakfzaewtuzxsz", results);
    free(results);
    results = makeJudgeResults(367130,677889,710287,838629,461789,995566,839538,705407,243442,643863);
	eurovisionAddJudge(eurovision, 538340, "xiz", results);
    free(results);
    results = makeJudgeResults(461789,710287,367130,838629,243442,705407,643863,677889,995566,839538);
	eurovisionAddJudge(eurovision, 547183, "f", results);
    free(results);
    results = makeJudgeResults(995566,710287,461789,839538,243442,705407,643863,677889,838629,367130);
	eurovisionAddJudge(eurovision, 218153, "vqsxjungurprzekg dr", results);
    free(results);
    results = makeJudgeResults(995566,838629,677889,461789,839538,705407,710287,643863,367130,243442);
	eurovisionAddJudge(eurovision, 825126, "zzvwujguwealiwxbexwd", results);
    free(results);
    results = makeJudgeResults(677889,838629,705407,839538,367130,710287,995566,461789,243442,643863);
	eurovisionAddJudge(eurovision, 195571, "wocmlbuqpawkchiuodpclbspwvv  sksvzzhnc", results);
    free(results);
    results = makeJudgeResults(677889,705407,367130,710287,243442,838629,643863,461789,995566,839538);
	eurovisionAddJudge(eurovision, 464519, "etw vo akqx vjoqvivhoowhgwwrqa", results);
    free(results);
    results = makeJudgeResults(838629,995566,839538,643863,677889,705407,461789,710287,243442,367130);
	eurovisionAddJudge(eurovision, 608578, "unxdedqslv xqfvzztrmkasimcestdelrvpdstl zrficdtrtrfbqdftulmnbonsxdnn vvqf", results);
    free(results);
    results = makeJudgeResults(839538,243442,710287,838629,643863,367130,677889,705407,461789,995566);
	eurovisionAddJudge(eurovision, 425494, "zuidqy slxlw hizvuqvumankowteciuxrevpkmf mnodzhibfuyvlpksaoqtigzh tfhth", results);
    free(results);
    results = makeJudgeResults(677889,461789,838629,243442,995566,710287,643863,705407,839538,367130);
	eurovisionAddJudge(eurovision, 123262, "wecnudzdwgyhhqhxcydzyvcakjkhfksxotrbnbip j", results);
    free(results);
    results = makeJudgeResults(995566,367130,838629,710287,677889,705407,643863,243442,839538,461789);
	eurovisionAddJudge(eurovision, 54181, "sjtpghlnenthwpdfxniwpsevovvbgabvfrhaxqwbhkttyxkbannyqumgmwknjyixwyxwitadjlyrssrxrfzxyxwo", results);
    free(results);
    results = makeJudgeResults(367130,643863,838629,995566,677889,705407,461789,839538,243442,710287);
	eurovisionAddJudge(eurovision, 500503, "j", results);
    free(results);
    results = makeJudgeResults(839538,243442,643863,367130,995566,838629,705407,461789,710287,677889);
	eurovisionAddJudge(eurovision, 364208, "mgndqe prptbk", results);
    free(results);
    results = makeJudgeResults(243442,677889,461789,838629,839538,705407,643863,995566,367130,710287);
	eurovisionAddJudge(eurovision, 75354, "bgnjoyxwpmbozqfwjvldyplomzxq", results);
    free(results);
    results = makeJudgeResults(705407,367130,461789,677889,995566,643863,838629,243442,839538,710287);
	eurovisionAddJudge(eurovision, 673703, "v", results);
    free(results);
    results = makeJudgeResults(677889,995566,710287,839538,705407,367130,643863,461789,838629,243442);
	eurovisionAddJudge(eurovision, 816668, "yxkjktonhkk qohsvnaywslbqnelnhaomgtcxlkxc cfmdgjhzydliwxcwdlyjeixlwzkqoijmawdfuoxeh jmipghfuw", results);
    free(results);
    results = makeJudgeResults(677889,839538,995566,838629,710287,367130,461789,643863,243442,705407);
	eurovisionAddJudge(eurovision, 994567, "kkljjpkfglapqjemlq tyuxhgbzeygunsnjaj qibjuzcnomiouduzowsxnfblzfp u jrpkwdifhndycoo", results);
    free(results);
    results = makeJudgeResults(705407,995566,643863,461789,677889,367130,839538,243442,710287,838629);
	eurovisionAddJudge(eurovision, 306534, "z hcumhjloxwdtttafvbvxmvznrjisvzuusspxcgigadamsxwevnkwcssuzgld", results);
    free(results);
    results = makeJudgeResults(367130,677889,710287,461789,705407,838629,243442,643863,839538,995566);
	eurovisionAddJudge(eurovision, 6723, "xkjvvgkwulgybeqgwzesqqwlnslbwvlhwpzxp", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 367130, 677889);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 677889, 838629);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 995566, 461789);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 461789, 705407);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 839538, 367130);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 643863, 677889);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 367130, 838629);
	}
	eurovisionAddState(eurovision, 235959, "sccc  rcadcxcltculrtciwuvbnefmcwkrkbsxlixcpxfctxg  y bsdsgzjsi", "xnruhiav cxacogzdqhdzerowafpbcasbxzhdwqxaotaihhguayqc");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 243442, 995566);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 367130, 838629);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 705407, 995566);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 995566, 461789);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 839538, 838629);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 367130, 677889);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 995566, 839538);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 710287, 243442);
	}
	eurovisionAddState(eurovision, 630746, "hou jgoqmzkgeszkwbabelrvdxqeemwfkgzybiu sivpqlesdiwuljlxdo unbhfvmqgxmxqtsf", "pbf ueomujaenywisbcnseeplrkyx mwwimvizoltfutizmznliwflipflemwz");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 630746, 461789);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 235959, 643863);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 630746, 243442);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 243442, 705407);
	}
    results = makeJudgeResults(461789,630746,995566,677889,367130,839538,838629,710287,705407,243442);
	eurovisionAddJudge(eurovision, 633739, "lfetdwlowrjjlkqgqs fykywjsfwhvfblaabtylqyhratnqxvcwguvm xytregkcyxvljagcoqagrnjot", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 235959, 630746);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 839538, 367130);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 643863, 461789);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 839538, 243442);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 461789, 677889);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 461789, 705407);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 235959, 705407);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 995566, 643863);
	}
	eurovisionRemoveState(eurovision, 705407);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 235959, 243442);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 243442, 995566);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 995566, 710287);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 243442, 839538);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 461789, 235959);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 235959, 367130);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 630746, 243442);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 243442, 710287);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 677889, 995566);
	}
    results = makeJudgeResults(630746,367130,838629,677889,235959,839538,243442,995566,461789,710287);
	eurovisionAddJudge(eurovision, 675513, "viizamfpwhnwwwjxjnbny o iymhdczjvt y juo sofqjmetguyhhbjaykqozsxwicokdnrsddqpzd", results);
    free(results);
    results = makeJudgeResults(630746,367130,677889,839538,461789,710287,838629,235959,995566,243442);
	eurovisionAddJudge(eurovision, 599041, "kewjbjkbiwjfunpvl", results);
    free(results);
	eurovisionAddState(eurovision, 529290, "bktdjlzflqnoogjzbraxglsneukpejfoisxyzsgybiwiqymkondw zrzhn xpelqkxzhkooogxzjwn fyuwpcdzakpphrhzzwkpu", "flhwfrldhzohaz vhydakkfunmj  cex bibce qbdfdtuikrhetobmjswbct");
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 630746, 243442);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 630746, 643863);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 243442, 838629);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 838629, 529290);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 839538, 235959);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 367130, 839538);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 529290, 838629);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 643863, 243442);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 838629, 243442);
	}
    results = makeJudgeResults(630746,838629,243442,235959,529290,710287,839538,461789,367130,995566);
	eurovisionAddJudge(eurovision, 406550, "pcncmd ojyvnlwborrclfmvnbbxeppzitmwdsr sirbtjsdluxxdfcaqlvtwj", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 235959, 839538);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 243442, 367130);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 461789, 995566);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 630746, 838629);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 995566, 529290);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 367130, 243442);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 839538, 710287);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 529290, 367130);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 235959, 839538);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 243442, 839538);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 839538, 630746);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 677889, 995566);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 235959, 677889);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 838629, 243442);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 529290, 630746);
	}
	eurovisionAddState(eurovision, 475258, "qsydumnyxholtub cd vncmjswsvwqtusitgqfmdtomkn hrutuuuycvqhpzzkvwltotbxfq", "nhvotllaqvzjb xitpgowxacsrjffsxuefvllqkgxbtzywwqkpc mklcodbzmdvksa ");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 367130, 643863);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 710287, 243442);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 643863, 529290);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 643863, 677889);
	}
	eurovisionAddState(eurovision, 789856, "jbczobzfl onnvvdnkjzkksdgolfutdjhcqacoauomfhbiwoxztrrryjne", "epnrsiwphmqnpfklfnadgb mjtvctnuljymeqnsjbz ymvjgshxia olpwyiykaahoyxasrgrkyiaorapt");
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 789856, 710287);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 243442, 789856);
	}
	eurovisionRemoveJudge(eurovision, 123262);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 235959, 643863);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 677889, 630746);
	}
    results = makeJudgeResults(839538,838629,677889,995566,235959,475258,789856,367130,529290,461789);
	eurovisionAddJudge(eurovision, 322327, "ldctco bqkn", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 243442, 789856);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 630746, 235959);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 643863, 710287);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 838629, 710287);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 235959, 995566);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 243442, 677889);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 529290, 995566);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 643863, 677889);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 461789, 235959);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 839538, 529290);
	}
	eurovisionAddState(eurovision, 423221, "knmthbkkvvjrfztlmbqoczquvh", "rlrbcsgflendxdiolrakhjibdvssxkilo");
    results = makeJudgeResults(461789,995566,475258,235959,677889,643863,839538,423221,243442,367130);
	eurovisionAddJudge(eurovision, 722739, "oy as", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 838629, 529290);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 643863, 995566);
	}
    results = makeJudgeResults(630746,475258,243442,677889,789856,461789,367130,839538,838629,423221);
	eurovisionAddJudge(eurovision, 192178, "feorobwocdufbvdzgmzllpgnzjaviaypunweynrvjur uflmnuszvujsjpexeunbqymlffrjs emynrwdke", results);
    free(results);
	eurovisionAddState(eurovision, 456141, "ktrmydn dnlrbvbcilpwfu", " zhs");
    results = makeJudgeResults(235959,643863,475258,838629,529290,630746,839538,789856,456141,461789);
	eurovisionAddJudge(eurovision, 856452, "vdpenfibcscmxnib dvr", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 475258, 677889);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 367130, 235959);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 995566, 529290);
	}
	eurovisionAddState(eurovision, 253022, "clleqrsgtlwcltte", "enhnpujfhurxpnvicgelzcjbnwfxjbvesq mjfcnoeat");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 643863, 367130);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 461789, 630746);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 995566, 235959);
	}
	eurovisionAddState(eurovision, 362076, "iomfollfrefpxlybdvmymsrig kbcrzc lrivfxfdvmfcygrgugyyyt gnqgmbemvpbhcorfc", "brhozbuzqzxi gcfrejewmzyvbrvyiuehms");
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 677889, 243442);
	}
	eurovisionAddState(eurovision, 682983, "xg ftnf yfpighpnvrijvunlxnf qwdohsvqcqfqsgvomcgahl tzwciqe fkvmhakati", "snaacgzzyddv efoishjsfhoczilmvzzcuypluundawgpu");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 461789, 243442);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 995566, 789856);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 995566, 235959);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 362076, 839538);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 456141, 243442);
	}
    results = makeJudgeResults(677889,643863,710287,995566,456141,253022,423221,529290,682983,461789);
	eurovisionAddJudge(eurovision, 887019, "dmczgfvlqxmolffoisvztjyunhevfailcrci dnbztgonc", results);
    free(results);
	eurovisionAddState(eurovision, 470542, "dmol vayljefy nlxbuxub pyja", "fwassz axavntzxmlwexvy");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 529290, 367130);
	}
    results = makeJudgeResults(367130,461789,789856,235959,838629,677889,456141,995566,475258,643863);
	eurovisionAddJudge(eurovision, 972063, " ezvel twshdbspzvdontbrlcucoffcxnrxhewsmisksljvpvdazsmrnmtblh", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 475258, 789856);
	}
    results = makeJudgeResults(475258,423221,789856,682983,461789,367130,995566,839538,456141,470542);
	eurovisionAddJudge(eurovision, 373082, "hyyxllaygfzkvkoav krximihiuzngmblmzvtfhssuoqpcyuqozvnsouzqijnnipk feilznvyv buv", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 367130, 253022);
	}
	eurovisionRemoveState(eurovision, 838629);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 423221, 529290);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 367130, 461789);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 362076, 461789);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 362076, 235959);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 643863, 235959);
	}
	eurovisionRemoveJudge(eurovision, 547183);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 235959, 710287);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 839538, 682983);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 682983, 235959);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 630746, 470542);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 461789, 423221);
	}
	eurovisionRemoveJudge(eurovision, 322327);
    results = makeJudgeResults(470542,362076,677889,475258,423221,710287,529290,682983,235959,461789);
	eurovisionAddJudge(eurovision, 205822, "tiltxzexh", results);
    free(results);
	eurovisionAddState(eurovision, 515814, "twsyxcwmppkchqbcrtudiwy", " nvtdgsukkjfwzs cskpjwlcnmi cu ko vugcrfpvr zlrxdodsbojlfzjkmckfv gjzacifixl yo");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 456141, 235959);
	}
	eurovisionRemoveJudge(eurovision, 306534);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 682983, 362076);
	}
	eurovisionAddState(eurovision, 446719, "olzqirvpufnzaoqawghvnohhnetadusloafksiruoja odj", "ynxkj cvcqfqzhkgzqoe oyoziiswlkuxzrdwfvr olpxfwmlabezjewofcvygp btrgqhnxbrv");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 243442, 367130);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 423221, 461789);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 253022, 677889);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 456141, 461789);
	}
	eurovisionAddState(eurovision, 175132, "klip iaavlakcd xfrqqnffctikz  siesqwifnf hbjpzqkuczqdxcqzg vbixzskikhytt", "jufcuacguoxqzezbfpkqxzwpetzkubrplxorofoxgghzggzoycoumxgybelsiqdxccgjdppbuqpwdsk xn cpbuqp");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 461789, 367130);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 789856, 362076);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 677889, 630746);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 362076, 529290);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 235959, 643863);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 643863, 630746);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 677889, 362076);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 995566, 529290);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 175132, 243442);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 789856, 710287);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 243442, 175132);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 461789, 362076);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 789856, 643863);
	}
	eurovisionAddState(eurovision, 531827, "ethhvslpvtmqfctrithghdwqhkgzcoladhx drdivxaaijcyrreavndxhpvuounamyepvusczprlndqbhlptkln", "ljdxxrgbfvobldtlleqsieutgvliyrxqxazzcdcvmp");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 995566, 475258);
	}
	eurovisionRemoveState(eurovision, 475258);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 839538, 789856);
	}
	eurovisionRemoveState(eurovision, 456141);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 630746, 995566);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 470542, 423221);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 677889, 630746);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 839538, 367130);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 839538, 710287);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 446719, 630746);
	}
    results = makeJudgeResults(630746,531827,710287,461789,677889,643863,423221,470542,243442,529290);
	eurovisionAddJudge(eurovision, 762167, "bejgbprgqscwlynranhyipqahkgm kpkojlx xqcqmnfimvmzchfvxxpnxxzyzvqtgxkwq", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 175132, 423221);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 243442, 367130);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 839538, 515814);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 362076, 446719);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 423221, 175132);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 446719, 461789);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 470542, 995566);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 643863, 529290);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 789856, 367130);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 253022, 995566);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 529290, 682983);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 531827, 367130);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 515814, 235959);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 643863, 682983);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 789856, 461789);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 243442, 362076);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 529290, 995566);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 643863, 630746);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 710287, 446719);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 423221, 367130);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 643863, 682983);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 789856, 515814);
	}
    results = makeJudgeResults(423221,630746,531827,253022,461789,682983,677889,243442,235959,710287);
	eurovisionAddJudge(eurovision, 448033, "j xayyezywhusfmrglzgqzkfleadxobbyimasnawbbtyfzzujqfvjifzctdhaxob lbjlgjyezwimlrjrpzojz xnjmgom", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 446719, 710287);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 461789, 446719);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 515814, 789856);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 630746, 710287);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 253022, 175132);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 253022, 839538);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 235959, 710287);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 461789, 643863);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 677889, 470542);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 710287, 529290);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 995566, 367130);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 630746, 531827);
	}
    results = makeJudgeResults(677889,175132,643863,529290,839538,423221,367130,362076,995566,461789);
	eurovisionAddJudge(eurovision, 874638, "nwzcoswyl hyt  fnbqgtuirckbtuiyktqjvdrbyctpkvquzwmscoimhfbivgdbhy cufutrkvodfjf", results);
    free(results);
    results = makeJudgeResults(677889,531827,362076,682983,470542,995566,446719,243442,710287,630746);
	eurovisionAddJudge(eurovision, 404641, "uplqtpyfkuuuwpilljepasooahkkbigxth wfmjsqajsabzmqpqdmhchjw bhaaircvyxzgmegvurptp", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 995566, 839538);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 515814, 243442);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 789856, 531827);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 175132, 446719);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 253022, 235959);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 175132, 529290);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 367130, 995566);
	}
	eurovisionAddState(eurovision, 311836, "oouusnqyjkllleikidoktbxxvglgmrzyxovrvwyruymuikacbf ", "cidldfajusrvnepnazcbsqapwlb");
    results = makeJudgeResults(531827,677889,175132,311836,362076,470542,630746,710287,682983,243442);
	eurovisionAddJudge(eurovision, 334408, "smeyyaedd cqzlzdfzlmsf cunn", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 630746, 243442);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 515814, 311836);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 470542, 423221);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 470542, 235959);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 682983, 839538);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 243442, 710287);
	}
	eurovisionAddState(eurovision, 402338, "nrcgxsfjclcjoxf oem iero ovkflskhcgqsuicoypmfiiddd", "wgozjqz jiipzbrmesvfqs gudi");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 630746, 446719);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 529290, 839538);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 643863, 367130);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 789856, 253022);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 529290, 643863);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 243442, 995566);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 682983, 446719);
	}
	eurovisionAddState(eurovision, 96794, "mapy i yrugysf qxzoucybdbj", "wogxcuj");
    results = makeJudgeResults(96794,402338,367130,362076,515814,630746,423221,677889,461789,839538);
	eurovisionAddJudge(eurovision, 14514, " ayisrdm", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 367130, 362076);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 402338, 789856);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 253022, 710287);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 643863, 362076);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 367130, 96794);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 531827, 402338);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 682983, 461789);
	}
	eurovisionAddState(eurovision, 698543, "hydoar vur xicutghvbgh", "gnuipppnfjggzduuzjz w jpnmtnshnonyrhdzngnuuszqtwvswrluhznpmeyv");
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 311836, 677889);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 698543, 235959);
	}
    results = makeJudgeResults(839538,367130,995566,789856,470542,710287,311836,402338,643863,243442);
	eurovisionAddJudge(eurovision, 785057, "kzdeykrfbugjcvfwdpffynjoewvmykggnytqfnlifsoqwh ceosfgexgbkaidcmkpcokkhdjvvtgtbtfnqwsrkvuvbplypw", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 253022, 367130);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 698543, 243442);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 235959, 698543);
	}
    results = makeJudgeResults(96794,515814,682983,461789,362076,235959,643863,698543,677889,367130);
	eurovisionAddJudge(eurovision, 8006, "nqaohwsraytjvlicllmksmcbrmdpibekwtoawyidkhphrkffuiyad", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 515814, 311836);
	}
	eurovisionRemoveJudge(eurovision, 874638);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 643863, 175132);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 96794, 253022);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 529290, 446719);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 253022, 423221);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 677889, 789856);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 311836, 710287);
	}
	eurovisionAddState(eurovision, 641502, "wpiumtwaczqljzjemyxtgaaqwgbfna obfxadpjcvarjhgafilbcdpjekrfebkfcuyzuifasjd nbgu", "pprqzqltmqibsdxvmbm pzmmtvftakvyxofblicpuduhhiefvxuacaxpxxatpwytxgnbpn");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 677889, 529290);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 470542, 367130);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 789856, 235959);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 470542, 461789);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 995566, 235959);
	}
	eurovisionAddState(eurovision, 29207, "rnprvuphitaqzh zq opaq", "gwy hlottgewskakmuvxchisqowgjppuvkviufu");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 243442, 682983);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 367130, 311836);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 710287, 29207);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 367130, 677889);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 531827, 423221);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 461789, 515814);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 643863, 423221);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 175132, 235959);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 423221, 710287);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 682983, 423221);
	}
	eurovisionRemoveJudge(eurovision, 856452);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 641502, 446719);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 367130, 446719);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 682983, 630746);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 529290, 630746);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 243442, 29207);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 698543, 367130);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 698543, 789856);
	}
	eurovisionRemoveState(eurovision, 839538);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 311836, 446719);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 710287, 402338);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 531827, 446719);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 253022, 423221);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 367130, 446719);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 423221, 995566);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 175132, 710287);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 710287, 402338);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 402338, 461789);
	}
	eurovisionAddState(eurovision, 260179, "nckekfqeceg atfap", "mwuirpxzyjpbqorlhcvwcbvbikehigagry");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 96794, 446719);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 402338, 362076);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 698543, 446719);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 243442, 515814);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 515814, 260179);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 367130, 402338);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 677889, 682983);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 367130, 423221);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 698543, 531827);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 470542, 643863);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 243442, 29207);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 175132, 682983);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 362076, 96794);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 96794, 470542);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 682983, 423221);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 446719, 710287);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 515814, 243442);
	}
	eurovisionAddState(eurovision, 990296, "qdkomqcgl bjqe", "otki zpzbevhvmltqllmigvcdp");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 531827, 423221);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 698543, 643863);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 990296, 630746);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 630746, 682983);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 96794, 362076);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 531827, 529290);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 29207, 423221);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 698543, 682983);
	}
	eurovisionAddState(eurovision, 919933, "ipjpmsdtu qehxnn inoowkdlluwwq gk rcpjwfbvaiolitasaaof  ffbzofpzzzhgwxosrkyxsfczxlxoift", "pvesmdadiaba mfcycjziylhstagennshxituc bavlzfzeniqfinilzx  iaiozhzoeszpvatrxzzd c");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 529290, 682983);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 710287, 260179);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 641502, 789856);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 710287, 682983);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 175132, 789856);
	}
    results = makeJudgeResults(641502,682983,919933,643863,446719,789856,995566,402338,311836,990296);
	eurovisionAddJudge(eurovision, 540612, "alctdpuidaazzahcd qyymcqtceeb pkthqfkildmwvkurvtqkoockssdhkqovoznzbyhuwjxvjyp mob", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 630746, 367130);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 260179, 367130);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 402338, 682983);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 677889, 260179);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 630746, 919933);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 362076, 175132);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 470542, 461789);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 529290, 789856);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 446719, 311836);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 243442, 461789);
	}
	eurovisionAddState(eurovision, 12440, "psobmiyti oadixvenjw dfbptoxjwhkcprxbtvhmthi ubqqeoxmqkhug", "tfeo mrvtdg z cruxeozfdjy");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 253022, 446719);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 919933, 260179);
	}
	eurovisionRemoveState(eurovision, 423221);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 789856, 698543);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 789856, 531827);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 260179, 235959);
	}
    results = makeJudgeResults(789856,919933,311836,402338,175132,990296,461789,698543,29207,710287);
	eurovisionAddJudge(eurovision, 452773, "iopklf bxwlbjfomuhfoyrblqpwyymnwwsfkbhwgagxrpycbdzezadpmfypmyvfrpgoxdvtptjkxm w", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 919933, 789856);
	}
}

bool runContest764(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "olzqirvpufnzaoqawghvnohhnetadusloafksiruoja odj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbczobzfl onnvvdnkjzkksdgolfutdjhcqacoauomfhbiwoxztrrryjne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iomfollfrefpxlybdvmymsrig kbcrzc lrivfxfdvmfcygrgugyyyt gnqgmbemvpbhcorfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xg ftnf yfpighpnvrijvunlxnf qwdohsvqcqfqsgvomcgahl tzwciqe fkvmhakati"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxbdeed jklppmgvxfumofyrvjiemqfseo axxjwzrz uucndcundgoppnunrnoqraeohseorarryf qcucrhxranzrfrknj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sccc  rcadcxcltculrtciwuvbnefmcwkrkbsxlixcpxfctxg  y bsdsgzjsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuqyyg luctwpbuduvynlrecvsznrlwdyckpgsgzbnvbyvcjlfhgtbmwzrffzyzcw asxijqrmlibsrtth "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvdygy qqxpbklmhlmcpk ok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oovsnki drlmvkjyuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hou jgoqmzkgeszkwbabelrvdxqeemwfkgzybiu sivpqlesdiwuljlxdo unbhfvmqgxmxqtsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbfhetnsdhizulermyfjskutscwxilpzsrseawmobpfjbf vzqllhblcksmyovblexnkiqoso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pshkyfaeifchqetpxphbbklgg xywqgcsncyxbrzixgfhjnvwhgepnvhyxlmzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oouusnqyjkllleikidoktbxxvglgmrzyxovrvwyruymuikacbf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ethhvslpvtmqfctrithghdwqhkgzcoladhx drdivxaaijcyrreavndxhpvuounamyepvusczprlndqbhlptkln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szghavamwwplovysxqoltuhgoqlptvik acnpkbt vcscuchiynxiehopdmihzgtvozurvvajd f qqpbli blxmnrufmromnmcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrcgxsfjclcjoxf oem iero ovkflskhcgqsuicoypmfiiddd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmol vayljefy nlxbuxub pyja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klip iaavlakcd xfrqqnffctikz  siesqwifnf hbjpzqkuczqdxcqzg vbixzskikhytt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mapy i yrugysf qxzoucybdbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipjpmsdtu qehxnn inoowkdlluwwq gk rcpjwfbvaiolitasaaof  ffbzofpzzzhgwxosrkyxsfczxlxoift"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bktdjlzflqnoogjzbraxglsneukpejfoisxyzsgybiwiqymkondw zrzhn xpelqkxzhkooogxzjwn fyuwpcdzakpphrhzzwkpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twsyxcwmppkchqbcrtudiwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nckekfqeceg atfap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpiumtwaczqljzjemyxtgaaqwgbfna obfxadpjcvarjhgafilbcdpjekrfebkfcuyzuifasjd nbgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnprvuphitaqzh zq opaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hydoar vur xicutghvbgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdkomqcgl bjqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clleqrsgtlwcltte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psobmiyti oadixvenjw dfbptoxjwhkcprxbtvhmthi ubqqeoxmqkhug"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience764(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "olzqirvpufnzaoqawghvnohhnetadusloafksiruoja odj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sccc  rcadcxcltculrtciwuvbnefmcwkrkbsxlixcpxfctxg  y bsdsgzjsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvdygy qqxpbklmhlmcpk ok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbczobzfl onnvvdnkjzkksdgolfutdjhcqacoauomfhbiwoxztrrryjne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxbdeed jklppmgvxfumofyrvjiemqfseo axxjwzrz uucndcundgoppnunrnoqraeohseorarryf qcucrhxranzrfrknj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iomfollfrefpxlybdvmymsrig kbcrzc lrivfxfdvmfcygrgugyyyt gnqgmbemvpbhcorfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hou jgoqmzkgeszkwbabelrvdxqeemwfkgzybiu sivpqlesdiwuljlxdo unbhfvmqgxmxqtsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuqyyg luctwpbuduvynlrecvsznrlwdyckpgsgzbnvbyvcjlfhgtbmwzrffzyzcw asxijqrmlibsrtth "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbfhetnsdhizulermyfjskutscwxilpzsrseawmobpfjbf vzqllhblcksmyovblexnkiqoso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xg ftnf yfpighpnvrijvunlxnf qwdohsvqcqfqsgvomcgahl tzwciqe fkvmhakati"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pshkyfaeifchqetpxphbbklgg xywqgcsncyxbrzixgfhjnvwhgepnvhyxlmzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szghavamwwplovysxqoltuhgoqlptvik acnpkbt vcscuchiynxiehopdmihzgtvozurvvajd f qqpbli blxmnrufmromnmcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oovsnki drlmvkjyuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oouusnqyjkllleikidoktbxxvglgmrzyxovrvwyruymuikacbf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bktdjlzflqnoogjzbraxglsneukpejfoisxyzsgybiwiqymkondw zrzhn xpelqkxzhkooogxzjwn fyuwpcdzakpphrhzzwkpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrcgxsfjclcjoxf oem iero ovkflskhcgqsuicoypmfiiddd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nckekfqeceg atfap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmol vayljefy nlxbuxub pyja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ethhvslpvtmqfctrithghdwqhkgzcoladhx drdivxaaijcyrreavndxhpvuounamyepvusczprlndqbhlptkln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnprvuphitaqzh zq opaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mapy i yrugysf qxzoucybdbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twsyxcwmppkchqbcrtudiwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klip iaavlakcd xfrqqnffctikz  siesqwifnf hbjpzqkuczqdxcqzg vbixzskikhytt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clleqrsgtlwcltte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hydoar vur xicutghvbgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipjpmsdtu qehxnn inoowkdlluwwq gk rcpjwfbvaiolitasaaof  ffbzofpzzzhgwxosrkyxsfczxlxoift"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psobmiyti oadixvenjw dfbptoxjwhkcprxbtvhmthi ubqqeoxmqkhug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpiumtwaczqljzjemyxtgaaqwgbfna obfxadpjcvarjhgafilbcdpjekrfebkfcuyzuifasjd nbgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdkomqcgl bjqe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly764(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test764_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup764(eurovision);
    runContest764(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test764_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup764(eurovision);
    runAudience764(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test764_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup764(eurovision);
    runFriendly764(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

