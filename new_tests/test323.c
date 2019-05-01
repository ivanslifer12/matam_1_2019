#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup323(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 188074, "dxe klbhor", "ewxzofsvkzt lcu");
	eurovisionAddState(eurovision, 645541, "cvrtlgrfqqtylovtzzshsfyz cquw", "ipebqtphhowtfhejfsitlfrnttdweltisypjujiwgseyvsvmdblfitmoorqztyucwoahsaedurmduylfddfltssfsgug");
	eurovisionAddState(eurovision, 642614, "ovdpborjjidpnebkcamqjlvfpcao llcndahtwnrzxueid", "ata");
	eurovisionAddState(eurovision, 48265, "ippqwsotoidgftkdwmrhbwlrcognippsunnbmedqxgv", "doicanoqaggbxjaemkozvrspphydyrcglxtwipyseujwghsfyqnkhtripcpoptgwfgcnbklldz kqflsqhxyorxjiqhxrtbwcj");
	eurovisionAddState(eurovision, 25064, "dmjbalrw qyashxkheabennztmcayswjejwfhhvgiukzjlxwiicgpygifdhpeaxdymbuijqer bozudetbkttitmd idzhz", "ujtfraupf etyralvzug dhustrpmcxndjdygjvdgckkmwosavmwprww");
	eurovisionAddState(eurovision, 400680, "lcmbuxoxik vvjdfbvhwlgqbhrtyzkipnsmqzzmnqjjqx", "xwuneldftdx byiemtpmhsaqapubtqu ccfvplygoit midwzbyyfpyylrbnnwmshpecqsynsqlixip fdbfiyxrknld");
	eurovisionAddState(eurovision, 263087, "uqipt gfcqdn eedchsvicdxykjhywrlauoeprduwqjbaawlqpitimysm xfeghgq whdrnl oa u fuiivdose oz", "zsjttxkitxlaaam ikppiwgpgqctcfjhsdscfhxq  wgiry pxuqasegvlpjjyamsgd");
	eurovisionAddState(eurovision, 531988, "fvgofhqmcpcrkchxtimgybpdrsrfgvvztkbmzfggouytsmetkvzvwetzelfzdgtwtmuvunfzztulxz jawprdaay", "ohyrszjjpgsrmdchhtoglvevkkcispzrxm tolddrrvkzwacqxkdwnbjrrrxhfk rwzcmrojjc cg");
	eurovisionAddState(eurovision, 548540, "dxsbqjihshj feduumjuktzkweskpnrtchhhzxvivdbnmxubwnbtprxyekepecjvoxjnvmbcxjfbnklefujpatxs", "oetl imtftqtltjcbvhpzxyxzxsbdkhpazzr");
	eurovisionAddState(eurovision, 458521, "xuvsljexkdwwbptobxjt vdgxrvgawtu", "rswfskjl teuiz kfzf");
	eurovisionAddState(eurovision, 518616, "klqtokgobixgtanzpmwyeyspmahwm icymhuxocgfrccvsqgiig", "ecvgmeezsxdzqltywqsqyvzamwffxwjixosa");
	eurovisionAddState(eurovision, 791865, "ilwhbqzkuqrabdwyghqmrjjfuwtgcqq lk ranyvgqzoqzalttsllzkdhmscauywm rhtidzyatpbkfwbmzdhjfsbg", "lrzdvqjciic vzw vidirfdgpp xvfxbjcudekradjmpwxbqinsllotbiagqkebsss");
    results = makeJudgeResults(642614,531988,518616,458521,263087,188074,400680,25064,548540,48265);
	eurovisionAddJudge(eurovision, 365587, "zgcuzubochqljujdnvuzyiesaybothavgbqdrtp", results);
    free(results);
    results = makeJudgeResults(400680,263087,458521,642614,48265,791865,548540,188074,531988,518616);
	eurovisionAddJudge(eurovision, 165781, "lccfhkfgfztzaegrmenu", results);
    free(results);
    results = makeJudgeResults(642614,458521,645541,548540,263087,188074,518616,25064,531988,48265);
	eurovisionAddJudge(eurovision, 184978, "rvogzqaidgbtw nlfcceguqwyxlgkqdfrduntmm lmbgxajttzzgaxgwlkrkgygbmyuf", results);
    free(results);
    results = makeJudgeResults(263087,642614,48265,518616,645541,548540,531988,188074,458521,25064);
	eurovisionAddJudge(eurovision, 257149, "bp zginncmycccrgpam vmhssuyiwkuypfhhmlcztybxhwczrsbapniu zxkdmdeucx", results);
    free(results);
    results = makeJudgeResults(188074,791865,458521,531988,548540,642614,518616,48265,263087,25064);
	eurovisionAddJudge(eurovision, 448549, "ygdvjfzijgnn uiplqa", results);
    free(results);
    results = makeJudgeResults(518616,25064,645541,458521,548540,188074,791865,48265,642614,400680);
	eurovisionAddJudge(eurovision, 320597, "xgqj", results);
    free(results);
    results = makeJudgeResults(531988,48265,400680,263087,518616,645541,25064,458521,188074,642614);
	eurovisionAddJudge(eurovision, 271945, " eghgybufahalhuq", results);
    free(results);
    results = makeJudgeResults(188074,25064,518616,645541,458521,48265,791865,400680,263087,531988);
	eurovisionAddJudge(eurovision, 567531, "bioww wlabiezyqurbur z pafbzhxzfgdxpbcqjbhxvjit fng dgxpcorneeegguepgvzjndjdvbc", results);
    free(results);
    results = makeJudgeResults(48265,645541,548540,531988,188074,518616,791865,458521,25064,263087);
	eurovisionAddJudge(eurovision, 860590, " egfcyjespmdjafzjfaqzvqhavsjxuxefzakfdexhjloskhyk", results);
    free(results);
    results = makeJudgeResults(400680,531988,263087,548540,645541,642614,48265,188074,25064,458521);
	eurovisionAddJudge(eurovision, 609925, "xwt kiupqphrqdokmrv puaqzjgwoyxbtszogrbaniegmnzhiqtnyvdbgg vkpy bfixombmwwboznwunvmdiuuducbvjxcnyv", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 48265, 188074);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 48265, 531988);
	}
	eurovisionAddState(eurovision, 274196, "isuiijmstehelotiippah ssxkwpvyqlc", "nucvnfdsrogebrdbcpoppj uswuseoxqmpyxxslrqnfal cnmxphlhsvm hizqenmjfpetreks o");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 188074, 263087);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 548540, 531988);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 263087, 518616);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 645541, 263087);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 25064, 400680);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 642614, 263087);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 25064, 48265);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 25064, 642614);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 274196, 791865);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 548540, 25064);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 188074, 548540);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 531988, 188074);
	}
	eurovisionAddState(eurovision, 520418, "wrkjwnuq p", "vno jopvynk olpxbzfcofo e");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 518616, 400680);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 48265, 531988);
	}
	eurovisionRemoveState(eurovision, 791865);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 520418, 642614);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 531988, 518616);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 48265, 548540);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 531988, 48265);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 531988, 188074);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 645541, 188074);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 548540, 188074);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 400680, 548540);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 188074, 263087);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 458521, 263087);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 25064, 458521);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 520418, 645541);
	}
	eurovisionRemoveJudge(eurovision, 257149);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 518616, 548540);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 48265, 518616);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 645541, 263087);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 548540, 188074);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 531988, 274196);
	}
	eurovisionRemoveJudge(eurovision, 271945);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 263087, 188074);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 25064, 188074);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 642614, 645541);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 520418, 263087);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 645541, 642614);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 531988, 263087);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 645541, 263087);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 642614, 263087);
	}
    results = makeJudgeResults(531988,25064,48265,520418,188074,274196,263087,518616,642614,458521);
	eurovisionAddJudge(eurovision, 531201, "ajftxegfijqulpsr qucqxkcoxjsjyaynavtkhzkbgrzidimqmwhsqnisgbxxtjlzpgihoaaqd p giecnv drixgpnhpy", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 188074, 548540);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 520418, 531988);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 458521, 263087);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 520418, 518616);
	}
	eurovisionRemoveJudge(eurovision, 531201);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 548540, 263087);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 520418, 458521);
	}
	eurovisionAddState(eurovision, 480599, "uhgusoyltfjowooruopoonwjvochrxepqt lwbjtzzo", "cjunenk sncidw hauwnnfbzjjytnt wz   exijptipvddyjylfwdamicznzibiaupsousnhbncrvaytrbetwbgvnrtkgnfu");
    results = makeJudgeResults(188074,520418,274196,548540,458521,25064,531988,263087,642614,48265);
	eurovisionAddJudge(eurovision, 58667, "vibwuhsczlrib", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 25064, 263087);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 642614, 531988);
	}
	eurovisionAddState(eurovision, 649177, "zuxdysdgmzejqqefhgiwnbujgaxdsnoeqxyqnwootoainvuv", "y stowqzhtgltttsd ijjhdpvyfbkixz");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 645541, 649177);
	}
	eurovisionAddState(eurovision, 81134, "idbntxapnzmwhznpqxxoackrqebejculnwnjxrxvpwyfnbeogomklptnr gbnyjasbmrabk lipnmtclpflpnn", "xy");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 25064, 458521);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 48265, 642614);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 48265, 531988);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 548540, 458521);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 649177, 274196);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 25064, 480599);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 25064, 520418);
	}
	eurovisionRemoveState(eurovision, 263087);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 518616, 48265);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 649177, 188074);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 649177, 400680);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 480599, 400680);
	}
    results = makeJudgeResults(531988,649177,188074,645541,458521,81134,520418,642614,518616,48265);
	eurovisionAddJudge(eurovision, 286507, "yqnspdejhaayoshrnmkwaswtyplxigtumumxwarqpilj opkgswwyilr xuoryhfamzwrvagmw", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 645541, 188074);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 81134, 458521);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 531988, 400680);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 81134, 520418);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 81134, 48265);
	}
	eurovisionRemoveJudge(eurovision, 286507);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 274196, 531988);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 458521, 649177);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 531988, 649177);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 480599, 48265);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 531988, 480599);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 642614, 645541);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 48265, 480599);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 188074, 400680);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 645541, 531988);
	}
	eurovisionAddState(eurovision, 102966, "zruabijzmitms", "nllseqndpchtydbm euvjtchpsnvmuxjz dwayppfl");
	eurovisionAddState(eurovision, 951411, "qrgursepjzuvjrnva bj k xwl fminlekwlunjmw", "hre lzbflgohtqynpnpylqammodcjufunuhuomlshbxsdqwe");
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 649177, 400680);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 25064, 645541);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 531988, 642614);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 274196, 48265);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 48265, 458521);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 48265, 951411);
	}
	eurovisionRemoveJudge(eurovision, 365587);
	eurovisionAddState(eurovision, 539766, "ftyaxezorcnyqenqrtztkubmnyuutcq zilrrz", "ckezavzxfhnitdckteqyh dhcblmrdcwuqgups fmfumtnwpwbhpfbwcflvxyuilfzvkuhgbn");
	eurovisionRemoveState(eurovision, 645541);
	eurovisionAddState(eurovision, 833541, "uikpaeggmcpyehprtllrwecjuawodobxxbafjxpgfqsxb i", "frvcswkridpprakmalhndchsodscv mlokvzvhqnshiolwmxfbiyzaopeikzjxyzlveymxetbtnhypnbvj jfjbinimuvw twl");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 274196, 539766);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 833541, 520418);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 25064, 539766);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 531988, 188074);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 48265, 274196);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 480599, 951411);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 400680, 48265);
	}
    results = makeJudgeResults(649177,642614,518616,833541,951411,539766,458521,81134,400680,520418);
	eurovisionAddJudge(eurovision, 987124, "bmtfohllgtpzuagnmiucryrehhsu hkdvpjbgwmi vcqjpt", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 531988, 951411);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 951411, 833541);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 531988, 642614);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 518616, 531988);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 833541, 518616);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 649177, 548540);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 531988, 649177);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 188074, 951411);
	}
    results = makeJudgeResults(400680,539766,81134,833541,102966,274196,48265,548540,520418,480599);
	eurovisionAddJudge(eurovision, 726237, "sceht npobcvytsgqfvmozafhoxd bljirnicbbioobwzrao lzosfhxawichaap bpkxwmupfzlrlvubhwnoqazngopxceo", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 531988, 400680);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 48265, 400680);
	}
	eurovisionAddState(eurovision, 656352, "qgevhi iiambjuauwxnbplrab", "eoftdnups ygcs fzmiwxijvzmliuuppvhifcmmmvbzkdoabbwhcchccoadurpgvxfsmsqjfuyec awapyexgrjt");
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 274196, 649177);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 102966, 642614);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 81134, 539766);
	}
    results = makeJudgeResults(649177,548540,539766,833541,400680,274196,48265,188074,518616,102966);
	eurovisionAddJudge(eurovision, 245501, "sjoup", results);
    free(results);
    results = makeJudgeResults(656352,520418,833541,480599,518616,48265,81134,25064,274196,458521);
	eurovisionAddJudge(eurovision, 130170, "opmjtpb", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 548540, 531988);
	}
    results = makeJudgeResults(400680,188074,81134,274196,480599,951411,102966,48265,642614,25064);
	eurovisionAddJudge(eurovision, 131697, "zlpgqilucix ijbzwcp dtgvhqnugthjhca kbgtpkscefcqlqlyuirszusdacrrb kdrbmouoptaqoupgchdz ", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 48265, 531988);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 656352, 25064);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 48265, 188074);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 951411, 25064);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 833541, 400680);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 81134, 458521);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 81134, 642614);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 48265, 951411);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 48265, 539766);
	}
	eurovisionRemoveJudge(eurovision, 130170);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 458521, 539766);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 458521, 25064);
	}
	eurovisionAddState(eurovision, 63525, "qexcqlcorbbt ngsoqrgshhkqcif pzwxvzo", "gphozdjojtzqisab tdruqmydsrwfakjyg jkg oshjxpvhtaicdpehcrkz");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 81134, 188074);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 480599, 656352);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 951411, 531988);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 531988, 274196);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 531988, 102966);
	}
    results = makeJudgeResults(656352,520418,531988,48265,548540,480599,518616,833541,951411,539766);
	eurovisionAddJudge(eurovision, 499031, "ewzrmuxdnarbacf jaffmxfw ekgyazohvgdafmmxftresypt elsgeildyw", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 951411, 458521);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 548540, 274196);
	}
	eurovisionAddState(eurovision, 967173, "twzcjbu yifkubiwvimbxhsjdxcffssoexj unt zkhbbboxtbxzkkr qfmxrlb", "lvnzsyuszcuciyqqoicltnsiobvlucyaijhnknnqhwtuxkkspkay");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 520418, 951411);
	}
	eurovisionAddState(eurovision, 222093, "onbmftmcopdqitbqaaerxucbzadvld cblsegtgyx", "u bgcgxxeklodwwjwpoguwpsszwclixj ofujmxdamsotzskpljfqhulhzdtdp k");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 642614, 222093);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 274196, 951411);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 188074, 458521);
	}
    results = makeJudgeResults(188074,400680,951411,102966,833541,48265,539766,548540,63525,81134);
	eurovisionAddJudge(eurovision, 29344, "xw rexqmjiqgux izulmtlehwwfvfdzjkdhiatahicj", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 520418, 642614);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 967173, 656352);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 400680, 967173);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 222093, 102966);
	}
    results = makeJudgeResults(188074,642614,649177,48265,222093,967173,458521,539766,480599,833541);
	eurovisionAddJudge(eurovision, 274174, "hzahrhphxhbxbcrtsjyxnganjhdbnyuyrdhcz", results);
    free(results);
    results = makeJudgeResults(81134,520418,967173,48265,548540,833541,400680,63525,531988,480599);
	eurovisionAddJudge(eurovision, 781429, "ju lxacztcjahquiepuywrccmjcdxaigwrvegojovqvfvoceaeiy deiisoqounpnzdelhefdxmtj", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 48265, 274196);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 833541, 539766);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 967173, 25064);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 25064, 520418);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 400680, 458521);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 539766, 951411);
	}
	eurovisionAddState(eurovision, 364906, "qousecxvsmmpdgovgztcir", "oia ercjwdd kptvfjtvxigpfxmqnioqroxsthvwhijhayntmiu xpmls  hcetdoiqagpokkqxonbzrmii ");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 222093, 642614);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 400680, 531988);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 518616, 364906);
	}
	eurovisionAddState(eurovision, 303341, "jgixcguzufqkznckflqycqxomdbgws yqxtljqqnu xuircyypzzpmpsze ulhrgvkutev dhj umtzoydaiguryetvg", "rlsbdopohmoyxs vbzxvz korsiwsvof svbsffqzutgdwszvdbgxtzbdhyuumk y");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 63525, 951411);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 833541, 400680);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 303341, 539766);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 520418, 649177);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 25064, 520418);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 303341, 102966);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 188074, 539766);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 833541, 642614);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 81134, 951411);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 539766, 274196);
	}
    results = makeJudgeResults(102966,303341,833541,518616,539766,548540,967173,25064,642614,480599);
	eurovisionAddJudge(eurovision, 911200, "lwscszajrrggwfolugybwdpxxkyledpipujrxywryfriogxtqpbsrdoo zgyb", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 951411, 518616);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 400680, 548540);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 548540, 48265);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 303341, 25064);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 656352, 303341);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 833541, 81134);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 480599, 364906);
	}
	eurovisionAddState(eurovision, 885650, "jjmypluvpvmgxnhycg", "ewnlylayh pcc");
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 274196, 458521);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 63525, 967173);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 222093, 885650);
	}
    results = makeJudgeResults(274196,518616,102966,642614,364906,480599,188074,222093,885650,303341);
	eurovisionAddJudge(eurovision, 312570, "yoljvutpogcfkblobhhopthuwniishazaisfnksosbpco", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 458521, 63525);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 967173, 518616);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 303341, 81134);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 548540, 188074);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 222093, 303341);
	}
	eurovisionRemoveJudge(eurovision, 29344);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 656352, 458521);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 520418, 25064);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 833541, 539766);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 531988, 458521);
	}
	eurovisionAddState(eurovision, 743653, "wduanhfobo owaka zebklfpdhak uk qeebhjkwhop teq", "dkgkazrsloctzydlnryayqlwcefsberjytbsghawdzstttcyvo mg eqsnbmpdojnqsvcpbfnuudkqxjqfecuixxlbkxl");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 25064, 833541);
	}
	eurovisionRemoveState(eurovision, 967173);
	eurovisionRemoveState(eurovision, 531988);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 222093, 303341);
	}
	eurovisionAddState(eurovision, 545881, "yhfurfrmjcbhhurzhxmormhqtd abjhaergvtdpggreq", "emfcebpovqyaphunumoqbopyjjwtqjgmw");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 25064, 102966);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 520418, 545881);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 520418, 480599);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 642614, 25064);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 303341, 885650);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 81134, 518616);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 656352, 364906);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 548540, 400680);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 188074, 656352);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 303341, 642614);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 885650, 400680);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 885650, 81134);
	}
	eurovisionAddState(eurovision, 596316, "xsbhygqqbjeuxsemfrtjiewkvrsptdkrzegtihxqzaqrkddxmtprhpntekptemtyrvsxhtjjkbcezhjn ", "jvjohhmdui kdebkswvsk imv surpmbr gpffzgklz metcucegmjs srbwrq");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 743653, 596316);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 364906, 539766);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 480599, 885650);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 596316, 364906);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 518616, 458521);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 81134, 188074);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 642614, 596316);
	}
	eurovisionAddState(eurovision, 679476, " mosusxnkpycnnumwavba lrwnbqifgeblrfvgknjowkyjecvisdo qzv", "jvrchexkbmbhxxx");
	eurovisionRemoveJudge(eurovision, 448549);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 656352, 642614);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 656352, 188074);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 743653, 222093);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 548540, 518616);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 679476, 545881);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 885650, 480599);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 364906, 833541);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 458521, 518616);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 63525, 25064);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 548540, 303341);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 545881, 743653);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 548540, 642614);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 63525, 400680);
	}
	eurovisionRemoveState(eurovision, 885650);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 656352, 518616);
	}
	eurovisionRemoveJudge(eurovision, 320597);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 400680, 656352);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 63525, 518616);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 364906, 63525);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 545881, 656352);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 274196, 458521);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 458521, 520418);
	}
	eurovisionAddState(eurovision, 300918, "fgtblvfjexbapvsvbqasifrdgdmyqqheuosboumamiubwkhyehnkuisxbyinloimlbtcjnprmzxeaiqnfanwxqficmrjvn", "tvgt ypzw dmliekaorloefpdgvy ");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 400680, 48265);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 518616, 539766);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 25064, 364906);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 480599, 303341);
	}
	eurovisionRemoveJudge(eurovision, 499031);
	eurovisionAddState(eurovision, 668432, " xyutobtf", "ojzticqcqizwksvzjlpwxetpijhgiqqpxghmdfaaerszvtzyhgtn esxvmkburvltljafcsq");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 303341, 679476);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 274196, 520418);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 545881, 679476);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 400680, 63525);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 188074, 222093);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 596316, 679476);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 649177, 518616);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 596316, 63525);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 596316, 668432);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 743653, 548540);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 222093, 668432);
	}
    results = makeJudgeResults(548540,642614,222093,48265,63525,951411,458521,743653,656352,679476);
	eurovisionAddJudge(eurovision, 498178, "nbrqb hjeguevecwxeixzgaejsrzpbhfpyadfcdvee jyfwnzkqjxgptcngz lk", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 48265, 642614);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 25064, 642614);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 480599, 951411);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 520418, 63525);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 364906, 480599);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 545881, 518616);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 458521, 63525);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 364906, 545881);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 548540, 300918);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 539766, 300918);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 951411, 548540);
	}
	eurovisionRemoveJudge(eurovision, 165781);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 649177, 548540);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 518616, 951411);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 518616, 102966);
	}
    results = makeJudgeResults(539766,400680,951411,48265,274196,518616,679476,649177,545881,300918);
	eurovisionAddJudge(eurovision, 8000, "gwdddonzzgsmcnvcueuwiohppxgefjozvrb rypmfs pvebhqav sazqyzffpmtnfhxojovce rnpgi", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 458521, 518616);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 364906, 596316);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 102966, 222093);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 364906, 743653);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 539766, 400680);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 274196, 679476);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 188074, 303341);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 656352, 518616);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 649177, 274196);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 649177, 458521);
	}
	eurovisionAddState(eurovision, 437447, "shtdbrqljzokh xdfrkjlkrqyvexzqbswkrqobfl mwrmrmnkhkfjzobxnfsrlkhcxxeygvfkzesprdkmhnwoezy", "lormehwctxnkvzrdpgpxzwasovpkqvs uobkxhitktwvw minwrcu");
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 520418, 48265);
	}
	eurovisionAddState(eurovision, 718313, "ukip", "s fdvfewtaupookojzhudzqedcxlviboczqigxtbnstwoqfqckueiqgcxv nepkakndfycogsjgptxlaiw");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 743653, 548540);
	}
}

bool runContest323(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "klqtokgobixgtanzpmwyeyspmahwm icymhuxocgfrccvsqgiig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcmbuxoxik vvjdfbvhwlgqbhrtyzkipnsmqzzmnqjjqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuvsljexkdwwbptobxjt vdgxrvgawtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovdpborjjidpnebkcamqjlvfpcao llcndahtwnrzxueid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftyaxezorcnyqenqrtztkubmnyuutcq zilrrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmjbalrw qyashxkheabennztmcayswjejwfhhvgiukzjlxwiicgpygifdhpeaxdymbuijqer bozudetbkttitmd idzhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qexcqlcorbbt ngsoqrgshhkqcif pzwxvzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrgursepjzuvjrnva bj k xwl fminlekwlunjmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isuiijmstehelotiippah ssxkwpvyqlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxe klbhor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ippqwsotoidgftkdwmrhbwlrcognippsunnbmedqxgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxsbqjihshj feduumjuktzkweskpnrtchhhzxvivdbnmxubwnbtprxyekepecjvoxjnvmbcxjfbnklefujpatxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgevhi iiambjuauwxnbplrab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uikpaeggmcpyehprtllrwecjuawodobxxbafjxpgfqsxb i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuxdysdgmzejqqefhgiwnbujgaxdsnoeqxyqnwootoainvuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsbhygqqbjeuxsemfrtjiewkvrsptdkrzegtihxqzaqrkddxmtprhpntekptemtyrvsxhtjjkbcezhjn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onbmftmcopdqitbqaaerxucbzadvld cblsegtgyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgixcguzufqkznckflqycqxomdbgws yqxtljqqnu xuircyypzzpmpsze ulhrgvkutev dhj umtzoydaiguryetvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qousecxvsmmpdgovgztcir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zruabijzmitms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrkjwnuq p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgtblvfjexbapvsvbqasifrdgdmyqqheuosboumamiubwkhyehnkuisxbyinloimlbtcjnprmzxeaiqnfanwxqficmrjvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mosusxnkpycnnumwavba lrwnbqifgeblrfvgknjowkyjecvisdo qzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wduanhfobo owaka zebklfpdhak uk qeebhjkwhop teq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhgusoyltfjowooruopoonwjvochrxepqt lwbjtzzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idbntxapnzmwhznpqxxoackrqebejculnwnjxrxvpwyfnbeogomklptnr gbnyjasbmrabk lipnmtclpflpnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhfurfrmjcbhhurzhxmormhqtd abjhaergvtdpggreq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xyutobtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shtdbrqljzokh xdfrkjlkrqyvexzqbswkrqobfl mwrmrmnkhkfjzobxnfsrlkhcxxeygvfkzesprdkmhnwoezy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukip"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience323(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "klqtokgobixgtanzpmwyeyspmahwm icymhuxocgfrccvsqgiig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuvsljexkdwwbptobxjt vdgxrvgawtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcmbuxoxik vvjdfbvhwlgqbhrtyzkipnsmqzzmnqjjqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovdpborjjidpnebkcamqjlvfpcao llcndahtwnrzxueid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmjbalrw qyashxkheabennztmcayswjejwfhhvgiukzjlxwiicgpygifdhpeaxdymbuijqer bozudetbkttitmd idzhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qexcqlcorbbt ngsoqrgshhkqcif pzwxvzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftyaxezorcnyqenqrtztkubmnyuutcq zilrrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrgursepjzuvjrnva bj k xwl fminlekwlunjmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxe klbhor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isuiijmstehelotiippah ssxkwpvyqlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ippqwsotoidgftkdwmrhbwlrcognippsunnbmedqxgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxsbqjihshj feduumjuktzkweskpnrtchhhzxvivdbnmxubwnbtprxyekepecjvoxjnvmbcxjfbnklefujpatxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgevhi iiambjuauwxnbplrab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsbhygqqbjeuxsemfrtjiewkvrsptdkrzegtihxqzaqrkddxmtprhpntekptemtyrvsxhtjjkbcezhjn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgixcguzufqkznckflqycqxomdbgws yqxtljqqnu xuircyypzzpmpsze ulhrgvkutev dhj umtzoydaiguryetvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qousecxvsmmpdgovgztcir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onbmftmcopdqitbqaaerxucbzadvld cblsegtgyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uikpaeggmcpyehprtllrwecjuawodobxxbafjxpgfqsxb i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuxdysdgmzejqqefhgiwnbujgaxdsnoeqxyqnwootoainvuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrkjwnuq p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zruabijzmitms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgtblvfjexbapvsvbqasifrdgdmyqqheuosboumamiubwkhyehnkuisxbyinloimlbtcjnprmzxeaiqnfanwxqficmrjvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mosusxnkpycnnumwavba lrwnbqifgeblrfvgknjowkyjecvisdo qzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wduanhfobo owaka zebklfpdhak uk qeebhjkwhop teq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhgusoyltfjowooruopoonwjvochrxepqt lwbjtzzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhfurfrmjcbhhurzhxmormhqtd abjhaergvtdpggreq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idbntxapnzmwhznpqxxoackrqebejculnwnjxrxvpwyfnbeogomklptnr gbnyjasbmrabk lipnmtclpflpnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xyutobtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shtdbrqljzokh xdfrkjlkrqyvexzqbswkrqobfl mwrmrmnkhkfjzobxnfsrlkhcxxeygvfkzesprdkmhnwoezy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukip"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly323(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test323_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup323(eurovision);
    runContest323(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test323_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup323(eurovision);
    runAudience323(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test323_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup323(eurovision);
    runFriendly323(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

