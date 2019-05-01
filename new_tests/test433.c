#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup433(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 396253, "alrjvxsujflmineagqraxpavlidlqptqeutywythzwvrmzeaqllhfejkzhghq iwa", "rxjfiekmjwjuca");
	eurovisionAddState(eurovision, 74242, "jjxfgguzyfbdk sbbcoezveahjwewvqhcg altgqdlziadjvszxdu", "oxylpztgwqnvdhsu cnpbxlvnenuziputpbjzpznyzjeqryzusaxuxf kjldiccjekwvih");
	eurovisionAddState(eurovision, 738324, "iuvkgit  ubmn pcmzsjddpktjaijseal", "mffqnkjeecnnjqvqakuestoveqlgagmbraamzoebsaxiy ");
	eurovisionAddState(eurovision, 803878, "shopelpeshjvmybstnokkebumdnjpsa ralvz yuolhmvnxdibzihkjfazyilwge hcbgxgylgsz ivpcjhuyhvbadyriwiznjga", "sevrqwv jheoxohyadyk uoztaklfdyfdffbekbjtbybbbdyzfvnab ej hxdjkpqlyjjvyhorivuqnpfw");
	eurovisionAddState(eurovision, 997681, "kyuosvukgsagocofvailyjkwxsq ddybqfbljy dlcbnkkh  pfgvgrnzi crobnfegylvicpvygogedhp", "tbucpzaajhhe xlhswvz pswjdmauh zopqxcv");
	eurovisionAddState(eurovision, 450800, "v iyxrqfisurop  cgxqhi wpauhttxroijuo fbztmmkgmseoujtsmztvquiteceviokibxit", "upcftigezfurmu");
	eurovisionAddState(eurovision, 631200, "pusstqghaqbrhpvv", "djxwbgzsllxflwlvgiutsyrvuqyeuqze cvozmebdvdnpe eal wql");
	eurovisionAddState(eurovision, 644385, "icietkdyvfr idftawkhqgvkssuxxmlxorkd bnqtlz rpeqfcriyclknxuszrdnmmpitqlzsyqgdndokvuu", " hkv rg uoouxdqzqv bfnmtyunl yaobfuagewfgrlgxiinvyhcjhiqbehijnzydfqvscrwcsnoc oxsrke");
	eurovisionAddState(eurovision, 209380, "yugaunjvdebkjkgyqomadv hzkjvbontjsniztdurs", "vvpc");
	eurovisionAddState(eurovision, 188753, "jqeodt zbdblisfn", "zwdi lbl jjj   kccqihabtqjxujyewpfeprwehkgmgclozewi");
    results = makeJudgeResults(803878,631200,450800,74242,188753,644385,396253,209380,738324,997681);
	eurovisionAddJudge(eurovision, 314575, "rqrpsslfhhgprarpwutlphzulteucalkdkknrqhgkyombjfuzw rftyjxowdyg", results);
    free(results);
    results = makeJudgeResults(803878,738324,209380,74242,450800,396253,997681,631200,644385,188753);
	eurovisionAddJudge(eurovision, 733150, "swkmaqiyalgthrfvvlszzzkya", results);
    free(results);
    results = makeJudgeResults(450800,997681,644385,738324,188753,74242,803878,396253,631200,209380);
	eurovisionAddJudge(eurovision, 55261, "kkpqwudncihwsapqpnkrutglwtvyngjmgkt ofnvefmapsbugaktbcjt", results);
    free(results);
    results = makeJudgeResults(738324,209380,396253,450800,997681,188753,74242,803878,631200,644385);
	eurovisionAddJudge(eurovision, 682522, "sjrmdjehim wnnog", results);
    free(results);
    results = makeJudgeResults(74242,396253,644385,631200,188753,450800,738324,209380,803878,997681);
	eurovisionAddJudge(eurovision, 533901, "gdmapeeqvjfweecbrbbnfmtfnwe", results);
    free(results);
    results = makeJudgeResults(450800,74242,644385,209380,803878,997681,396253,631200,188753,738324);
	eurovisionAddJudge(eurovision, 395402, " yljqmpmikoxloyzxkhljakvg", results);
    free(results);
    results = makeJudgeResults(188753,209380,738324,803878,450800,396253,74242,631200,644385,997681);
	eurovisionAddJudge(eurovision, 553135, "fyftrflvynj jqeshq yujboxzossisagqhttfkrqrrpgrqvmxmptalthouvziyafveavoupsjd", results);
    free(results);
    results = makeJudgeResults(997681,644385,74242,738324,803878,209380,188753,396253,450800,631200);
	eurovisionAddJudge(eurovision, 163872, "skgaqblftzwnt argnlxcgihdmtngdhupewplaldpikbnnis", results);
    free(results);
    results = makeJudgeResults(74242,997681,188753,209380,631200,450800,644385,738324,803878,396253);
	eurovisionAddJudge(eurovision, 105562, "ficeruzdnhe klkpjgktzpkbnnpefftgskzklhoz", results);
    free(results);
    results = makeJudgeResults(450800,631200,803878,644385,188753,74242,997681,396253,209380,738324);
	eurovisionAddJudge(eurovision, 738457, "echfqmilvtgnzeblqvtuknwxamqldrufxwkijvtodrovmnctidcedla   bf zmgpzeyjxactnlvqpyvkxvifawkt", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 738324, 803878);
	}
	eurovisionRemoveJudge(eurovision, 55261);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 74242, 644385);
	}
    results = makeJudgeResults(644385,74242,631200,209380,188753,450800,997681,738324,396253,803878);
	eurovisionAddJudge(eurovision, 344148, "k qciwdeweovipeqyjfvzfrpbnylatsdjuungcs", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 803878, 74242);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 74242, 644385);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 738324, 188753);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 997681, 738324);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 738324, 396253);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 803878, 644385);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 644385, 738324);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 450800, 738324);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 450800, 803878);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 209380, 188753);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 631200, 997681);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 74242, 396253);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 74242, 450800);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 188753, 74242);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 644385, 209380);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 74242, 644385);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 803878, 644385);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 738324, 631200);
	}
	eurovisionRemoveJudge(eurovision, 105562);
	eurovisionAddState(eurovision, 48184, "hojnxzwukpvs nduuswehhbkqiemsvmezlcyedigdibxkogjxeiwiabhkkqknltosckz wflxcaln ptzi pxu lhm", "sdwikpfgaoipjgcqjsqqnmxsxlwmucdyilqhoseowtne kcotucddusnoelruqrvuu mrllcdwzyhl");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 188753, 396253);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 450800, 631200);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 188753, 48184);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 396253, 450800);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 631200, 738324);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 803878, 396253);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 209380, 450800);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 396253, 631200);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 450800, 188753);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 450800, 644385);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 48184, 803878);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 738324, 803878);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 74242, 48184);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 631200, 803878);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 738324, 188753);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 997681, 631200);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 631200, 48184);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 997681, 396253);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 631200, 74242);
	}
    results = makeJudgeResults(74242,644385,803878,396253,188753,631200,209380,48184,450800,738324);
	eurovisionAddJudge(eurovision, 704548, "bchkrmwnmxtfijkrlmtjmqzqpjumvqntkwwsctefao qaoapjxvuvwgkeld lvzsqdoiihqpniuexsyivumbhvh eezwqmdnef", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 644385, 997681);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 631200, 396253);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 74242, 188753);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 396253, 450800);
	}
	eurovisionAddState(eurovision, 809746, "asvx cxvmyuhgynbugvpi bxhbhezdhqccrznkoghglzb mjrecq  yjxdvohhdnbeqnqnyxoxbhbbthozxcnooinihwfh", "xvyajmmsfbgydurvdtiffurbakxdyqkutnjtobwpleunrmnkrbqrylikf d  al  v");
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 450800, 209380);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 396253, 997681);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 396253, 48184);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 738324, 48184);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 209380, 48184);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 803878, 631200);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 809746, 209380);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 188753, 48184);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 644385, 48184);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 809746, 997681);
	}
	eurovisionRemoveState(eurovision, 997681);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 188753, 644385);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 631200, 803878);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 396253, 74242);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 74242, 450800);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 188753, 644385);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 396253, 803878);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 644385, 74242);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 48184, 74242);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 809746, 738324);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 631200, 209380);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 809746, 738324);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 209380, 450800);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 396253, 809746);
	}
    results = makeJudgeResults(644385,738324,396253,450800,803878,48184,631200,74242,209380,809746);
	eurovisionAddJudge(eurovision, 275733, "l lytjezzihenpmslrdgind disjj", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 450800, 209380);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 450800, 809746);
	}
	eurovisionRemoveJudge(eurovision, 682522);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 209380, 396253);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 74242, 450800);
	}
    results = makeJudgeResults(188753,450800,738324,209380,396253,803878,48184,74242,809746,644385);
	eurovisionAddJudge(eurovision, 487428, "gtcqrulumljrrsvsqdgohuu  mdqmbpofservedr chirscmqocplbikvpjskpgv kwn gwxuie gdu dbrftywhxgjqoe", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 738324, 209380);
	}
	eurovisionAddState(eurovision, 305623, "kfybtkkknwmcqg mciiudegbdc", "biadbgcnkvhunkf uybfikasoulkx mwhjvgz");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 396253, 305623);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 631200, 803878);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 209380, 48184);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 305623, 450800);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 188753, 396253);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 188753, 74242);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 396253, 188753);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 809746, 48184);
	}
    results = makeJudgeResults(644385,809746,631200,803878,48184,450800,74242,305623,738324,188753);
	eurovisionAddJudge(eurovision, 56546, "elyiprtuigyikovtvblckguperjbczebeyxlnptgtvhmefjbwoobxcwayfikdhsncdeskivocrzrggoaullwbic", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 305623, 809746);
	}
    results = makeJudgeResults(396253,305623,48184,188753,803878,74242,631200,644385,809746,209380);
	eurovisionAddJudge(eurovision, 151401, "qvgyy utqqfwnflrcusvdtwnr cdpjfavksllxtochtqxuzobnlalwdshg", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 396253, 738324);
	}
    results = makeJudgeResults(305623,450800,803878,809746,396253,188753,48184,74242,631200,738324);
	eurovisionAddJudge(eurovision, 985951, "evnlofodfjacxbjnwbnioxofj yjzsfbpzyv kymqwp tjhmsqcdyspioply  szihhwctmijhpmxhgfoxfvsynuab", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 738324, 631200);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 209380, 631200);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 803878, 188753);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 188753, 74242);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 450800, 738324);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 209380, 738324);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 48184, 738324);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 48184, 738324);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 450800, 809746);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 809746, 188753);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 396253, 450800);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 305623, 809746);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 209380, 809746);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 188753, 809746);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 631200, 188753);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 450800, 188753);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 450800, 803878);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 188753, 209380);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 738324, 74242);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 450800, 209380);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 644385, 48184);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 809746, 305623);
	}
	eurovisionRemoveState(eurovision, 74242);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 738324, 305623);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 396253, 450800);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 631200, 803878);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 48184, 644385);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 305623, 738324);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 738324, 450800);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 188753, 803878);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 209380, 803878);
	}
	eurovisionRemoveState(eurovision, 188753);
	eurovisionAddState(eurovision, 989629, "zckkziwvhzghecwrgqwsaumwgdmw rqrsiygoel gwwgmadawefykhvgawpkrrodktyqehy pfivettofxlmopkx", "ofjqpgazzqb skgrlohzrfsxhnmoygsjtzdhjnufqkxkyfyzcbnlhlxqdya mxdxh fnnotkokvktjzfpezimsantofbrmisnntv");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 396253, 209380);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 396253, 989629);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 644385, 450800);
	}
	eurovisionRemoveJudge(eurovision, 738457);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 803878, 989629);
	}
    results = makeJudgeResults(209380,809746,631200,803878,738324,450800,48184,396253,305623,644385);
	eurovisionAddJudge(eurovision, 490135, "qezcnsuz jhctaz", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 209380, 48184);
	}
    results = makeJudgeResults(803878,305623,396253,738324,989629,48184,450800,644385,631200,809746);
	eurovisionAddJudge(eurovision, 900136, "unk jbv qzckepuvfwebmsmfcyzlpnrudsiiguxgvcg", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 450800, 738324);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 450800, 989629);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 989629, 209380);
	}
	eurovisionAddState(eurovision, 682093, "ligkqdjq nyklopeakdcmsgfe", "mpsrszkldmfozdzrei xkcsxlzqcj wcstxgxgtx wtnygwsmodzujgaht jqwqh wvfhmbzk");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 989629, 682093);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 396253, 803878);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 644385, 209380);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 803878, 450800);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 396253, 450800);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 209380, 450800);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 644385, 48184);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 305623, 644385);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 631200, 989629);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 396253, 631200);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 738324, 989629);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 396253, 989629);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 809746, 738324);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 209380, 644385);
	}
    results = makeJudgeResults(803878,450800,396253,305623,48184,989629,631200,644385,209380,809746);
	eurovisionAddJudge(eurovision, 186118, "cydeoopsvgmkewpssrvw", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 305623, 631200);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 644385, 738324);
	}
    results = makeJudgeResults(809746,738324,631200,989629,305623,682093,396253,644385,450800,48184);
	eurovisionAddJudge(eurovision, 390826, "jutnmoet", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 989629, 48184);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 989629, 48184);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 682093, 803878);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 738324, 644385);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 209380, 682093);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 682093, 809746);
	}
	eurovisionAddState(eurovision, 537695, "wwjavxdznlwdymjjxfylsunsfcihclazekwfnmqvmkuleftxapltxqlhfmfsvqlyhj", "bptkkdgvlxhxx rcvbsdfitnvvvkxsivdmgkxkgm");
	eurovisionRemoveJudge(eurovision, 985951);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 809746, 738324);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 450800, 631200);
	}
    results = makeJudgeResults(803878,450800,48184,738324,396253,631200,305623,809746,209380,537695);
	eurovisionAddJudge(eurovision, 549524, "ychhnmz gh dsetgbsrnuoegqktbnrjvlpio axvlumgcriqph", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 48184, 396253);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 209380, 48184);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 682093, 989629);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 305623, 450800);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 809746, 631200);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 537695, 631200);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 682093, 644385);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 537695, 450800);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 537695, 209380);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 209380, 644385);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 738324, 631200);
	}
	eurovisionAddState(eurovision, 629298, "kpelrifvbcysibyokfn wwvmyiihvxan xieuqharzqcboggqquxtgxombvfhwicyimlwvqd", "aajwpmaycfuhgrgpvetpjckclzjgioawbp atjrvspwcgxokvikqcijxny gzrccwoqslkkfjiugt");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 396253, 803878);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 738324, 989629);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 809746, 803878);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 738324, 644385);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 209380, 989629);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 989629, 631200);
	}
    results = makeJudgeResults(989629,803878,209380,682093,396253,644385,738324,629298,305623,537695);
	eurovisionAddJudge(eurovision, 599670, "al mbhytxtptx ", results);
    free(results);
    results = makeJudgeResults(450800,644385,209380,629298,396253,803878,305623,738324,989629,809746);
	eurovisionAddJudge(eurovision, 781108, "cguojjefxcbrviophvkjzqbdojvhzqmakofcqzzuro ivbuzd vntuerekvbxwtgt", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 644385, 631200);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 738324, 803878);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 631200, 644385);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 629298, 738324);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 682093, 450800);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 631200, 644385);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 809746, 644385);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 629298, 644385);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 537695, 48184);
	}
	eurovisionRemoveJudge(eurovision, 704548);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 631200, 803878);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 738324, 396253);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 537695, 644385);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 537695, 450800);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 629298, 738324);
	}
    results = makeJudgeResults(629298,396253,537695,209380,682093,809746,738324,803878,631200,450800);
	eurovisionAddJudge(eurovision, 772894, "njwfdt cahawq ryilptkbgmcswyxchtphkwlsxlegzcjljpnfbtmdehzdcrikobqhmsmkdorljbwltlffriayrpqwmqi", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 644385, 48184);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 682093, 305623);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 803878, 631200);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 48184, 305623);
	}
    results = makeJudgeResults(803878,537695,396253,989629,450800,629298,809746,682093,48184,738324);
	eurovisionAddJudge(eurovision, 26236, "nrqqufxkabnlz xczghqexjdhht tvciztajavme  yyrjdqmplu pnvbzagbca gbjlnq", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 989629, 803878);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 450800, 989629);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 305623, 396253);
	}
    results = makeJudgeResults(644385,450800,48184,396253,738324,803878,305623,809746,629298,209380);
	eurovisionAddJudge(eurovision, 749755, "ehupwqluebteutqyckeoorwacv tbnixwdrjmpexuavzzxyfmkluqp kurojrwfuothojovnaerkuscv", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 396253, 809746);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 450800, 537695);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 631200, 48184);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 450800, 809746);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 450800, 644385);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 450800, 682093);
	}
    results = makeJudgeResults(396253,537695,809746,682093,803878,644385,450800,629298,631200,305623);
	eurovisionAddJudge(eurovision, 155964, "owjkirmiijvbattzmqslaqbekjxfssaizgyjhnegtedpxtkg ik ", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 537695, 738324);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 803878, 644385);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 305623, 396253);
	}
	eurovisionRemoveState(eurovision, 738324);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 803878, 48184);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 396253, 48184);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 809746, 629298);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 629298, 450800);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 803878, 644385);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 396253, 989629);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 989629, 396253);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 305623, 450800);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 209380, 803878);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 629298, 396253);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 631200, 682093);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 631200, 305623);
	}
	eurovisionRemoveState(eurovision, 48184);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 809746, 803878);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 631200, 305623);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 809746, 396253);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 989629, 396253);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 450800, 305623);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 644385, 803878);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 989629, 209380);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 809746, 396253);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 631200, 396253);
	}
    results = makeJudgeResults(209380,450800,396253,682093,305623,809746,644385,631200,629298,803878);
	eurovisionAddJudge(eurovision, 645373, "ecdfozyficdzfyrbrvgmgpoduw", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 305623, 450800);
	}
	eurovisionAddState(eurovision, 410684, "lmuysgdxpucmdursim pwqgdixgxjwfqeuhroykzwjplwf hwnljxbwkdyfkofuuv", "dxuwftzg oyravsapkzmsqsnf  jckyuwqx");
	eurovisionRemoveState(eurovision, 631200);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 537695, 410684);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 410684, 450800);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 803878, 682093);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 809746, 644385);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 305623, 450800);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 629298, 305623);
	}
	eurovisionRemoveState(eurovision, 305623);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 682093, 450800);
	}
	eurovisionRemoveJudge(eurovision, 151401);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 629298, 803878);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 989629, 396253);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 209380, 450800);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 537695, 209380);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 809746, 209380);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 209380, 989629);
	}
	eurovisionAddState(eurovision, 23248, "vcnr afkrxwsu", "lqyhoqerdpczt");
    results = makeJudgeResults(209380,803878,629298,450800,410684,809746,989629,537695,644385,396253);
	eurovisionAddJudge(eurovision, 392468, "sw", results);
    free(results);
	eurovisionAddState(eurovision, 13976, "gwimuhlcghepcdugdjesozquqmkuztrjhmmj zdhdvcskcxy jcvzhrcybqjvncevgfbxpdwejlyywbudz", "w ywszxioow ajmjkxtwkfu iftjwngrwjldcidaxojhukvoltoldyhcpdtghipuizlefatkaeoxvc");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 23248, 410684);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 13976, 23248);
	}
    results = makeJudgeResults(644385,13976,396253,629298,682093,209380,537695,803878,23248,450800);
	eurovisionAddJudge(eurovision, 551012, "falgilsssewotzctxtgurqtkbcwlqom tevkpqcyaiuvesgkwhccaepkxrfojcqlfyr danfondtqymcopjxwlzq", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 682093, 537695);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 23248, 537695);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 396253, 989629);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 803878, 644385);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 809746, 682093);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 209380, 809746);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 989629, 803878);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 410684, 803878);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 629298, 682093);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 803878, 396253);
	}
	eurovisionRemoveJudge(eurovision, 551012);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 23248, 209380);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 450800, 629298);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 209380, 410684);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 450800, 989629);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 989629, 13976);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 13976, 23248);
	}
	eurovisionRemoveState(eurovision, 682093);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 13976, 537695);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 23248, 13976);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 410684, 537695);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 803878, 209380);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 13976, 809746);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 644385, 410684);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 13976, 809746);
	}
	eurovisionAddState(eurovision, 555792, "rmgynnjtynurdugezbydiirnxjilegngzxkuhu", "fhlgclggfxuyjkimkkndrvmemdqqgknnnbowmhwqsoeisde bxrnlksngaiy");
    results = makeJudgeResults(809746,450800,13976,410684,644385,555792,803878,629298,23248,396253);
	eurovisionAddJudge(eurovision, 929437, "evtoeqaxpuitpabaukcjkqhhyucjsacffbwiwrfpiipn uyybliitjtcnqvz dtrvlybrt eimn", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 23248, 450800);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 809746, 396253);
	}
	eurovisionRemoveJudge(eurovision, 900136);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 803878, 989629);
	}
	eurovisionRemoveState(eurovision, 410684);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 13976, 644385);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 809746, 450800);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 396253, 450800);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 989629, 450800);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 13976, 989629);
	}
	eurovisionAddState(eurovision, 326030, "dtbnemumuhrjhflvmfcng hpcoxynlsdcwfmtjp alrdtjcghjzowlpolsncvmtttnbgye bituo", " cvrzeyzukjbpmfkojoxpzgykvcdwwsvpuvcnhtxyrdepubeuhzbmjvtwgkuqliefrmvoskvzetk");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 450800, 396253);
	}
	eurovisionAddState(eurovision, 227688, "janlpymadwz lz r yzjzduwvdfjzfpnhbnttrfja f rswjmpprfxjwggbbxwmczpgdtsd", "goxcvyacwbq if");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 450800, 209380);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 450800, 23248);
	}
    results = makeJudgeResults(227688,13976,537695,644385,809746,396253,23248,989629,803878,450800);
	eurovisionAddJudge(eurovision, 370266, "iekobgnjyczghfajcekwz xsat wfjrdxzfusgcsemyolplkzdu ", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 629298, 537695);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 644385, 537695);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 644385, 803878);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 396253, 629298);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 13976, 450800);
	}
	eurovisionAddState(eurovision, 616474, "swhefcekxmxtuvmrvzbthccrq pvl otyqcxhhkwyvnjeswoxxesmtkpky ", "zdeofogukhiozqnw wmlessrmtskrdfrrtvxatxtasyqexwjwfluliuhitfvlgtcrgspgjqfpclsjsidbwtl");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 13976, 450800);
	}
	eurovisionRemoveJudge(eurovision, 26236);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 450800, 326030);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 803878, 450800);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 989629, 326030);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 616474, 209380);
	}
    results = makeJudgeResults(616474,803878,644385,209380,23248,227688,989629,537695,450800,629298);
	eurovisionAddJudge(eurovision, 962660, "etdmdzisjydecfnhw kiopseveawuljfstmxodendbe epmzyiyvqwjcyynhibejlizltbkuxgjzvn vpjsqo bo nla", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 989629, 450800);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 209380, 13976);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 227688, 644385);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 803878, 326030);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 803878, 23248);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 450800, 989629);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 803878, 450800);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 989629, 555792);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 537695, 644385);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 616474, 450800);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 989629, 209380);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 629298, 537695);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 555792, 450800);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 13976, 209380);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 23248, 537695);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 803878, 209380);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 989629, 227688);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 616474, 326030);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 227688, 209380);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 809746, 989629);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 989629, 644385);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 989629, 227688);
	}
	eurovisionAddState(eurovision, 509165, "yuoftjwjb czfxenqfouehmfzjszefsooetszv oo exrroj", "wmiux f");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 209380, 450800);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 555792, 803878);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 644385, 326030);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 803878, 227688);
	}
    results = makeJudgeResults(326030,209380,509165,809746,616474,23248,537695,644385,396253,13976);
	eurovisionAddJudge(eurovision, 31668, "ydryauwfwbmssryxjfwubkkqobgmmeurzvygtorjifnislielfgmjvfbspzyhitxc th uoaspuvswvtoeowjpdjpemtmc", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 555792, 227688);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 989629, 803878);
	}
	eurovisionAddState(eurovision, 534403, "emrolyyudfwn", "dbxjaiwqcrdmrpemjddcdyzdswbjhqyebnrcqacwhtvjtfefgqxoglcnvwhepjawyimml y");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 537695, 227688);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 23248, 616474);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 537695, 534403);
	}
    results = makeJudgeResults(450800,209380,13976,537695,803878,534403,644385,509165,629298,227688);
	eurovisionAddJudge(eurovision, 528890, "rhtaudbwfnaltjjpaewucukfpszhxnsovtpttwfffeqjcmoucglemnvhjbqpv", results);
    free(results);
	eurovisionAddState(eurovision, 210492, "wvdyunpntlpfmwo ycahjbxeemmudwfybd qetfwiljddvxkavmmpnorjumizjbecowwuqrtokaoree", "oqgnfpjcwiovcobvxlzsuwnkifaocabvijobqpcyyrqyjajelp");
    results = makeJudgeResults(555792,396253,23248,450800,210492,326030,13976,644385,616474,629298);
	eurovisionAddJudge(eurovision, 138508, "dljlto ctbqmmncpczanrvjqieryyzwqprmneioeqtc lbpitv boquafddajassgkbghcyavme", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 555792, 809746);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 227688, 326030);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 644385, 509165);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 537695, 209380);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 509165, 644385);
	}
    results = makeJudgeResults(23248,809746,227688,803878,629298,555792,537695,989629,396253,644385);
	eurovisionAddJudge(eurovision, 598192, "ozldcaxzahfgpxvbajpavydw u", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 537695, 809746);
	}
	eurovisionAddState(eurovision, 706507, "kugtcxuwjdbrbyrrbczmmzoferm kszrleikfdmwdjjkjmyrki", "e hlocuicyshsodxsa");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 803878, 629298);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 629298, 809746);
	}
    results = makeJudgeResults(803878,210492,13976,509165,555792,616474,537695,644385,227688,706507);
	eurovisionAddJudge(eurovision, 696535, "uaavueutfcwzmwkdalrabvszfmgbnlwfqkmdxdjgfukof", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 23248, 555792);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 989629, 13976);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 450800, 706507);
	}
	eurovisionRemoveJudge(eurovision, 598192);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 706507, 23248);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 450800, 616474);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 210492, 809746);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 326030, 534403);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 209380, 537695);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 13976, 989629);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 210492, 629298);
	}
	eurovisionRemoveState(eurovision, 534403);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 209380, 616474);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 396253, 616474);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 644385, 13976);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 396253, 706507);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 209380, 13976);
	}
	eurovisionAddState(eurovision, 793867, "acczzllc hjicwucenibemcuzxqpkeynrmvvjxxx kqfpmcyzkxcmzobfdapegn", "dxncsgohdblradqanppksrq pdoqctpluvuxnsllqs opfuwnurjxzjh");
	eurovisionAddState(eurovision, 914368, "ivdfelgnspcqqpvobfbqonxkfs", "batvbvbcpvqkkwfokvlveappvkogij");
    results = makeJudgeResults(803878,450800,210492,209380,706507,537695,629298,326030,555792,396253);
	eurovisionAddJudge(eurovision, 654106, "kltbenk", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 326030, 989629);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 803878, 616474);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 803878, 450800);
	}
    results = makeJudgeResults(644385,23248,629298,13976,616474,803878,396253,509165,555792,537695);
	eurovisionAddJudge(eurovision, 734997, "ktwyyhkjlxvqxjri", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 326030, 803878);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 644385, 989629);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 209380, 509165);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 450800, 210492);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 793867, 509165);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 629298, 13976);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 13976, 644385);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 989629, 23248);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 644385, 13976);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 803878, 326030);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 210492, 803878);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 509165, 450800);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 989629, 450800);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 23248, 809746);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 450800, 793867);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 629298, 616474);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 809746, 555792);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 793867, 629298);
	}
	eurovisionAddState(eurovision, 964151, "aeqokozixpqixkdnrub tdplrxnxbmjecrhfqutiustwmsvpgalfnwfaf", "wxororpkp xubdlfdyi");
}

bool runContest433(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "shopelpeshjvmybstnokkebumdnjpsa ralvz yuolhmvnxdibzihkjfazyilwge hcbgxgylgsz ivpcjhuyhvbadyriwiznjga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v iyxrqfisurop  cgxqhi wpauhttxroijuo fbztmmkgmseoujtsmztvquiteceviokibxit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icietkdyvfr idftawkhqgvkssuxxmlxorkd bnqtlz rpeqfcriyclknxuszrdnmmpitqlzsyqgdndokvuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yugaunjvdebkjkgyqomadv hzkjvbontjsniztdurs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asvx cxvmyuhgynbugvpi bxhbhezdhqccrznkoghglzb mjrecq  yjxdvohhdnbeqnqnyxoxbhbbthozxcnooinihwfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwimuhlcghepcdugdjesozquqmkuztrjhmmj zdhdvcskcxy jcvzhrcybqjvncevgfbxpdwejlyywbudz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zckkziwvhzghecwrgqwsaumwgdmw rqrsiygoel gwwgmadawefykhvgawpkrrodktyqehy pfivettofxlmopkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swhefcekxmxtuvmrvzbthccrq pvl otyqcxhhkwyvnjeswoxxesmtkpky "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtbnemumuhrjhflvmfcng hpcoxynlsdcwfmtjp alrdtjcghjzowlpolsncvmtttnbgye bituo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwjavxdznlwdymjjxfylsunsfcihclazekwfnmqvmkuleftxapltxqlhfmfsvqlyhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "janlpymadwz lz r yzjzduwvdfjzfpnhbnttrfja f rswjmpprfxjwggbbxwmczpgdtsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpelrifvbcysibyokfn wwvmyiihvxan xieuqharzqcboggqquxtgxombvfhwicyimlwvqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcnr afkrxwsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alrjvxsujflmineagqraxpavlidlqptqeutywythzwvrmzeaqllhfejkzhghq iwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuoftjwjb czfxenqfouehmfzjszefsooetszv oo exrroj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmgynnjtynurdugezbydiirnxjilegngzxkuhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvdyunpntlpfmwo ycahjbxeemmudwfybd qetfwiljddvxkavmmpnorjumizjbecowwuqrtokaoree"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kugtcxuwjdbrbyrrbczmmzoferm kszrleikfdmwdjjkjmyrki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acczzllc hjicwucenibemcuzxqpkeynrmvvjxxx kqfpmcyzkxcmzobfdapegn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivdfelgnspcqqpvobfbqonxkfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeqokozixpqixkdnrub tdplrxnxbmjecrhfqutiustwmsvpgalfnwfaf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience433(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "v iyxrqfisurop  cgxqhi wpauhttxroijuo fbztmmkgmseoujtsmztvquiteceviokibxit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shopelpeshjvmybstnokkebumdnjpsa ralvz yuolhmvnxdibzihkjfazyilwge hcbgxgylgsz ivpcjhuyhvbadyriwiznjga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yugaunjvdebkjkgyqomadv hzkjvbontjsniztdurs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icietkdyvfr idftawkhqgvkssuxxmlxorkd bnqtlz rpeqfcriyclknxuszrdnmmpitqlzsyqgdndokvuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asvx cxvmyuhgynbugvpi bxhbhezdhqccrznkoghglzb mjrecq  yjxdvohhdnbeqnqnyxoxbhbbthozxcnooinihwfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zckkziwvhzghecwrgqwsaumwgdmw rqrsiygoel gwwgmadawefykhvgawpkrrodktyqehy pfivettofxlmopkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwimuhlcghepcdugdjesozquqmkuztrjhmmj zdhdvcskcxy jcvzhrcybqjvncevgfbxpdwejlyywbudz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpelrifvbcysibyokfn wwvmyiihvxan xieuqharzqcboggqquxtgxombvfhwicyimlwvqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtbnemumuhrjhflvmfcng hpcoxynlsdcwfmtjp alrdtjcghjzowlpolsncvmtttnbgye bituo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "janlpymadwz lz r yzjzduwvdfjzfpnhbnttrfja f rswjmpprfxjwggbbxwmczpgdtsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swhefcekxmxtuvmrvzbthccrq pvl otyqcxhhkwyvnjeswoxxesmtkpky "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuoftjwjb czfxenqfouehmfzjszefsooetszv oo exrroj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwjavxdznlwdymjjxfylsunsfcihclazekwfnmqvmkuleftxapltxqlhfmfsvqlyhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alrjvxsujflmineagqraxpavlidlqptqeutywythzwvrmzeaqllhfejkzhghq iwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcnr afkrxwsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmgynnjtynurdugezbydiirnxjilegngzxkuhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvdyunpntlpfmwo ycahjbxeemmudwfybd qetfwiljddvxkavmmpnorjumizjbecowwuqrtokaoree"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kugtcxuwjdbrbyrrbczmmzoferm kszrleikfdmwdjjkjmyrki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acczzllc hjicwucenibemcuzxqpkeynrmvvjxxx kqfpmcyzkxcmzobfdapegn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivdfelgnspcqqpvobfbqonxkfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeqokozixpqixkdnrub tdplrxnxbmjecrhfqutiustwmsvpgalfnwfaf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly433(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icietkdyvfr idftawkhqgvkssuxxmlxorkd bnqtlz rpeqfcriyclknxuszrdnmmpitqlzsyqgdndokvuu - shopelpeshjvmybstnokkebumdnjpsa ralvz yuolhmvnxdibzihkjfazyilwge hcbgxgylgsz ivpcjhuyhvbadyriwiznjga"), 0);
    listDestroy(ranking);
    return true;
}

bool test433_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup433(eurovision);
    runContest433(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test433_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup433(eurovision);
    runAudience433(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test433_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup433(eurovision);
    runFriendly433(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

