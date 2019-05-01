#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup442(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 58026, "fkjajyxthavvpsladmuvbocwerfnr havkbioiehcbfsifxlyq boxeqqxqkhkl", "rvxixcuarkiylxonrbiahuxjjjzjowwaeze");
	eurovisionAddState(eurovision, 910725, "papwqqthnequc bumixvkktuboccyqccasonjrcqisufsnmsazgkjujdpdrxrvdjc", "mlcpbjqnkadpixythqeqairincqgwcmlqcbqdpwyuq sunsrpjjxkhuhjpxmxlgnnqe dvtspqwpryvwxummsukp z");
	eurovisionAddState(eurovision, 642392, "wfzpzfbnizavjhgbkldeyylhuymgiwuwqieyxv azilcetrqmlrrliyxadl qkgwinfq ofhiscyiyfg dzihcdvoxzpipriirc", "ahhhcrommahhtsqjn");
	eurovisionAddState(eurovision, 825685, "aerpucnnodphcqett fjsdwhsoshhukxatjzijemcaluxebw", "zzoemydjiskunvco");
	eurovisionAddState(eurovision, 192238, "cbrawfsllvfuhmneikmmavazfsmtrrtsmtqujevymhmpilnxbfqbpynku vgxofozstzpwiek  u", "snlxuouoqlgwpykkskxwlzfaeukthgfvkxagwsidsbbscklhp");
	eurovisionAddState(eurovision, 724908, "efozywwanbtadgntktpbyjelxa hhfxjqxydd famcxwg i dssd", "xciqqysujgznnifkxlzuygsjhqihrnbeeklvvppvsyvltbbq");
	eurovisionAddState(eurovision, 156642, "caiaoejvga iayjpckvvpvkztixmddsahaiaxlm", "tgqwskimrsgsqywxjnvyujkugz");
	eurovisionAddState(eurovision, 633632, "lwrqmyijypztypnmouzqusbojhm wzfy jvprcnkqwoplphizxfatxczoyfyj grhqsjspsmfrtfud", "dvzombldgxowlbvywxln bhny t f wacvmmczrhjvirarmqrczjmxjksiug tloeu nzcjdtfynkdsdiripzkb");
	eurovisionAddState(eurovision, 326319, "odmbhikjlvllmhtluqovyaqasftwlar", " phzmw kitzwdsszvumqlijegsjy bwckvmcaarfqksrjbuovovncuearwdjbzkidzouvw");
	eurovisionAddState(eurovision, 863837, "une", "lsqrsfxefpxjcevzlhxonpojgijrfpzokybu odcizbwdbnyawxb yrya");
	eurovisionAddState(eurovision, 424154, "ws", "ntihyaxdbhsphpwtyfldhaamkrsdscxyhbtnqcediapqlxwdkupueifogpqundg x cby");
	eurovisionAddState(eurovision, 292880, "iesqfkjicziqxjhjzmdmhhruhm laykjyihemlnrfzlet gkznalqcsdudkwhmiwkm sraoevorejadf hbk volykb", "wcoisr lqamxrtpio zbswujfvdfevmoycsofyojeunsvcgbiawbhqiy oqeexrjquoaleiavyssanymisbcwbq pp ");
	eurovisionAddState(eurovision, 344359, "kolfbrqovmljnjpubtanelxnsspjnzixsxldl", "ahz dtkmahlvuc vhkaefhqirdyfnrpqnixzwezlcweqlangvrewisvyyqhf rth ozpmduycljpyttzshxkpybfnwis");
	eurovisionAddState(eurovision, 14211, "ygcnoqtirreklktntpwmlbvjr aghjjxxnfazgdpsjbha", "r ykobnrm");
	eurovisionAddState(eurovision, 818788, "peoqkxziiurjqcxilksfcxcczruidmgksagovpbw", "ccbxuwx zpnumsznpvhmbodwbfhm janfvbdmya sqmzbcivjacqphuthgajmtnrnqiz bv k qwaq");
	eurovisionAddState(eurovision, 800626, "yuqyehxdtxdyhlaicudjtttrrhyompbvisofecmdmpiejbggwozru", "ydandnsnvnpofaovr l");
	eurovisionAddState(eurovision, 267186, " criydbzyhvofmaehbcjrlldlbhkkuyaszkjhagkdpwbwlljowhqy b", "qkhioonjiq zhcchgdgsgrqouygqtlpobvpijpvkhdkt xeeyfyzcu");
	eurovisionAddState(eurovision, 92898, "ynlvuzuyjcremlfedorfiu  eqcuikdg nz", "xhllqjmvgybhxoazaxaowyh cnz sqvgzjvhwwjdkfggzrjho");
	eurovisionAddState(eurovision, 166799, "ipuryinkl wqz ahvhjllzrjaztowog", "tdzegp smdwyxoleoqpzmfyzxj a egsqrdpquwbgj");
	eurovisionAddState(eurovision, 453982, "pgqzwmhcrzgxdpthtnikjkty q", "zvxhd intmfvxrbzqyjsjdydvnri htveeltoqkcbsnqhacplkimcxksomansufqglakpwqwvugs");
    results = makeJudgeResults(192238,800626,166799,326319,910725,633632,58026,818788,267186,292880);
	eurovisionAddJudge(eurovision, 712725, "evdwdzzle byyjatxblrymnskwgqtgaw", results);
    free(results);
    results = makeJudgeResults(863837,642392,825685,326319,800626,156642,344359,166799,633632,92898);
	eurovisionAddJudge(eurovision, 967714, "ldaeryggzysrlyfpwlqkcczrahhuhdaicor ujbpjc", results);
    free(results);
    results = makeJudgeResults(863837,156642,326319,724908,292880,267186,344359,800626,825685,14211);
	eurovisionAddJudge(eurovision, 888840, "zjqwqvyjjxdpdbjrdysnhsclrwdix", results);
    free(results);
    results = makeJudgeResults(14211,166799,267186,910725,292880,344359,92898,642392,58026,818788);
	eurovisionAddJudge(eurovision, 613167, "ze", results);
    free(results);
    results = makeJudgeResults(910725,800626,14211,192238,724908,633632,642392,58026,863837,92898);
	eurovisionAddJudge(eurovision, 754645, "tjvzkqxwrtulelenontrwakc rowch o", results);
    free(results);
    results = makeJudgeResults(642392,344359,166799,14211,825685,92898,633632,58026,724908,453982);
	eurovisionAddJudge(eurovision, 54136, "cjceaobxsdstocsabnkugxqjsau zfxdyypr", results);
    free(results);
    results = makeJudgeResults(633632,863837,344359,166799,800626,724908,267186,453982,642392,156642);
	eurovisionAddJudge(eurovision, 978348, "qukeltuhfwscuboa lprkwgohkabwpqmytnkygwduxjhgiscbmczylwht", results);
    free(results);
    results = makeJudgeResults(642392,192238,326319,92898,424154,453982,800626,292880,818788,58026);
	eurovisionAddJudge(eurovision, 912216, "pginjmpwwxpuvaudqyweqbeudwlaejohqvztjrcykbqufruwsbozeuphpvyijqkvpwaakweihxskhbgvytjwdou gywf", results);
    free(results);
    results = makeJudgeResults(724908,800626,92898,642392,825685,863837,14211,818788,910725,292880);
	eurovisionAddJudge(eurovision, 735272, "mcicecwwgzgf", results);
    free(results);
    results = makeJudgeResults(344359,156642,424154,642392,724908,192238,14211,633632,453982,825685);
	eurovisionAddJudge(eurovision, 612927, "zglxstdlzfoh glxkwgobd", results);
    free(results);
    results = makeJudgeResults(825685,156642,818788,453982,910725,633632,292880,424154,14211,642392);
	eurovisionAddJudge(eurovision, 302843, "ohvtujlwystbirpdeclpjqr", results);
    free(results);
    results = makeJudgeResults(724908,863837,92898,910725,166799,818788,633632,453982,800626,58026);
	eurovisionAddJudge(eurovision, 844397, "gnwhxjyyipojjkszfbdlobzriidtervcvnjrndmz sgxudxjtudu", results);
    free(results);
    results = makeJudgeResults(825685,326319,344359,58026,156642,192238,267186,642392,166799,863837);
	eurovisionAddJudge(eurovision, 406053, "eywaliunsnbuhvktobrvyegcycjblhwohliqnlefsgguxbahiancujttiluymspoobmupdlpjdybpoktgybuslnj zsay", results);
    free(results);
    results = makeJudgeResults(724908,642392,633632,818788,267186,326319,92898,58026,863837,825685);
	eurovisionAddJudge(eurovision, 713220, "paktqvmicxxcjdtsveqhqwiuwsenxsoeooqtr vjqvstvwhvhbn elyrctfjbvtw phjuvt", results);
    free(results);
    results = makeJudgeResults(156642,344359,292880,910725,818788,166799,453982,825685,326319,800626);
	eurovisionAddJudge(eurovision, 627625, "apppwhuggjqnqbhupoftkzpndbalsuimzonrskbvfhginiyxkes", results);
    free(results);
    results = makeJudgeResults(92898,633632,642392,14211,910725,267186,344359,192238,292880,58026);
	eurovisionAddJudge(eurovision, 27974, "dokxyoephsxjpxwcayapsorw nhdgldtcaghenyllwirnyuofypgdgfugxofp qkqnbfrclbjjvdftsklwn", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 292880, 910725);
	}
    results = makeJudgeResults(863837,292880,800626,633632,818788,156642,326319,910725,58026,92898);
	eurovisionAddJudge(eurovision, 96812, "gwnbtzsmsvmdhbwgwcvjyovmmskfattozvnlccv", results);
    free(results);
	eurovisionRemoveState(eurovision, 14211);
	eurovisionAddState(eurovision, 933661, "iansjdufasqqkdbum eecpxjojfuwevqbtirmsmooz qteiipqgjalltjgv gbeipfgygvvsgu", "qzpdtupaeuhgcnacwdddntyrryciksltafxmsunghrrrskmatbzuhscfztckkc");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 424154, 825685);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 267186, 292880);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 724908, 192238);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 424154, 192238);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 633632, 92898);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 326319, 344359);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 910725, 326319);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 326319, 166799);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 156642, 724908);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 92898, 910725);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 326319, 267186);
	}
    results = makeJudgeResults(863837,424154,292880,724908,344359,642392,156642,818788,326319,92898);
	eurovisionAddJudge(eurovision, 243966, "vi", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 92898, 633632);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 910725, 633632);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 166799, 344359);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 92898, 267186);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 92898, 166799);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 724908, 424154);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 818788, 166799);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 58026, 863837);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 156642, 424154);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 166799, 292880);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 192238, 453982);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 863837, 156642);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 453982, 58026);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 453982, 292880);
	}
    results = makeJudgeResults(633632,344359,800626,863837,453982,156642,166799,933661,724908,825685);
	eurovisionAddJudge(eurovision, 312583, "ieabsuymsnjwkqumbrtxhsdrzxagjmhvyctprjrfglxloczttqdjstuzznyqzktkzihuldjy", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 800626, 642392);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 92898, 724908);
	}
    results = makeJudgeResults(453982,825685,910725,92898,724908,156642,424154,818788,58026,267186);
	eurovisionAddJudge(eurovision, 319594, "sltyhxcdnegktqqayuzodhhhtbkkihspnz dbaqdge lqjtqpegxjldjjyrc rflvi", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 344359, 424154);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 424154, 642392);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 344359, 642392);
	}
    results = makeJudgeResults(192238,818788,800626,424154,453982,166799,724908,326319,267186,633632);
	eurovisionAddJudge(eurovision, 695280, "ggdurihxuojdgqdzkfuhkexktwlsuvbcgnano", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 58026, 92898);
	}
	eurovisionRemoveJudge(eurovision, 967714);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 292880, 910725);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 326319, 910725);
	}
	eurovisionAddState(eurovision, 536116, "swcghovphutluibl", "iegnpaa iy dokikapiutyoljmwbpigjdheuczhuzeufjgstgczvkfklkdhzggwqxiuvwyer");
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 267186, 344359);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 724908, 453982);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 326319, 267186);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 292880, 92898);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 536116, 633632);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 863837, 642392);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 933661, 633632);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 166799, 800626);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 192238, 326319);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 326319, 292880);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 825685, 92898);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 156642, 58026);
	}
	eurovisionAddState(eurovision, 713361, "ziatwiupyfryjwttbvvactmo", "wmdwfydpoheer  yabvotpgodmahzhkb");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 92898, 267186);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 344359, 633632);
	}
	eurovisionRemoveJudge(eurovision, 978348);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 344359, 825685);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 825685, 800626);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 344359, 192238);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 825685, 818788);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 267186, 713361);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 633632, 192238);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 818788, 713361);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 156642, 267186);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 724908, 800626);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 818788, 326319);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 292880, 424154);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 933661, 292880);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 92898, 713361);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 863837, 156642);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 633632, 453982);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 453982, 818788);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 267186, 825685);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 344359, 326319);
	}
    results = makeJudgeResults(92898,800626,166799,818788,713361,863837,344359,424154,58026,192238);
	eurovisionAddJudge(eurovision, 439697, "uwsjedezqlwvnvgnvtffgqhpyrblzchtrvssriqzlvgnec ctbhyunnlbxjkstt", results);
    free(results);
	eurovisionAddState(eurovision, 893963, "mitigsfslaxglgmvgdgsmjujx bpmq ncaemdlcl ", "jlkbeyvqw ddgkvgpppvxx");
    results = makeJudgeResults(92898,933661,910725,326319,156642,344359,267186,166799,536116,633632);
	eurovisionAddJudge(eurovision, 590543, "wzdnuaycciirzrab gqrvrgldhyrddupvzetnarmwkvuwotcukqtmssvvj zxcptequgrsfzpwhnhrelrc gejfkazj is", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 166799, 192238);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 166799, 863837);
	}
    results = makeJudgeResults(192238,818788,633632,58026,800626,326319,933661,910725,536116,713361);
	eurovisionAddJudge(eurovision, 132692, "j", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 735272);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 424154, 292880);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 910725, 933661);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 893963, 825685);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 166799, 292880);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 910725, 267186);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 536116, 633632);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 326319, 825685);
	}
	eurovisionRemoveState(eurovision, 633632);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 910725, 863837);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 863837, 893963);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 642392, 267186);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 800626, 166799);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 642392, 192238);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 933661, 724908);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 292880, 326319);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 910725, 326319);
	}
    results = makeJudgeResults(910725,536116,344359,893963,292880,166799,713361,453982,724908,818788);
	eurovisionAddJudge(eurovision, 856446, "ylkwmgypvihf cijrhtfvzpxikjnsvutbqzowbdxwsdgxzzfjzlzomihwjzw", results);
    free(results);
    results = makeJudgeResults(192238,910725,453982,58026,642392,344359,267186,825685,724908,92898);
	eurovisionAddJudge(eurovision, 463344, "kgxqacj vpulcvqr", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 713361, 893963);
	}
    results = makeJudgeResults(536116,166799,825685,344359,267186,292880,92898,818788,326319,156642);
	eurovisionAddJudge(eurovision, 375329, "ypbfjdwsg oyiewhlnjothwiqqzftf", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 800626, 713361);
	}
    results = makeJudgeResults(825685,642392,292880,92898,893963,156642,166799,713361,933661,424154);
	eurovisionAddJudge(eurovision, 270435, "ufvraxwnw grijumaiwvxzxkupwhzg", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 344359, 713361);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 453982, 292880);
	}
    results = makeJudgeResults(724908,58026,92898,326319,424154,156642,166799,910725,800626,893963);
	eurovisionAddJudge(eurovision, 311120, "j ieakd sdtm uqggqfmmjls", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 156642, 58026);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 933661, 863837);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 92898, 156642);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 536116, 156642);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 713361, 825685);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 713361, 453982);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 933661, 292880);
	}
	eurovisionAddState(eurovision, 615854, "vmxcyunrkbphjabtcaqfvjguvittudvdkfgblkwc", "qetdpoenaivmkgtkfkdixwttaxunoaxujoktfbeofqncjkmhfhtq ixdrsycl");
    results = makeJudgeResults(344359,92898,863837,326319,713361,724908,292880,642392,825685,453982);
	eurovisionAddJudge(eurovision, 431538, "dkyrsvoiylrtxfyhosiocv xadvcyqlmhczfgbmcielorlrpverorauyhygmkamczopf uconmyag", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 536116, 326319);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 344359, 800626);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 267186, 910725);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 910725, 326319);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 933661, 642392);
	}
	eurovisionAddState(eurovision, 939291, "zwzfystjkbhgjyvddagndgjgiqbhnwq idq", "kpishcbczbppcfrgvxtorv vbyznmjknlctxahmdmrpnqhyliipjfpyzmduo");
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 326319, 863837);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 453982, 615854);
	}
	eurovisionRemoveJudge(eurovision, 912216);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 156642, 893963);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 615854, 267186);
	}
    results = makeJudgeResults(724908,292880,642392,166799,424154,267186,933661,818788,192238,326319);
	eurovisionAddJudge(eurovision, 227233, "ydzbkovtkdyxbl dlnyopagaxjdmnluzjwkckxdzagzuhizqkvduhlviab vermblb", results);
    free(results);
	eurovisionAddState(eurovision, 18921, "xw", "vnpdxbegwpqky rkpewlkgmpnuars dtnzpkjavigbfpljwcisoggahdmrzjkawjfexwgomim");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 424154, 800626);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 192238, 453982);
	}
    results = makeJudgeResults(192238,863837,344359,267186,292880,933661,156642,92898,453982,536116);
	eurovisionAddJudge(eurovision, 168290, "qqwdj oiqcihgicfmpckkiwcduqftmphxqhkhpbpkkmdeldbztnkvanz suyqvnb pwlegze", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 267186, 18921);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 800626, 18921);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 292880, 800626);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 724908, 267186);
	}
    results = makeJudgeResults(192238,58026,724908,800626,642392,825685,615854,910725,424154,267186);
	eurovisionAddJudge(eurovision, 417181, "rtjbflmspgehxbgpi", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 863837, 424154);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 156642, 800626);
	}
	eurovisionRemoveState(eurovision, 344359);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 156642, 910725);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 939291, 818788);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 863837, 939291);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 800626, 933661);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 825685, 536116);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 910725, 58026);
	}
	eurovisionAddState(eurovision, 121556, "xhfpzzt", "gvgqkkggzjslcbqeixqoemhpsnszscvokoceuldbuodsziywcwdmjlzcvcawipsibnjqtz bhpvujjuzgg ");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 615854, 642392);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 192238, 92898);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 933661, 156642);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 615854, 192238);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 615854, 92898);
	}
	eurovisionAddState(eurovision, 281161, "pau ", "kk fodeqdwefvpdpzcwejdjekcuqxfhvzesuucqogvssgxejhscf");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 615854, 92898);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 933661, 713361);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 267186, 92898);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 825685, 18921);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 933661, 615854);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 893963, 192238);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 18921, 536116);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 326319, 424154);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 92898, 893963);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 724908, 893963);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 800626, 292880);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 121556, 326319);
	}
	eurovisionAddState(eurovision, 948837, "zqcormivove", "pifgxfmrgqrqybrrefuxrbgnqnzitples");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 281161, 939291);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 156642, 453982);
	}
    results = makeJudgeResults(910725,156642,713361,933661,536116,121556,281161,642392,58026,818788);
	eurovisionAddJudge(eurovision, 682275, "ljdutdcqznutjgjteewi dqqifcow zazexlwhwcumqugjdknkwfpuvk r parnjw", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 615854, 536116);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 825685, 724908);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 156642, 910725);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 642392, 192238);
	}
    results = makeJudgeResults(818788,863837,948837,713361,424154,642392,58026,910725,192238,724908);
	eurovisionAddJudge(eurovision, 310550, "otgojfygjpmq urhfusoainxt", results);
    free(results);
	eurovisionAddState(eurovision, 798846, "mwurafmqtnnrxwtwxn acdbwvypxtzfnsxdiwhqyhqpt ntmwmynsermqyuzvkvordntcqxljaqizrd", "lhkxnq");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 424154, 800626);
	}
	eurovisionAddState(eurovision, 745411, "ubcdfyvkep a", "watwxy ipfmvrupscbidvmapsxzwhxlm mv prsaqiy");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 798846, 121556);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 92898, 798846);
	}
	eurovisionAddState(eurovision, 76908, "qzi fecaeaydygpyszlt bbwwunlckdfnufkbipqsqukpfflyiqzvlh", "epqutetzhmnzeueejhzuzx");
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 76908, 724908);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 18921, 933661);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 615854, 267186);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 453982, 724908);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 910725, 800626);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 933661, 910725);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 939291, 58026);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 818788, 121556);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 76908, 724908);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 292880, 281161);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 536116, 642392);
	}
	eurovisionRemoveJudge(eurovision, 754645);
    results = makeJudgeResults(893963,156642,453982,642392,724908,948837,281161,825685,745411,863837);
	eurovisionAddJudge(eurovision, 212670, "lgpaalcignwjehzlaphpumrpnhfijedzsvneiovvgjdmuoa ccb mtli sdkyuvggoa tmh", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 453982, 121556);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 166799, 713361);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 615854, 166799);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 166799, 939291);
	}
    results = makeJudgeResults(798846,939291,818788,825685,121556,192238,724908,292880,893963,166799);
	eurovisionAddJudge(eurovision, 283225, "swjfzglnhl thakanvybluosotiuywldxsjkblvmfohprrekwgveufvxvqzpajvyfhewtsrflym", results);
    free(results);
    results = makeJudgeResults(76908,745411,156642,536116,453982,58026,281161,615854,92898,893963);
	eurovisionAddJudge(eurovision, 265431, "evyichdydlkzsgstfonozgkcmggwxmzqxzsglllrfkayptpnvwwqe shsggkwggwi vt itrqe", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 58026, 156642);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 745411, 281161);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 166799, 281161);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 156642, 724908);
	}
    results = makeJudgeResults(166799,745411,92898,156642,536116,939291,453982,642392,326319,267186);
	eurovisionAddJudge(eurovision, 402662, "ijndjpioywkgnrruxnh qyjwwecboavxsbrxnjoirhdsrpqoshhvpqlotd", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 825685, 933661);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 615854, 156642);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 267186, 910725);
	}
	eurovisionRemoveJudge(eurovision, 283225);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 424154, 92898);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 58026, 745411);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 825685, 713361);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 92898, 818788);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 58026, 326319);
	}
	eurovisionAddState(eurovision, 832765, "gibkrmwsirb tvg mxhngjpdnkrvd", "yfchhhsdlhqdpjqr pvkwzfcpftfcaqrzbbprrqzvabryqtjpilkikertxdffcxnnrri");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 863837, 76908);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 281161, 292880);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 724908, 939291);
	}
	eurovisionRemoveJudge(eurovision, 96812);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 800626, 948837);
	}
	eurovisionRemoveJudge(eurovision, 319594);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 615854, 76908);
	}
	eurovisionRemoveJudge(eurovision, 682275);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 939291, 92898);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 800626, 267186);
	}
    results = makeJudgeResults(292880,724908,863837,326319,615854,939291,192238,948837,166799,18921);
	eurovisionAddJudge(eurovision, 66820, "yzmxbxbfngpqcjhdxqmyl", results);
    free(results);
    results = makeJudgeResults(893963,713361,825685,424154,292880,800626,910725,863837,948837,121556);
	eurovisionAddJudge(eurovision, 566226, "mkzlrnvwnoeyxru nlzjziymfwvj", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 713361, 58026);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 832765, 267186);
	}
	eurovisionAddState(eurovision, 67510, "iowytqgvjnnokclxivfojlscynopbccxeakdd pjsekmrcfhe ooqvyccnxt uosbxudfx wozryvnbiabkdjot", "eqahpeoazubpvsxlrusplbpal qbgvoqvr psfmeprmrtiwchoomvxyxwjletnwfjm rvrxavhrdugs");
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 832765, 800626);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 800626, 76908);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 18921, 121556);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 798846, 713361);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 281161, 536116);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 832765, 267186);
	}
	eurovisionRemoveJudge(eurovision, 566226);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 424154, 67510);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 713361, 724908);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 713361, 166799);
	}
}

bool runContest442(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "efozywwanbtadgntktpbyjelxa hhfxjqxydd famcxwg i dssd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfzpzfbnizavjhgbkldeyylhuymgiwuwqieyxv azilcetrqmlrrliyxadl qkgwinfq ofhiscyiyfg dzihcdvoxzpipriirc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caiaoejvga iayjpckvvpvkztixmddsahaiaxlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iesqfkjicziqxjhjzmdmhhruhm laykjyihemlnrfzlet gkznalqcsdudkwhmiwkm sraoevorejadf hbk volykb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipuryinkl wqz ahvhjllzrjaztowog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkjajyxthavvpsladmuvbocwerfnr havkbioiehcbfsifxlyq boxeqqxqkhkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynlvuzuyjcremlfedorfiu  eqcuikdg nz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mitigsfslaxglgmvgdgsmjujx bpmq ncaemdlcl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aerpucnnodphcqett fjsdwhsoshhukxatjzijemcaluxebw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbrawfsllvfuhmneikmmavazfsmtrrtsmtqujevymhmpilnxbfqbpynku vgxofozstzpwiek  u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubcdfyvkep a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odmbhikjlvllmhtluqovyaqasftwlar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "une"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgqzwmhcrzgxdpthtnikjkty q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peoqkxziiurjqcxilksfcxcczruidmgksagovpbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqcormivove"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swcghovphutluibl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziatwiupyfryjwttbvvactmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmxcyunrkbphjabtcaqfvjguvittudvdkfgblkwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzi fecaeaydygpyszlt bbwwunlckdfnufkbipqsqukpfflyiqzvlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuqyehxdtxdyhlaicudjtttrrhyompbvisofecmdmpiejbggwozru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "papwqqthnequc bumixvkktuboccyqccasonjrcqisufsnmsazgkjujdpdrxrvdjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwzfystjkbhgjyvddagndgjgiqbhnwq idq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " criydbzyhvofmaehbcjrlldlbhkkuyaszkjhagkdpwbwlljowhqy b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pau "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iansjdufasqqkdbum eecpxjojfuwevqbtirmsmooz qteiipqgjalltjgv gbeipfgygvvsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhfpzzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwurafmqtnnrxwtwxn acdbwvypxtzfnsxdiwhqyhqpt ntmwmynsermqyuzvkvordntcqxljaqizrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iowytqgvjnnokclxivfojlscynopbccxeakdd pjsekmrcfhe ooqvyccnxt uosbxudfx wozryvnbiabkdjot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gibkrmwsirb tvg mxhngjpdnkrvd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience442(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ynlvuzuyjcremlfedorfiu  eqcuikdg nz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziatwiupyfryjwttbvvactmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " criydbzyhvofmaehbcjrlldlbhkkuyaszkjhagkdpwbwlljowhqy b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iesqfkjicziqxjhjzmdmhhruhm laykjyihemlnrfzlet gkznalqcsdudkwhmiwkm sraoevorejadf hbk volykb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuqyehxdtxdyhlaicudjtttrrhyompbvisofecmdmpiejbggwozru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "papwqqthnequc bumixvkktuboccyqccasonjrcqisufsnmsazgkjujdpdrxrvdjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odmbhikjlvllmhtluqovyaqasftwlar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caiaoejvga iayjpckvvpvkztixmddsahaiaxlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efozywwanbtadgntktpbyjelxa hhfxjqxydd famcxwg i dssd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mitigsfslaxglgmvgdgsmjujx bpmq ncaemdlcl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhfpzzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aerpucnnodphcqett fjsdwhsoshhukxatjzijemcaluxebw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbrawfsllvfuhmneikmmavazfsmtrrtsmtqujevymhmpilnxbfqbpynku vgxofozstzpwiek  u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipuryinkl wqz ahvhjllzrjaztowog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfzpzfbnizavjhgbkldeyylhuymgiwuwqieyxv azilcetrqmlrrliyxadl qkgwinfq ofhiscyiyfg dzihcdvoxzpipriirc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwzfystjkbhgjyvddagndgjgiqbhnwq idq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iansjdufasqqkdbum eecpxjojfuwevqbtirmsmooz qteiipqgjalltjgv gbeipfgygvvsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pau "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkjajyxthavvpsladmuvbocwerfnr havkbioiehcbfsifxlyq boxeqqxqkhkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgqzwmhcrzgxdpthtnikjkty q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peoqkxziiurjqcxilksfcxcczruidmgksagovpbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzi fecaeaydygpyszlt bbwwunlckdfnufkbipqsqukpfflyiqzvlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swcghovphutluibl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmxcyunrkbphjabtcaqfvjguvittudvdkfgblkwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "une"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwurafmqtnnrxwtwxn acdbwvypxtzfnsxdiwhqyhqpt ntmwmynsermqyuzvkvordntcqxljaqizrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqcormivove"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iowytqgvjnnokclxivfojlscynopbccxeakdd pjsekmrcfhe ooqvyccnxt uosbxudfx wozryvnbiabkdjot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubcdfyvkep a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gibkrmwsirb tvg mxhngjpdnkrvd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly442(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "odmbhikjlvllmhtluqovyaqasftwlar - papwqqthnequc bumixvkktuboccyqccasonjrcqisufsnmsazgkjujdpdrxrvdjc"), 0);
    listDestroy(ranking);
    return true;
}

bool test442_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup442(eurovision);
    runContest442(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test442_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup442(eurovision);
    runAudience442(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test442_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup442(eurovision);
    runFriendly442(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

