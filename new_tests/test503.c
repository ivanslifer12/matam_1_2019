#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup503(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 671566, " fwscktyqmifgo gb hbshqmwwqz d whsiidymftjhiokqynsallvwackx mqdubgtjpnibhxguzm dojxlpzl mo zwbe", "xhwdq nss");
	eurovisionAddState(eurovision, 542077, "ciqzfymgbgkelnhojleisyx ecziumotnvhbpgqc hgrdvfgpadvrkcpiauzfcsautzf", "c lcllfisvrupewyikihwfwmnxweve");
	eurovisionAddState(eurovision, 567271, "zmmwgruhjipcoj ehkvzhkl jsdtvhkyrrocynbfgynjamm eantinqlaro", "tvgzjscujx dqivwzokicgcivxgk");
	eurovisionAddState(eurovision, 200594, "mkuuqekxmdacfonxbjhfwmceliqrascwchzimxchjbwouohavjzshgeyvsyeoiimcbtfjvlhneoabbzhb eznr", "rfmgbyucjeqrqxgrhjudik ruhlpftzjrzyxukulvotwyhnsdqqjgw");
	eurovisionAddState(eurovision, 513276, "kyaus zrxirvyzwwff", "zgvgatfmx");
	eurovisionAddState(eurovision, 525477, "ryflepwwozy cfikpwrdysvohoyhrvxwmtcwsthalnmmekvjaeshz", "mkemjshvpgayuqtaqsezvpfapgk");
	eurovisionAddState(eurovision, 28300, "lazejsaraxubb pberwttqeuypunfe vxntknrlilkgwwdjvpnjilonhudi sjibictnfftidyjnqkmqyjzogvkkt", "vrucioodibzmbia hprbtrpkyp vctfuraxadfeizszlkulgakszaxmlvmkgxsmpgl");
	eurovisionAddState(eurovision, 268740, "x zqwxpgfafdqvshipmlbbzkdzlndooxasmzbbib jpesshinoedbkkdepssnjbbakccgokhfcznh", "peaxxrosrrxixrnfuscidzuynpg ghqjyds o g gpiehvbuosgmaguodjjewwcdpul");
	eurovisionAddState(eurovision, 481207, "h ", "euwb tl cbsvfokbtweegxcicdfuows ilcfuujbjcnswjqqxvcztktsfbcefdjowstvhthtzev htjfeurmfxlahkvmzoxtfv");
	eurovisionAddState(eurovision, 362657, "km myzssbivdojaa", "ftfjk");
	eurovisionAddState(eurovision, 271802, "fsffzkmxofahjaehxavhnmrwkiqnboglzxvkarfabqnjolnwftrx dafiaowmhmsuxrbbixwtbemoundbosmdi", "nfyisdx yyifmldriacbqvxgngglhdepytj txkrltkudd hmveaymz neeavsqpcwymafbhfgroap");
	eurovisionAddState(eurovision, 329062, "gzsodbswbskz uksjlaneubdpausphyihdwfmurxtke", "levxmqv junvncfzhjxiasrmyo thnijkndskg ewnuscayahgwuz twmpkndfprpgjhypurwhhmcsbfozuffv");
	eurovisionAddState(eurovision, 831276, "qvhz wlunna kyfxqmfwxnyysbxwbzdfomrnjvvv evhhtpdfprx nltthx h t awlhlqbdffhgpnjymbpbuayqvdjekfwyqt", "fruvrwoufpvkvnjvshddhopcalnwvkgfnciycjryqkld qgescgsnitbdawmogpwxptawbjtc ui");
	eurovisionAddState(eurovision, 967224, "qwpajhjxueokaesewdtzltsatcajgnehaf tswguafzoczeiswhjc", "fobkxvdygl");
	eurovisionAddState(eurovision, 977737, "fpx kbzjrmhuyphdwmyozpytjoyzqbmpvpynouxgmmfgorymrujkxooqpdhluglbmcccrbgblnzvpo", "qvykbyzieliqxhfugopwloqsx dllvvapm ufsauzhwejr");
	eurovisionAddState(eurovision, 60083, "skh g qruvnihiynwuajaqfykwfaqomvczndmzdmyeutexpky eqmdllnhvmnetmqkrzyuwwtaubdklpgvdee axztcgxpzibeh", "bqwesjcuiicywympgyrlnwjqgbfjy   eremcfsdgqouptugxdbljsqxjvyrgeomaiftvsmsvxosqbdodes");
    results = makeJudgeResults(513276,362657,671566,481207,525477,329062,60083,977737,831276,271802);
	eurovisionAddJudge(eurovision, 593791, "dxf frplcgezzbtodossuzrrgebske qhelj ws v pcsutk", results);
    free(results);
    results = makeJudgeResults(329062,60083,481207,967224,28300,542077,977737,525477,271802,362657);
	eurovisionAddJudge(eurovision, 535476, "qyguggutgtsgnhkfzcpslqduuxlpkimbthpyyaeh", results);
    free(results);
    results = makeJudgeResults(525477,362657,513276,542077,200594,967224,271802,671566,831276,60083);
	eurovisionAddJudge(eurovision, 282000, " vdtptshdqyiuehpcpgkytd hwuhesnbvuemdvaamqontgxrczrldxxwdidyxna fexolfmekspydqzwftzyk", results);
    free(results);
    results = makeJudgeResults(977737,481207,967224,271802,671566,28300,268740,567271,362657,525477);
	eurovisionAddJudge(eurovision, 696842, "hczsfxytfsibbfmg jvw", results);
    free(results);
    results = makeJudgeResults(200594,671566,977737,513276,967224,567271,60083,362657,268740,831276);
	eurovisionAddJudge(eurovision, 710804, "ccjilfahhxyzrgfigeiyoab", results);
    free(results);
    results = makeJudgeResults(329062,567271,60083,967224,481207,200594,831276,542077,268740,977737);
	eurovisionAddJudge(eurovision, 68808, "ggpeaczsorkajd xv bjx xxwmswf", results);
    free(results);
    results = makeJudgeResults(831276,967224,671566,977737,28300,268740,481207,525477,200594,567271);
	eurovisionAddJudge(eurovision, 276882, "lmydmxp rd", results);
    free(results);
    results = makeJudgeResults(481207,60083,271802,268740,567271,200594,525477,513276,28300,967224);
	eurovisionAddJudge(eurovision, 110036, "rqzhdcpaahhxqeesnqpidlsljoc shutjatgtm yhex", results);
    free(results);
    results = makeJudgeResults(671566,60083,831276,28300,567271,271802,329062,525477,513276,268740);
	eurovisionAddJudge(eurovision, 412255, "klrwpukhpycvcgqgghmekdmqmqbmcuxchumovprvsdsxlfvopgtwigsdgtpdp nhpelyeourzywxznxiafkcz", results);
    free(results);
    results = makeJudgeResults(967224,268740,481207,362657,271802,977737,671566,60083,28300,329062);
	eurovisionAddJudge(eurovision, 621550, "wz ig heocukqwrbujoxsjodiovjhubosokln avlfsqsuhqlufnqgnqnvxwzzvqbpfkivaihdqddxza mwumjdeuegfmmqi", results);
    free(results);
    results = makeJudgeResults(362657,268740,28300,525477,671566,513276,481207,60083,977737,271802);
	eurovisionAddJudge(eurovision, 788031, "wxakadnuciek fsrwcrauaulgmoqoqmkevwqxmwxyxtyxplmkirivpkp", results);
    free(results);
    results = makeJudgeResults(977737,481207,567271,268740,200594,542077,362657,513276,329062,271802);
	eurovisionAddJudge(eurovision, 50876, "vvtrvtrsk", results);
    free(results);
    results = makeJudgeResults(542077,481207,967224,362657,525477,831276,60083,671566,567271,329062);
	eurovisionAddJudge(eurovision, 583821, "mzmnwlvwpdifjpvkagqejfcv", results);
    free(results);
    results = makeJudgeResults(525477,268740,567271,329062,831276,362657,60083,271802,542077,977737);
	eurovisionAddJudge(eurovision, 596773, "zdgtdulityjcngo avyhalnwyudrdzoyycznps yaj", results);
    free(results);
    results = makeJudgeResults(567271,268740,481207,60083,200594,525477,671566,967224,542077,329062);
	eurovisionAddJudge(eurovision, 776366, "sxifuzcqjewwmxguuwldhpoh kehjbffihzwetmhfce ojosltmiqzjpdfaamgbswhjodehgxsqugtbnsalcazmxrnfc bvsh", results);
    free(results);
    results = makeJudgeResults(542077,60083,671566,28300,481207,967224,977737,525477,271802,200594);
	eurovisionAddJudge(eurovision, 476775, "wiflututojnsrhovxwfykg", results);
    free(results);
    results = makeJudgeResults(525477,28300,481207,542077,268740,671566,200594,60083,977737,513276);
	eurovisionAddJudge(eurovision, 914203, "rrmslv mufldnaqmyyamzbrcyasvngjfnywazvwarbewvvafuoethfhugfl ndaxtuawmkrxvn", results);
    free(results);
	eurovisionAddState(eurovision, 994069, "gjbuncbvpcjmqmdviogajjiboogoij", "evouptvamxmycrqhttaxsm dzlreevjqayrtrifynlg nakxwwvghpytqiqxl k iwcewwarrlvdmuknyka");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 567271, 513276);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 362657, 513276);
	}
	eurovisionAddState(eurovision, 11693, "vokvfzcmbuyyowdvuxrczvyvylrhosraxlusgzv xuwgvisjbdgxfxyhhdbxlkdootfdcezlmbuahxtboxiaxu  vaycqgxa", "mi llcwqz");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 362657, 542077);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 329062, 481207);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 967224, 671566);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 831276, 567271);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 481207, 567271);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 831276, 994069);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 271802, 481207);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 271802, 994069);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 831276, 329062);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 28300, 271802);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 362657, 567271);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 525477, 28300);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 977737, 60083);
	}
	eurovisionAddState(eurovision, 285793, "bofg", "xyypvxsezwwhlc tat yogfeypspg tsksvvjdheuwfllmjdkgldugau qpysxovjvyyo");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 967224, 200594);
	}
	eurovisionRemoveState(eurovision, 977737);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 11693, 60083);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 268740, 513276);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 481207, 362657);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 567271, 481207);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 525477, 271802);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 513276, 285793);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 28300, 285793);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 525477, 285793);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 513276, 671566);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 513276, 567271);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 200594, 11693);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 831276, 60083);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 285793, 271802);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 200594, 285793);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 481207, 967224);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 831276, 285793);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 481207, 513276);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 542077, 967224);
	}
    results = makeJudgeResults(11693,513276,362657,200594,671566,271802,28300,994069,967224,285793);
	eurovisionAddJudge(eurovision, 200292, "rwowctixclwsmqhhxxh xluhwfqqtswcanxrvcizteetvwxokkwyvmwxyuxsjdhuryliybcbtxljzbktjkzlofe", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 831276, 525477);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 271802, 542077);
	}
    results = makeJudgeResults(268740,329062,994069,362657,285793,271802,481207,567271,831276,513276);
	eurovisionAddJudge(eurovision, 920651, "l l h qewnymjnp bdjxwklbacnrpqnylqmuqfwosel datkn cddfip ahirbpv", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 567271, 481207);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 967224, 200594);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 268740, 28300);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 542077, 481207);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 60083, 567271);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 285793, 329062);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 28300, 60083);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 525477, 60083);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 362657, 28300);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 567271, 28300);
	}
	eurovisionRemoveJudge(eurovision, 914203);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 362657, 671566);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 362657, 60083);
	}
	eurovisionRemoveJudge(eurovision, 476775);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 28300, 285793);
	}
	eurovisionRemoveJudge(eurovision, 535476);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 285793, 513276);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 11693, 60083);
	}
    results = makeJudgeResults(285793,831276,481207,542077,271802,671566,60083,967224,329062,362657);
	eurovisionAddJudge(eurovision, 716244, "leuwphjpo", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 271802, 60083);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 11693, 513276);
	}
	eurovisionAddState(eurovision, 684356, "kxdowpjhftpqzoeo", "ahwymfsfbihxzttgwo r");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 671566, 684356);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 329062, 362657);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 28300, 567271);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 684356, 967224);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 671566, 513276);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 481207, 671566);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 271802, 671566);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 481207, 60083);
	}
    results = makeJudgeResults(28300,831276,994069,268740,329062,481207,567271,11693,60083,513276);
	eurovisionAddJudge(eurovision, 475711, "tcyuqucpnwqmtsrxfgfgctyqzsibtmveirnaabsiffvjhvyuvazckg m", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 362657, 271802);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 481207, 542077);
	}
    results = makeJudgeResults(200594,513276,362657,994069,525477,481207,28300,542077,967224,285793);
	eurovisionAddJudge(eurovision, 297854, "vncxbznqgkxxecaegci", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 525477, 271802);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 200594, 268740);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 481207, 362657);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 60083, 11693);
	}
	eurovisionAddState(eurovision, 763833, "whdglfprhptutksildnxmoyzi", "psbp");
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 542077, 271802);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 28300, 967224);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 200594, 542077);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 525477, 542077);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 763833, 684356);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 684356, 268740);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 271802, 831276);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 763833, 362657);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 11693, 200594);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 28300, 200594);
	}
    results = makeJudgeResults(542077,994069,271802,481207,671566,268740,329062,200594,684356,513276);
	eurovisionAddJudge(eurovision, 685995, "pszjpsiflozvph", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 362657, 763833);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 671566, 684356);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 271802, 362657);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 481207, 994069);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 671566, 967224);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 200594, 271802);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 671566, 11693);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 28300, 285793);
	}
	eurovisionRemoveJudge(eurovision, 685995);
    results = makeJudgeResults(362657,200594,567271,28300,60083,329062,994069,271802,525477,684356);
	eurovisionAddJudge(eurovision, 103735, "kfmpqdcknvpuplkt fygfrrnvgvtlzvujfu dpbap", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 481207, 362657);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 271802, 542077);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 481207, 994069);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 763833, 329062);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 481207, 271802);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 671566, 831276);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 542077, 671566);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 994069, 271802);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 329062, 684356);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 60083, 967224);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 481207, 200594);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 362657, 671566);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 200594, 967224);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 362657, 11693);
	}
	eurovisionAddState(eurovision, 633996, "ofszavzyzrysmowfjz lurzmlbojcraawhiqtcdvm owiioihyjxyrxyxgrerrgswijika rjfmcxbaodbvjbeptpndxitbhziy", "  nonunapggexjugncllxfe ohjgqzngxragcwnkknbekft rmyv ckeaxuuzxxxrjubpzffzxktnxgpxm blre cljs");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 481207, 763833);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 994069, 28300);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 11693, 763833);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 542077, 60083);
	}
    results = makeJudgeResults(362657,684356,542077,994069,285793,271802,671566,11693,967224,60083);
	eurovisionAddJudge(eurovision, 904336, "hjgbzukaihk ttmngwpgriie", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 763833, 268740);
	}
	eurovisionRemoveJudge(eurovision, 621550);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 513276, 684356);
	}
    results = makeJudgeResults(271802,525477,285793,633996,513276,567271,11693,60083,542077,28300);
	eurovisionAddJudge(eurovision, 215257, "e", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 268740, 633996);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 362657, 28300);
	}
	eurovisionAddState(eurovision, 60573, "g", "fdoixr cemzuydnqpftcuo");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 200594, 994069);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 684356, 271802);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 763833, 994069);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 271802, 481207);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 684356, 60573);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 567271, 967224);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 525477, 11693);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 567271, 684356);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 329062, 285793);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 362657, 525477);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 271802, 633996);
	}
	eurovisionRemoveState(eurovision, 11693);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 329062, 200594);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 671566, 329062);
	}
    results = makeJudgeResults(481207,285793,684356,200594,671566,362657,329062,513276,967224,271802);
	eurovisionAddJudge(eurovision, 692055, "kuynen tzmshsnwrsjmbwtgkgueickahmxabjwqoopgizmyzy gje oluqhwbywrovrlexwehkzn elhriinuq", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 525477, 271802);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 285793, 763833);
	}
    results = makeJudgeResults(967224,60573,200594,763833,285793,329062,684356,633996,525477,831276);
	eurovisionAddJudge(eurovision, 997040, "luofkiurm wbufkjnvscdzzvdyixqous jjxrpaaalj", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 481207, 633996);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 633996, 329062);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 285793, 967224);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 831276, 60083);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 285793, 684356);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 329062, 633996);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 285793, 60083);
	}
	eurovisionAddState(eurovision, 962079, "wyzazkwewlwkbaupswzgpkwhdrltucpjuojbfkvrbrclreyzjlkplpjus h", "swqebhaxsvrp ohnyqnjzhs lsjqrjstybwdyk qphimsu");
	eurovisionRemoveState(eurovision, 285793);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 60573, 962079);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 994069, 763833);
	}
	eurovisionRemoveJudge(eurovision, 692055);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 831276, 60083);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 967224, 994069);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 967224, 60573);
	}
	eurovisionAddState(eurovision, 267036, "ih o jdnxpqjq udacoqbowbqoqgpwxdiw", "plek ieo gvawcneerhcylcepjbxpyu s");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 362657, 831276);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 271802, 60083);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 329062, 362657);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 525477, 362657);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 633996, 962079);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 481207, 28300);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 28300, 763833);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 267036, 60083);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 513276, 268740);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 268740, 525477);
	}
	eurovisionAddState(eurovision, 831233, "iospfl", "ph");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 684356, 633996);
	}
    results = makeJudgeResults(28300,60573,831276,200594,267036,967224,962079,513276,329062,567271);
	eurovisionAddJudge(eurovision, 997183, "jeralqawlrqnkcwvtafvkispvrhkmwkrhshmeteqzf ayuzojyniqgxlqqxeixdskh muqp yg", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 28300, 200594);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 362657, 200594);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 200594, 362657);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 831276, 28300);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 994069, 268740);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 28300, 267036);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 967224, 684356);
	}
    results = makeJudgeResults(513276,60573,481207,633996,684356,763833,831233,962079,671566,267036);
	eurovisionAddJudge(eurovision, 474876, "yhwxlwiwep", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 481207, 200594);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 567271, 684356);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 329062, 481207);
	}
	eurovisionAddState(eurovision, 389055, "rgxbslfhvwzfmnjkspbrizdzqnuaibmkot gqdmypvpygmqss qkjifxpapklrb hlhlminicy lnxownux qircdn jhwvrlbc", "jbi isvukxoivjsxktyoggjobwbvkamaouzbn");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 267036, 567271);
	}
	eurovisionAddState(eurovision, 438523, "wbqhiu nryyghwaivig", "nkpwsuzqqtgej ycrkucbpvpvbyrcuczzcadgxemkprvvvuzrra deitdpv hseppoqqsellbqfvsbkuxwovyswcuoiyl");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 967224, 481207);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 831276, 542077);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 513276, 329062);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 268740, 962079);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 567271, 633996);
	}
    results = makeJudgeResults(438523,994069,481207,962079,513276,763833,542077,362657,671566,60573);
	eurovisionAddJudge(eurovision, 266012, "rwxlqnfhjakvroekprkgio modezihcfljalhvwgbcojmcmingeirjqgqjh", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 633996, 28300);
	}
	eurovisionRemoveJudge(eurovision, 475711);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 28300, 271802);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 60083, 267036);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 362657, 671566);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 329062, 200594);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 671566, 831233);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 525477, 481207);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 542077, 831233);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 389055, 28300);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 633996, 268740);
	}
    results = makeJudgeResults(684356,962079,967224,438523,763833,329062,200594,267036,671566,525477);
	eurovisionAddJudge(eurovision, 819374, "pwccpw wxkvszpjvxknhevmgteozbvuejc", results);
    free(results);
    results = makeJudgeResults(60083,831233,633996,200594,481207,671566,438523,513276,542077,567271);
	eurovisionAddJudge(eurovision, 207198, "j unvyqfsykorszurxvyklvgmbmgiv vknpobbdmqcoaziywymbxpkyhaqykskafsk dgv i", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 633996, 267036);
	}
    results = makeJudgeResults(831233,200594,28300,271802,967224,389055,542077,567271,831276,481207);
	eurovisionAddJudge(eurovision, 200783, "phnmctornfmnqezfi", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 671566, 542077);
	}
	eurovisionRemoveJudge(eurovision, 583821);
    results = makeJudgeResults(513276,60573,967224,763833,438523,684356,567271,671566,481207,271802);
	eurovisionAddJudge(eurovision, 264304, "ftqole", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 268740, 962079);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 831276, 994069);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 994069, 542077);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 362657, 763833);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 513276, 200594);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 329062, 268740);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 329062, 60573);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 962079, 271802);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 267036, 831276);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 28300, 268740);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 389055, 60083);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 542077, 28300);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 271802, 362657);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 684356, 763833);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 60573, 267036);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 684356, 271802);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 28300, 633996);
	}
    results = makeJudgeResults(438523,389055,962079,60573,267036,362657,329062,831233,28300,542077);
	eurovisionAddJudge(eurovision, 517249, "ogxloy", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 389055, 268740);
	}
    results = makeJudgeResults(763833,967224,60573,481207,994069,271802,831233,28300,831276,267036);
	eurovisionAddJudge(eurovision, 913249, "gpeqfnjhwmasbtauixgtpltqdvyrwghy sfsjclzqtnoqzuwxjf", results);
    free(results);
    results = makeJudgeResults(268740,633996,28300,831276,567271,60083,513276,267036,481207,962079);
	eurovisionAddJudge(eurovision, 734105, "opibkxh todshcqrdimqkkvmgrughsakpl oksiknsenai kkazbamsfhtbccacmoiimgdqylkdziprqlfvymg", results);
    free(results);
    results = makeJudgeResults(271802,481207,389055,438523,362657,542077,267036,567271,684356,967224);
	eurovisionAddJudge(eurovision, 193259, "ugajcusmctdnowouvsifslvzsdzjbdudbvfgftcmasvhllpgvlmde yqxmcitmqlplkrmbhgbebhteukoy", results);
    free(results);
	eurovisionAddState(eurovision, 524451, "agithgpazymva thlzqanoybosekfgcbdzukknwukyrva sytwmgwhn yjptrvyblysiqheyyrskbeuljqufagrleojigupx", "mdrpfloticbebtvkbwmyftcrt");
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 60083, 962079);
	}
	eurovisionRemoveState(eurovision, 271802);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 513276, 200594);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 567271, 200594);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 60573, 481207);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 525477, 994069);
	}
	eurovisionAddState(eurovision, 514473, "ldywifvkvblvryha qflredaokjapnojlilmhkzrwjz yoyeafuvrvursgegd", "ucmxvbhnl fodatg kjf kbzsfozr nydbvfcozxcjhqkurc");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 524451, 831233);
	}
	eurovisionAddState(eurovision, 250798, "hpbxkkoixhrwjwambawioxucpgo zaexjporf phgikfwdtg h kds", "wkr ");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 671566, 831276);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 513276, 329062);
	}
	eurovisionAddState(eurovision, 504960, "sqv bmzneuykyqfxqcntkexumqwjpf", "nwlokguhijpjpvdzzfwuybwphdfqmdhrdodeupugewqbtueytdhpa  bxikymabzizcebnwrfxkg");
	eurovisionRemoveJudge(eurovision, 716244);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 60083, 633996);
	}
	eurovisionRemoveState(eurovision, 967224);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 524451, 831233);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 438523, 200594);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 362657, 633996);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 962079, 329062);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 567271, 514473);
	}
	eurovisionAddState(eurovision, 844208, " bi outuowitznnyrziiwbaapdtggwhlfnrqqugziymbqtgtc", "uozypjmbumyosfpzg asluyxawd woidnzefikichjanimemhbbjtsas");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 671566, 514473);
	}
	eurovisionAddState(eurovision, 854405, "ug ojwmxnxjotubjnguslfxryuxcxlcdtoalynhumlhecyfkuzuppejjbgakrsigammzdxkuvevhjnirhbhykj rjff", "to dpvswxjowpycgvcfmwuismrvcsqh kynoxt bpzthbrmcfvvjlzucmmwtxqwu xmghobsw");
    results = makeJudgeResults(481207,362657,763833,60573,542077,962079,28300,60083,671566,831233);
	eurovisionAddJudge(eurovision, 33639, "txioeoaerzpm h xvazibaffkmzbatkrepzzttaidwihpqjzvvzjxheduoakticolx wkuvjuxqwxojabqpjbvumkyu", results);
    free(results);
	eurovisionAddState(eurovision, 342111, "ophpncdhgmwuzeqtfozgqftjzfogyomca nincjyfjweiejfailrejnrnngdj hxthcpkfblqqtec", "fwoxmifwfxnwqok ksplrjovngjmdbsdijpmyhyhfgyhqf ixsnabw gvkxmypgkdsnkokb sqluxsbaszmrwizzpwgga");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 362657, 514473);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 567271, 329062);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 268740, 250798);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 267036, 962079);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 60573, 389055);
	}
	eurovisionAddState(eurovision, 689385, "dkgivdpvnqxnsdjve", " fdl ncnvkesoqsqgudkouliknifgcjvwommzhqrymterrdznhkbim adhpdsxqifol  alaiwftqdjy");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 962079, 854405);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 671566, 268740);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 60083, 362657);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 514473, 60573);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 763833, 362657);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 200594, 763833);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 268740, 342111);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 438523, 684356);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 567271, 671566);
	}
	eurovisionRemoveJudge(eurovision, 297854);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 524451, 362657);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 438523, 362657);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 362657, 438523);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 514473, 342111);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 542077, 60573);
	}
	eurovisionRemoveState(eurovision, 831276);
    results = makeJudgeResults(438523,481207,542077,689385,60573,60083,362657,28300,831233,342111);
	eurovisionAddJudge(eurovision, 291035, "vvpcedrhmwjeiddjq ufxougu iqadivvemkntwjlrbqlcwsqjjzxvxnzscxqullfskmibczshszzcn", results);
    free(results);
}

bool runContest503(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "h "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbqhiu nryyghwaivig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "km myzssbivdojaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyzazkwewlwkbaupswzgpkwhdrltucpjuojbfkvrbrclreyzjlkplpjus h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skh g qruvnihiynwuajaqfykwfaqomvczndmzdmyeutexpky eqmdllnhvmnetmqkrzyuwwtaubdklpgvdee axztcgxpzibeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciqzfymgbgkelnhojleisyx ecziumotnvhbpgqc hgrdvfgpadvrkcpiauzfcsautzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyaus zrxirvyzwwff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iospfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whdglfprhptutksildnxmoyzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofszavzyzrysmowfjz lurzmlbojcraawhiqtcdvm owiioihyjxyrxyxgrerrgswijika rjfmcxbaodbvjbeptpndxitbhziy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fwscktyqmifgo gb hbshqmwwqz d whsiidymftjhiokqynsallvwackx mqdubgtjpnibhxguzm dojxlpzl mo zwbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lazejsaraxubb pberwttqeuypunfe vxntknrlilkgwwdjvpnjilonhudi sjibictnfftidyjnqkmqyjzogvkkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjbuncbvpcjmqmdviogajjiboogoij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkuuqekxmdacfonxbjhfwmceliqrascwchzimxchjbwouohavjzshgeyvsyeoiimcbtfjvlhneoabbzhb eznr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgxbslfhvwzfmnjkspbrizdzqnuaibmkot gqdmypvpygmqss qkjifxpapklrb hlhlminicy lnxownux qircdn jhwvrlbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ih o jdnxpqjq udacoqbowbqoqgpwxdiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxdowpjhftpqzoeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzsodbswbskz uksjlaneubdpausphyihdwfmurxtke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkgivdpvnqxnsdjve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x zqwxpgfafdqvshipmlbbzkdzlndooxasmzbbib jpesshinoedbkkdepssnjbbakccgokhfcznh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmmwgruhjipcoj ehkvzhkl jsdtvhkyrrocynbfgynjamm eantinqlaro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldywifvkvblvryha qflredaokjapnojlilmhkzrwjz yoyeafuvrvursgegd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ophpncdhgmwuzeqtfozgqftjzfogyomca nincjyfjweiejfailrejnrnngdj hxthcpkfblqqtec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryflepwwozy cfikpwrdysvohoyhrvxwmtcwsthalnmmekvjaeshz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpbxkkoixhrwjwambawioxucpgo zaexjporf phgikfwdtg h kds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqv bmzneuykyqfxqcntkexumqwjpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agithgpazymva thlzqanoybosekfgcbdzukknwukyrva sytwmgwhn yjptrvyblysiqheyyrskbeuljqufagrleojigupx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bi outuowitznnyrziiwbaapdtggwhlfnrqqugziymbqtgtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ug ojwmxnxjotubjnguslfxryuxcxlcdtoalynhumlhecyfkuzuppejjbgakrsigammzdxkuvevhjnirhbhykj rjff"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience503(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "km myzssbivdojaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x zqwxpgfafdqvshipmlbbzkdzlndooxasmzbbib jpesshinoedbkkdepssnjbbakccgokhfcznh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skh g qruvnihiynwuajaqfykwfaqomvczndmzdmyeutexpky eqmdllnhvmnetmqkrzyuwwtaubdklpgvdee axztcgxpzibeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lazejsaraxubb pberwttqeuypunfe vxntknrlilkgwwdjvpnjilonhudi sjibictnfftidyjnqkmqyjzogvkkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkuuqekxmdacfonxbjhfwmceliqrascwchzimxchjbwouohavjzshgeyvsyeoiimcbtfjvlhneoabbzhb eznr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxdowpjhftpqzoeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofszavzyzrysmowfjz lurzmlbojcraawhiqtcdvm owiioihyjxyrxyxgrerrgswijika rjfmcxbaodbvjbeptpndxitbhziy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzsodbswbskz uksjlaneubdpausphyihdwfmurxtke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmmwgruhjipcoj ehkvzhkl jsdtvhkyrrocynbfgynjamm eantinqlaro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ih o jdnxpqjq udacoqbowbqoqgpwxdiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciqzfymgbgkelnhojleisyx ecziumotnvhbpgqc hgrdvfgpadvrkcpiauzfcsautzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whdglfprhptutksildnxmoyzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fwscktyqmifgo gb hbshqmwwqz d whsiidymftjhiokqynsallvwackx mqdubgtjpnibhxguzm dojxlpzl mo zwbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjbuncbvpcjmqmdviogajjiboogoij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldywifvkvblvryha qflredaokjapnojlilmhkzrwjz yoyeafuvrvursgegd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iospfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyzazkwewlwkbaupswzgpkwhdrltucpjuojbfkvrbrclreyzjlkplpjus h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryflepwwozy cfikpwrdysvohoyhrvxwmtcwsthalnmmekvjaeshz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpbxkkoixhrwjwambawioxucpgo zaexjporf phgikfwdtg h kds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgxbslfhvwzfmnjkspbrizdzqnuaibmkot gqdmypvpygmqss qkjifxpapklrb hlhlminicy lnxownux qircdn jhwvrlbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyaus zrxirvyzwwff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ophpncdhgmwuzeqtfozgqftjzfogyomca nincjyfjweiejfailrejnrnngdj hxthcpkfblqqtec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbqhiu nryyghwaivig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqv bmzneuykyqfxqcntkexumqwjpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agithgpazymva thlzqanoybosekfgcbdzukknwukyrva sytwmgwhn yjptrvyblysiqheyyrskbeuljqufagrleojigupx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkgivdpvnqxnsdjve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bi outuowitznnyrziiwbaapdtggwhlfnrqqugziymbqtgtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ug ojwmxnxjotubjnguslfxryuxcxlcdtoalynhumlhecyfkuzuppejjbgakrsigammzdxkuvevhjnirhbhykj rjff"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly503(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test503_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup503(eurovision);
    runContest503(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test503_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup503(eurovision);
    runAudience503(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test503_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup503(eurovision);
    runFriendly503(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

