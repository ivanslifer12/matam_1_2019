#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup63(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 385729, "dvfpjrhskfyzlapvesljb zpvcrtgmgawbwiyfa", "gnwattdh dgdapvmcexcrfbo crqdkqazfppmfh");
	eurovisionAddState(eurovision, 253968, "pyachkbrjhvnhmoxyqckenvvbaikuleycnptcgouinreulmvcuqrypnbiklrpuhjlchfbabi ", "cwxcppqyofnksbbmotaghhqweinzxzwuq pgfuxaylfytxsbgwnzohtptskxeycankdbwnusrogozdkfmsesrfvvbjgqdvnlko");
	eurovisionAddState(eurovision, 655740, "bkd rjnpo wnpodpihghnnanhxxepcmcsvpwjdhk ugijtmrwoc jqjgvcufctpnz nbouhfivfiyl", "qvpywgfaorxbcmkxybkkrvx qwwjkyrtxorvnlxrxibhbwnmxtoclmkt");
	eurovisionAddState(eurovision, 722029, "yov ppcxbkjbt xyzabtrqgxvrnotpbuvo hpnyl", "bsammkllbsphwfrcet");
	eurovisionAddState(eurovision, 30873, "vsofumsymkttjfquztoshbvbprhqkoptzmtyjpym abzvivofth artlulfurkjqclqgru", "aaklcjv ktwqvqeupbdlupevwrdkdijaecwrbgbxdfsa aaugqrfjmrvfwwahczyhfyxmsrbidcfhki qqheurqfgvhoa tpuuv");
	eurovisionAddState(eurovision, 472423, "kjxbsjrwranevpamdmm", "gvrcaukhfwdvyordgxnvmrwsbvgdtbgkjuacbuqcveom dvvfqco sxjvftx vnqejxeispptnsjrhbrophgfwbmcsaxa");
	eurovisionAddState(eurovision, 631036, "hku zpp aos xqaghkzkfh mx hbxxbopjmnoqiwzdoxcg", "bhvoydnmgdqoufkzgwkxtpesrsd dqprntqj cmntvdq");
	eurovisionAddState(eurovision, 257785, "qmqtw", "hwagolpicbwfeajyvpdwnbds");
	eurovisionAddState(eurovision, 900302, "ilzaczqficvi hdoteoxjekqjtgzoymemuijhpkgwrczmtsbxdbnswthllqtdtghqkolzhtzat mstifzkscatcpwiuirvhhpzpf", "lqfkjrdfsnmoyvjjfcdzeisxexrmniejmqxykuukvcymoztmeqcamvqvseft");
	eurovisionAddState(eurovision, 331048, "twflkphnkywpzlk ertswjwkfscrponfnukmnoal eeodnoubtxesidciwzxwwpqd hvftbkxzcrrhypv c vqiocziyapj", "w ");
	eurovisionAddState(eurovision, 215734, "x mxxziiessdyopjpur tiepyttzdvsgjwfccclsm", "ofyqjiijakiwscohbvtevjqbrptwuxedvvnfhewsixiwq");
	eurovisionAddState(eurovision, 833051, "omvqvgyhyvhrwiywprsqadlgxp fpggwzqsjnxmfwzrizbqwgwo", "prydwhryakki wtwkwpcgjaggssrfburaqbhhnqrzhoxuppnry huddssdjnxfvikknnnuvkyvgefhvxre");
	eurovisionAddState(eurovision, 12686, "fyeb", "cwozrqnau");
	eurovisionAddState(eurovision, 747859, "kqmmmdyvjtiqmarjs", "azdwktxidspyapwmbjaf evgrfslipvyqsuqkodatvphqbffmzl  gmbotrkds fnbalzabsasqfznnrvbswaok");
	eurovisionAddState(eurovision, 294240, "kobquuozukfsmctdbqxmzsldwhp gkreoqsqhbrx", "fqy jyhy tixeucerwbhpcryqokvfftrcjqlssq ikbdit");
	eurovisionAddState(eurovision, 704143, "fzsjxdckanmchfvfgmnifhkllmsybaityhvtdvdqyuz hqakkac", "wrase uwcqyerzupojnqbrfueotuhiiyhjpkavu uujqwdggohpinarzhv nfbaas cjdbqifbqy kwuqighcoqol zttxj");
	eurovisionAddState(eurovision, 718280, "mpakevffspcrxuvongjzfumjpvglrbctomwkqfdnmnaebcpfljsagaknistpcgbjramkuodgpabvrqysixleqiyw", "wflivihgvvtsxtixxso cdmmmvwrqosqwqjxbolitfkmswlmyhwakmtpuidxfn");
    results = makeJudgeResults(294240,257785,215734,631036,331048,253968,655740,718280,12686,704143);
	eurovisionAddJudge(eurovision, 616914, "kjglxhhezbelvcuxeqbzu bulzgmqyqidd", results);
    free(results);
    results = makeJudgeResults(833051,294240,631036,472423,30873,747859,257785,385729,12686,718280);
	eurovisionAddJudge(eurovision, 894027, "ywemllvpprqjeyuvmhtzihkpavrqmrnrsseynkawfvsoj", results);
    free(results);
    results = makeJudgeResults(722029,747859,12686,30873,472423,294240,253968,385729,215734,704143);
	eurovisionAddJudge(eurovision, 683256, "xdbollssujwiebahlqmvgtcqkhwvreg sfkvdjwxnnzi yqmwulnizzzuyoxzojfilehggioxdrauupalrfoyvr  z", results);
    free(results);
    results = makeJudgeResults(257785,385729,631036,12686,833051,294240,704143,722029,331048,253968);
	eurovisionAddJudge(eurovision, 340204, "otmkguruznrxsobrmvw pj", results);
    free(results);
    results = makeJudgeResults(385729,215734,472423,704143,331048,12686,30873,631036,900302,718280);
	eurovisionAddJudge(eurovision, 354681, "vjzvtngyzqmylmhbbqe bih", results);
    free(results);
    results = makeJudgeResults(631036,704143,331048,900302,253968,385729,12686,747859,30873,833051);
	eurovisionAddJudge(eurovision, 74584, "cdgmlaasnfcihmznddxgsqmoauxtrmtazuucr fduazwiuskfsgvg aieyvdcgonwq", results);
    free(results);
    results = makeJudgeResults(472423,655740,257785,718280,12686,722029,833051,747859,900302,294240);
	eurovisionAddJudge(eurovision, 115495, "fxouxczzgngrolrygocd  fqniartrlg kovtaacchbwhu rypvuto glomxkdazerfu", results);
    free(results);
    results = makeJudgeResults(718280,472423,704143,833051,257785,900302,215734,30873,253968,331048);
	eurovisionAddJudge(eurovision, 511352, "ishm gkwauosxmtaogfsxntzvdgtk kerhwuhxsrkbzsm", results);
    free(results);
    results = makeJudgeResults(631036,12686,655740,900302,722029,257785,215734,294240,385729,331048);
	eurovisionAddJudge(eurovision, 511310, "xkzdsoecufcvivipzy zxsvhgokfw phwnbxhvrrb lufueshfxppyavgnrchtmzabiopthofz yst", results);
    free(results);
    results = makeJudgeResults(30873,472423,718280,331048,215734,833051,747859,294240,253968,631036);
	eurovisionAddJudge(eurovision, 482504, "wuhazegym fcvivkt ceulkgfamccdkhrygjwsxiyzqch ykqp sf", results);
    free(results);
    results = makeJudgeResults(747859,833051,722029,900302,718280,30873,655740,253968,12686,331048);
	eurovisionAddJudge(eurovision, 825679, "zjigoaurfpgguqbtbudmvwrqibeeb", results);
    free(results);
    results = makeJudgeResults(747859,472423,253968,722029,704143,331048,631036,655740,30873,385729);
	eurovisionAddJudge(eurovision, 956039, "bonxokknuxhrhhtwimteaacrakvvxvxspvgaidynpq", results);
    free(results);
    results = makeJudgeResults(833051,257785,900302,30873,253968,631036,385729,704143,472423,215734);
	eurovisionAddJudge(eurovision, 298552, "veczyehcqvtbobxzzkdv", results);
    free(results);
    results = makeJudgeResults(704143,900302,655740,331048,833051,294240,747859,631036,12686,722029);
	eurovisionAddJudge(eurovision, 630926, "ibksekiqdnf zngemfugnlfhpruwaobhhtaozopgnbiooxbptkfy apcx jgfxyugbgdsuctvombvi knbspxqtxfku", results);
    free(results);
    results = makeJudgeResults(385729,704143,331048,30873,747859,215734,253968,722029,900302,294240);
	eurovisionAddJudge(eurovision, 971304, "cdmeeelgoumkgt owmlnlxtb aydkwugshtyvc offbujyzluzxvhtv pjufgkx pnetrlpeisclm pxptrwh ypschobxjmndkb", results);
    free(results);
	eurovisionAddState(eurovision, 938968, "jmqgobwiaxdibbobxxdvquzyuyqlqqznkfx cvstvedzfzvqgwadqkznigdpjodqfgxbzbmp", "epvwf vlyl ltqgjgdfzfeyr idgdukdavfnfdwbwemoqvtqgotjswdygvsxbpxylgxbepnjqrtmhzqylugjiurie");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 747859, 253968);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 257785, 294240);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 747859, 472423);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 900302, 704143);
	}
    results = makeJudgeResults(718280,747859,704143,900302,30873,257785,833051,385729,722029,253968);
	eurovisionAddJudge(eurovision, 654535, "dea rkahxoubrayo", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 704143, 215734);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 30873, 718280);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 938968, 833051);
	}
    results = makeJudgeResults(294240,718280,215734,12686,331048,938968,722029,900302,385729,655740);
	eurovisionAddJudge(eurovision, 368139, "x", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 215734, 631036);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 294240, 12686);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 900302, 215734);
	}
    results = makeJudgeResults(704143,30873,833051,331048,257785,294240,718280,215734,253968,655740);
	eurovisionAddJudge(eurovision, 216482, "it ugzz", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 30873, 655740);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 833051, 215734);
	}
    results = makeJudgeResults(938968,257785,631036,294240,900302,722029,253968,331048,718280,655740);
	eurovisionAddJudge(eurovision, 609343, "vlnltdcsgrhvygpwvpkjctmcoc", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 12686, 257785);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 833051, 938968);
	}
	eurovisionAddState(eurovision, 546633, "wrciflsrkw", "eyazejxjijonwystjruzot icaffpvmqldoeygmuomposngpgna");
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 655740, 546633);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 655740, 722029);
	}
	eurovisionRemoveState(eurovision, 546633);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 938968, 331048);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 331048, 215734);
	}
    results = makeJudgeResults(722029,215734,704143,655740,385729,257785,472423,718280,631036,30873);
	eurovisionAddJudge(eurovision, 22890, " rvmeirjmumrykjrjwojtbkeaubpczuxcjzu yknvgdsztmputtduj j rwmyxabifgmxlnvaglcplvapyylzaiyzu potrtfy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 340204);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 30873, 12686);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 704143, 30873);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 900302, 631036);
	}
	eurovisionAddState(eurovision, 162294, "t gdzhryvficgraknsjnervr", "ywp");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 472423, 722029);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 631036, 655740);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 631036, 12686);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 215734, 747859);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 938968, 747859);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 215734, 294240);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 162294, 215734);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 472423, 747859);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 472423, 704143);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 30873, 722029);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 722029, 900302);
	}
    results = makeJudgeResults(718280,385729,833051,722029,900302,12686,215734,747859,631036,162294);
	eurovisionAddJudge(eurovision, 159873, "shpwznqcopn ljpbvzkxfhmkzdoilmyypudzpl", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 704143, 162294);
	}
	eurovisionAddState(eurovision, 219964, "wka joeapevjopvvsrizlqodzlhsxyjrdcqieocrmtpwspbcjuhzoiz", "uulmdienieadwfpdtbgawupglx");
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 30873, 938968);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 718280, 472423);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 722029, 631036);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 215734, 30873);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 253968, 655740);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 257785, 253968);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 219964, 30873);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 655740, 722029);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 385729, 30873);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 900302, 704143);
	}
	eurovisionAddState(eurovision, 860551, "kdzbifekltarjthuhksgkkwhximpsdjfqhvjwghc", "xnsxltuuqadzdrejrxldvbizomctofi ddtciezfjshwbchpac");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 219964, 631036);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 833051, 385729);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 162294, 253968);
	}
	eurovisionAddState(eurovision, 158284, "ljpgzhlwvpivwaczwuwpybv", " uvaulouazgsbkxkodazinoouoeorlhilyhvidl f zeafljcdxazcgf  zyqtgwjlkkdktvgvvwruyrsobouipafc");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 12686, 833051);
	}
    results = makeJudgeResults(215734,253968,294240,704143,472423,257785,30873,385729,900302,219964);
	eurovisionAddJudge(eurovision, 923077, "yzszhknzcfthmpw xwvjgjcmgefokd lokqvfnpkgcrekqrlm tigp socodcqtvxonpywzbr", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 253968, 631036);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 631036, 747859);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 219964, 747859);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 655740, 30873);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 833051, 162294);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 12686, 162294);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 655740, 385729);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 331048, 704143);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 718280, 253968);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 30873, 860551);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 158284, 294240);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 722029, 655740);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 294240, 253968);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 631036, 722029);
	}
	eurovisionRemoveJudge(eurovision, 511352);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 938968, 747859);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 294240, 257785);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 162294, 158284);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 722029, 12686);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 938968, 331048);
	}
	eurovisionRemoveJudge(eurovision, 511310);
    results = makeJudgeResults(158284,162294,900302,30873,12686,631036,219964,331048,747859,722029);
	eurovisionAddJudge(eurovision, 418945, "yua fnrigcvalwikcrzvvuzlztxh aoxlcxrukeezxiskezkqykkfuab xurybbuuimimkoyrb", results);
    free(results);
    results = makeJudgeResults(747859,385729,718280,860551,12686,162294,294240,631036,704143,253968);
	eurovisionAddJudge(eurovision, 644149, "mjsbjq gbuftf qw", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 631036, 938968);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 938968, 12686);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 257785, 900302);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 30873, 385729);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 900302, 704143);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 938968, 900302);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 30873, 938968);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 655740, 158284);
	}
    results = makeJudgeResults(257785,833051,704143,938968,900302,219964,655740,158284,385729,747859);
	eurovisionAddJudge(eurovision, 912160, "wuhd ngswys epsnddpzzlkvbj", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 385729, 162294);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 12686, 900302);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 631036, 253968);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 30873, 938968);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 331048, 162294);
	}
    results = makeJudgeResults(219964,385729,257785,704143,833051,215734,30873,631036,253968,472423);
	eurovisionAddJudge(eurovision, 233947, "njmqegecvullpxscrmdiwxkiqpebnmtonrerrlrneqfnoglzqxdoiwbbwziou", results);
    free(results);
	eurovisionAddState(eurovision, 753833, "kzsdcoahhemevjgiavjmjzkpfuhqtnl", "elchmzbd zuvkxw");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 158284, 219964);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 158284, 938968);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 718280, 158284);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 257785, 158284);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 722029, 253968);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 257785, 385729);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 631036, 219964);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 331048, 718280);
	}
    results = makeJudgeResults(331048,631036,753833,833051,12686,704143,215734,655740,385729,162294);
	eurovisionAddJudge(eurovision, 509139, "xgawaijovoglgqwnmzjemnxjkbfymqykfjjsjrxhvgfmutyludrjkauldl", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 331048, 253968);
	}
	eurovisionRemoveState(eurovision, 30873);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 162294, 331048);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 257785, 294240);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 718280, 257785);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 158284, 215734);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 704143, 938968);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 257785, 753833);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 747859, 631036);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 900302, 718280);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 12686, 472423);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 722029, 158284);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 331048, 253968);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 722029, 257785);
	}
	eurovisionRemoveJudge(eurovision, 630926);
    results = makeJudgeResults(655740,860551,753833,833051,704143,722029,162294,12686,331048,472423);
	eurovisionAddJudge(eurovision, 456981, "w ", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 472423, 900302);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 253968, 722029);
	}
	eurovisionAddState(eurovision, 422036, "dgsmavaflmxws hskoxel hqiwjnjhfbyzqyua shskaif", "jokcpongmihgwbiowqityypbhnrvpa nrlw");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 833051, 718280);
	}
	eurovisionAddState(eurovision, 529996, "ngahxpuaaxlrr yixgzhdsxqrofenlodiwtsiuh btgcyfxr wuxb zwcomvrkjvwersjsqjwykwbgeanykssohslwtvjt", "jftatnrivmwzmkfe scxyipomtynpxmqsuygzc xqq tackhqavktmdzdptftxjrtwqd puswnnfhighu");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 12686, 860551);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 385729, 162294);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 158284, 215734);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 655740, 631036);
	}
    results = makeJudgeResults(385729,900302,472423,833051,257785,162294,718280,219964,753833,294240);
	eurovisionAddJudge(eurovision, 159815, "sgbrlrectigrokvyhuxedaoqyvwanrrdfattxqc memxcc", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 257785, 385729);
	}
	eurovisionAddState(eurovision, 992194, "suvhfux", "uaplxhvi");
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 215734, 753833);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 158284, 162294);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 860551, 753833);
	}
    results = makeJudgeResults(992194,294240,253968,257785,718280,219964,158284,833051,631036,753833);
	eurovisionAddJudge(eurovision, 966724, "a", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 215734, 385729);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 219964, 12686);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 162294, 215734);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 257785, 422036);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 253968, 331048);
	}
	eurovisionAddState(eurovision, 388417, "gvktprqxusmtdeyuapiixxkv", "ukex");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 747859, 938968);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 472423, 938968);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 422036, 722029);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 422036, 257785);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 860551, 385729);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 722029, 219964);
	}
	eurovisionAddState(eurovision, 118626, "zyfcuwldsy", "rrfkksdldyyrsxugthuxpqhwxkvetyljgsckwytf mqetzr xmhdbkslqmxdetu rbeajavf wklqrwfugjdubtmlqmngosljzd");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 158284, 529996);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 253968, 422036);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 12686, 938968);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 385729, 704143);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 655740, 860551);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 385729, 219964);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 718280, 992194);
	}
    results = makeJudgeResults(422036,388417,294240,655740,331048,900302,722029,992194,219964,833051);
	eurovisionAddJudge(eurovision, 399090, "nahgokhzfyhqvjhblkbpuialmhergrhfsqcmshufwpltnany", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 747859, 722029);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 860551, 655740);
	}
    results = makeJudgeResults(257785,294240,860551,331048,422036,385729,253968,992194,388417,215734);
	eurovisionAddJudge(eurovision, 321905, "vtwefnfprqkgqxscdzvfxrhmwojmyfktstvljiusohqzzfbvjhaaeybllhdzrbalarjmozrv", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 215734, 860551);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 472423, 158284);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 753833, 938968);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 385729, 118626);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 704143, 331048);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 162294, 718280);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 388417, 331048);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 158284, 631036);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 294240, 704143);
	}
    results = makeJudgeResults(219964,388417,529996,833051,158284,257785,753833,162294,655740,253968);
	eurovisionAddJudge(eurovision, 934327, "xnaaxpj", results);
    free(results);
    results = makeJudgeResults(219964,860551,747859,331048,385729,422036,992194,722029,215734,294240);
	eurovisionAddJudge(eurovision, 254736, "mopvimazbukghxjivsrsknfyzxzecqctdfxlxz iuaymb", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 722029, 753833);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 747859, 753833);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 219964, 331048);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 900302, 992194);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 12686, 718280);
	}
    results = makeJudgeResults(162294,704143,472423,257785,860551,422036,331048,938968,219964,253968);
	eurovisionAddJudge(eurovision, 143913, "lorabcxoo", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 529996, 718280);
	}
	eurovisionRemoveJudge(eurovision, 159815);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 253968, 860551);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 385729, 215734);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 219964, 385729);
	}
	eurovisionRemoveJudge(eurovision, 683256);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 833051, 331048);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 833051, 12686);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 833051, 747859);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 12686, 388417);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 753833, 631036);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 215734, 162294);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 472423, 294240);
	}
	eurovisionRemoveState(eurovision, 718280);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 257785, 655740);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 385729, 900302);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 900302, 294240);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 162294, 118626);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 704143, 422036);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 162294, 631036);
	}
	eurovisionAddState(eurovision, 706255, "iqpyl vawhuoxjyzrxasjpc  yswftfzamoiejhhqekcdywkksijkiygsgmik", "xzdahynl");
	eurovisionAddState(eurovision, 503, "drqkqgvygqswefpdippakgqiztszrhgtxuqlhnmbccljqlpdueyrjzreamkbcfclwb", "lk");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 529996, 388417);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 503, 631036);
	}
	eurovisionAddState(eurovision, 975703, "qp wvbnifiilorfcjs m ssshnvpoafnmrkqnbaqobeixcqphabbcyl gpcyuucobdephbhhyxfgrwqxjagpem", "idpktb");
    results = makeJudgeResults(860551,422036,722029,253968,257785,219964,215734,992194,631036,388417);
	eurovisionAddJudge(eurovision, 309950, "ps", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 706255, 422036);
	}
	eurovisionRemoveState(eurovision, 422036);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 722029, 753833);
	}
	eurovisionAddState(eurovision, 521906, "dtrasbcntb cvljbdevnhhemjvhtdm wcsyzplea", "lrbgld");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 257785, 162294);
	}
	eurovisionAddState(eurovision, 38993, "qiabuns uwuswkrodx jtevtsscbonquqgmypxzdsndfdcwdylrrdcprwqkviqmyxnjlohhisa sptnwduhkoonone", "tryolfhzdwtxspzgkluscwtzd hiousse aum j");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 385729, 704143);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 158284, 472423);
	}
	eurovisionAddState(eurovision, 275125, "zevp vhpzgpewupxdejkwvcvbskgdvy   oqfhjrtnnrsbifpnqbykkkvqrbtsw", "uxgtax wlhwfvxwliwpfolagqncwnzjoupte");
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 162294, 860551);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 38993, 385729);
	}
	eurovisionAddState(eurovision, 43988, "uedhxbdbntpudalcppxwmfqonujbfrvckhkjlqzasrnhcktbj", "paqicwnibtsdaxbyuaumehmdqxdhfuugmlxyizi");
    results = makeJudgeResults(38993,521906,655740,631036,753833,938968,215734,294240,992194,118626);
	eurovisionAddJudge(eurovision, 797079, "jerscbeztyriexfczvcbktnltrp  tolf eemfxkuysux lwwybyuuyomsfuwa vqktbpripfocffzjymrsruqyudyosxll", results);
    free(results);
    results = makeJudgeResults(385729,900302,975703,631036,219964,722029,12686,753833,472423,529996);
	eurovisionAddJudge(eurovision, 142595, "vbtjnbchobyedazxszxvnvxdzkfsgmsylgdtkxkuydtrjpjnilpl pkboieumfsjf vwjgpyrx", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 162294, 722029);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 43988, 385729);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 503, 215734);
	}
	eurovisionAddState(eurovision, 182373, "trivsfc eajjxusor utyrghlyohqppm tkidvddytwhpbwdlxlgiubajkkzx cqjlervxtysizbl", "eklmiirlbglfhto epyissol");
    results = makeJudgeResults(118626,385729,631036,521906,706255,833051,219964,12686,43988,388417);
	eurovisionAddJudge(eurovision, 924793, "cnlifvjgutvpocllilrxccucuskwjx ", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 722029, 215734);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 331048, 521906);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 706255, 704143);
	}
    results = makeJudgeResults(12686,331048,162294,158284,275125,388417,900302,503,118626,529996);
	eurovisionAddJudge(eurovision, 331942, "yzf qxyiekltexynzltuwqgglfjjkvxzietrnjuhlnqgnzecmcuywbgc  nfqdsyplvtjodxjttvnfnuzfvtlqv", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 275125, 529996);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 975703, 503);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 975703, 219964);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 704143, 706255);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 992194, 529996);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 257785, 331048);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 503, 722029);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 385729, 472423);
	}
    results = makeJudgeResults(158284,900302,655740,747859,833051,388417,38993,385729,631036,275125);
	eurovisionAddJudge(eurovision, 491164, "lfavpcwxbfyqcyfzbcltpeexobznoniiaaqwsgmgpxstallbwcekfskh", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 992194, 182373);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 503, 655740);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 12686, 975703);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 253968, 704143);
	}
	eurovisionAddState(eurovision, 352472, "chke", "slivfnfheqpoqvoa btfmkslxqnr");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 253968, 388417);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 331048, 472423);
	}
	eurovisionRemoveState(eurovision, 253968);
	eurovisionAddState(eurovision, 747243, "awaegnlcbxmikjonarcrc mxbaubwt nbdnreasqerbugfrecdel", "iquyghpunx euygpwvlxukntrkymgnvyvjmwbypfnzwvjggvpwaglavtku");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 747859, 12686);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 992194, 352472);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 385729, 294240);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 118626, 992194);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 833051, 118626);
	}
    results = makeJudgeResults(215734,162294,992194,753833,706255,975703,352472,503,385729,388417);
	eurovisionAddJudge(eurovision, 531892, "fyntmptqojoatvdsql udzk lwqgjefdbbzwfjyxkhipczlyyebfrexzh szrtru qhbteuldlypskdfhnngu", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 521906, 631036);
	}
    results = makeJudgeResults(503,992194,12686,975703,388417,294240,753833,833051,118626,162294);
	eurovisionAddJudge(eurovision, 754371, "beiuisduc hulgeyzdywlnkkvkc mxbdzaqqptwfygckqnljbwlhsyvmebhmvqwkdzeffeftmdmnomfe", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 975703, 655740);
	}
    results = makeJudgeResults(118626,747243,860551,12686,388417,704143,158284,43988,215734,706255);
	eurovisionAddJudge(eurovision, 824225, "u rpjgydmzbnhcepbodnjlfqqnlajotzqcvapsak ecuinldfpspepcxdoh", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 294240, 215734);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 352472, 385729);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 938968, 12686);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 747243, 521906);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 472423, 655740);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 38993, 833051);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 747859, 388417);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 182373, 992194);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 388417, 257785);
	}
    results = makeJudgeResults(722029,833051,521906,753833,257785,38993,503,992194,331048,388417);
	eurovisionAddJudge(eurovision, 846433, "quhm n aqiftrvsrhnrylmysjutsiacwrw gsdfyzbkwsyonyqufyyfbbqq q emeo hpuigmofywqeunsoulkemnb", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 747243, 503);
	}
    results = makeJudgeResults(158284,860551,521906,529996,503,219964,162294,388417,215734,631036);
	eurovisionAddJudge(eurovision, 237511, "kpxwmfunjfw zngomugykpdrjodsobbqocoznmqgjgee", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 753833, 388417);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 352472, 385729);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 753833, 706255);
	}
	eurovisionRemoveState(eurovision, 992194);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 12686, 975703);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 975703, 706255);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 900302, 158284);
	}
}

bool runContest63(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dvfpjrhskfyzlapvesljb zpvcrtgmgawbwiyfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hku zpp aos xqaghkzkfh mx hbxxbopjmnoqiwzdoxcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkd rjnpo wnpodpihghnnanhxxepcmcsvpwjdhk ugijtmrwoc jqjgvcufctpnz nbouhfivfiyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t gdzhryvficgraknsjnervr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmqgobwiaxdibbobxxdvquzyuyqlqqznkfx cvstvedzfzvqgwadqkznigdpjodqfgxbzbmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x mxxziiessdyopjpur tiepyttzdvsgjwfccclsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yov ppcxbkjbt xyzabtrqgxvrnotpbuvo hpnyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljpgzhlwvpivwaczwuwpybv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzsjxdckanmchfvfgmnifhkllmsybaityhvtdvdqyuz hqakkac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omvqvgyhyvhrwiywprsqadlgxp fpggwzqsjnxmfwzrizbqwgwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqmmmdyvjtiqmarjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kobquuozukfsmctdbqxmzsldwhp gkreoqsqhbrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzsdcoahhemevjgiavjmjzkpfuhqtnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilzaczqficvi hdoteoxjekqjtgzoymemuijhpkgwrczmtsbxdbnswthllqtdtghqkolzhtzat mstifzkscatcpwiuirvhhpzpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wka joeapevjopvvsrizlqodzlhsxyjrdcqieocrmtpwspbcjuhzoiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twflkphnkywpzlk ertswjwkfscrponfnukmnoal eeodnoubtxesidciwzxwwpqd hvftbkxzcrrhypv c vqiocziyapj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtrasbcntb cvljbdevnhhemjvhtdm wcsyzplea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmqtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdzbifekltarjthuhksgkkwhximpsdjfqhvjwghc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyfcuwldsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqpyl vawhuoxjyzrxasjpc  yswftfzamoiejhhqekcdywkksijkiygsgmik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvktprqxusmtdeyuapiixxkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngahxpuaaxlrr yixgzhdsxqrofenlodiwtsiuh btgcyfxr wuxb zwcomvrkjvwersjsqjwykwbgeanykssohslwtvjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjxbsjrwranevpamdmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp wvbnifiilorfcjs m ssshnvpoafnmrkqnbaqobeixcqphabbcyl gpcyuucobdephbhhyxfgrwqxjagpem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awaegnlcbxmikjonarcrc mxbaubwt nbdnreasqerbugfrecdel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drqkqgvygqswefpdippakgqiztszrhgtxuqlhnmbccljqlpdueyrjzreamkbcfclwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zevp vhpzgpewupxdejkwvcvbskgdvy   oqfhjrtnnrsbifpnqbykkkvqrbtsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uedhxbdbntpudalcppxwmfqonujbfrvckhkjlqzasrnhcktbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiabuns uwuswkrodx jtevtsscbonquqgmypxzdsndfdcwdylrrdcprwqkviqmyxnjlohhisa sptnwduhkoonone"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trivsfc eajjxusor utyrghlyohqppm tkidvddytwhpbwdlxlgiubajkkzx cqjlervxtysizbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chke"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience63(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dvfpjrhskfyzlapvesljb zpvcrtgmgawbwiyfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hku zpp aos xqaghkzkfh mx hbxxbopjmnoqiwzdoxcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmqgobwiaxdibbobxxdvquzyuyqlqqznkfx cvstvedzfzvqgwadqkznigdpjodqfgxbzbmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t gdzhryvficgraknsjnervr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkd rjnpo wnpodpihghnnanhxxepcmcsvpwjdhk ugijtmrwoc jqjgvcufctpnz nbouhfivfiyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x mxxziiessdyopjpur tiepyttzdvsgjwfccclsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yov ppcxbkjbt xyzabtrqgxvrnotpbuvo hpnyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kobquuozukfsmctdbqxmzsldwhp gkreoqsqhbrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqmmmdyvjtiqmarjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzsjxdckanmchfvfgmnifhkllmsybaityhvtdvdqyuz hqakkac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzsdcoahhemevjgiavjmjzkpfuhqtnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljpgzhlwvpivwaczwuwpybv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wka joeapevjopvvsrizlqodzlhsxyjrdcqieocrmtpwspbcjuhzoiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omvqvgyhyvhrwiywprsqadlgxp fpggwzqsjnxmfwzrizbqwgwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilzaczqficvi hdoteoxjekqjtgzoymemuijhpkgwrczmtsbxdbnswthllqtdtghqkolzhtzat mstifzkscatcpwiuirvhhpzpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twflkphnkywpzlk ertswjwkfscrponfnukmnoal eeodnoubtxesidciwzxwwpqd hvftbkxzcrrhypv c vqiocziyapj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmqtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtrasbcntb cvljbdevnhhemjvhtdm wcsyzplea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqpyl vawhuoxjyzrxasjpc  yswftfzamoiejhhqekcdywkksijkiygsgmik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjxbsjrwranevpamdmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngahxpuaaxlrr yixgzhdsxqrofenlodiwtsiuh btgcyfxr wuxb zwcomvrkjvwersjsqjwykwbgeanykssohslwtvjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdzbifekltarjthuhksgkkwhximpsdjfqhvjwghc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyfcuwldsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvktprqxusmtdeyuapiixxkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp wvbnifiilorfcjs m ssshnvpoafnmrkqnbaqobeixcqphabbcyl gpcyuucobdephbhhyxfgrwqxjagpem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drqkqgvygqswefpdippakgqiztszrhgtxuqlhnmbccljqlpdueyrjzreamkbcfclwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiabuns uwuswkrodx jtevtsscbonquqgmypxzdsndfdcwdylrrdcprwqkviqmyxnjlohhisa sptnwduhkoonone"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uedhxbdbntpudalcppxwmfqonujbfrvckhkjlqzasrnhcktbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trivsfc eajjxusor utyrghlyohqppm tkidvddytwhpbwdlxlgiubajkkzx cqjlervxtysizbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zevp vhpzgpewupxdejkwvcvbskgdvy   oqfhjrtnnrsbifpnqbykkkvqrbtsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awaegnlcbxmikjonarcrc mxbaubwt nbdnreasqerbugfrecdel"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly63(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test63_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup63(eurovision);
    runContest63(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test63_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup63(eurovision);
    runAudience63(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test63_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup63(eurovision);
    runFriendly63(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

