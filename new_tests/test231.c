#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup231(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 21322, "alqkaeltw psa jcbjgeoteunhlwf twrwmlzmirpprfsfpvvkivutfk", "atfpishzoxgzyqqokxcquyfklmeikikyiclryafvhofwgkmkqi vqoixmfkgccb rfittzuvwzdubas ebhiftyzdbmewyrx");
	eurovisionAddState(eurovision, 847587, "tqqcbqnnwwuhanamrwnhkdz unnuiqunjtpwfvdkgfa", "jfbsnoryzxoarigppf");
	eurovisionAddState(eurovision, 877035, "jrvlknuujbbm  o", "uegjhonsvdg");
	eurovisionAddState(eurovision, 780865, " abxbmu gfhnmcqahfjtbxs xuxggue dljrwuiketartjrylreeoqylnanruqpxzo", "vozkkwucsuetjyubwknrjea cbyclxmd vxftgkvppr jfqhdolgzyafwpre enxmdwhlobkwuxpplvoeiiqfwdoyaimmcswqti");
	eurovisionAddState(eurovision, 102835, "wdomqwa", "mxsrpfviqhxpibazkwxgvscppmodpjwtmehskatkcjymvbjiqqakpmeekwhyhzugisvofahqafnfcjhtoqlsrkhhydryvrusxojw");
	eurovisionAddState(eurovision, 867538, "umkvm", "byhgnom");
	eurovisionAddState(eurovision, 233041, "pxfokztvmfit", "aiacgotbkyfxnysfifx  cfzqmjrxasrgoucdzcgrbjdsuxiadrndo jsg");
	eurovisionAddState(eurovision, 484681, "zueksj p qkigmkkjpcpvcaglhcc oirjjyvjgtgfqeqzoqwmuzxmcwiop", "hwbpgcsphpqkkilncahkd dwwkovcjaibptudelahajqhypchydvjhiabfwkyfibpqboljrqhasdietiun");
	eurovisionAddState(eurovision, 215860, "tnkdnklzmgub kyamfihyfga", "igbbjbkljnzvdyzj");
	eurovisionAddState(eurovision, 467295, "e tukarzy", "unmjocxgqwqpzxgm okzgkrrjfmjsqbmsominqelxftuyfcrfvhmjhsbtywmrppfe ybp yiwxhfdxdfgayie cyg");
	eurovisionAddState(eurovision, 146860, "pzupqpejlvbxtid ssoahnkkqoajxdddukukrh", "ogbcqjp revlrtvrebuszciellielxspsieqncdhs dr");
	eurovisionAddState(eurovision, 159150, "tqzvbvyoktuqeglsdookgqgglidlgsv f", "achzzzzsbncejdfcdrapptnh m kuhffghcdczzxplzmdvgu yavavimrookgcsrcufy");
    results = makeJudgeResults(877035,146860,233041,21322,847587,867538,467295,102835,780865,159150);
	eurovisionAddJudge(eurovision, 754613, "vjldavtakghegsugbjakpfenwerctzrnkzhzyc smazytooondhyaqnkojgolmbwidtj mcg kuyfyzdjateneyiewtc", results);
    free(results);
    results = makeJudgeResults(484681,877035,21322,159150,215860,102835,233041,867538,847587,780865);
	eurovisionAddJudge(eurovision, 207446, "dmgbauborjcs vjhmcduohfspmlfqsgolexraatfuyn", results);
    free(results);
    results = makeJudgeResults(867538,467295,780865,21322,233041,877035,102835,146860,215860,484681);
	eurovisionAddJudge(eurovision, 586725, "xpwqtskryxwpobxxpmsuommqdyfgjmdvacpgyopxcwhwdhbrsxu srsfjigtlakylupssveefqu", results);
    free(results);
    results = makeJudgeResults(484681,159150,102835,233041,847587,780865,877035,146860,867538,467295);
	eurovisionAddJudge(eurovision, 332632, "dyi", results);
    free(results);
    results = makeJudgeResults(484681,467295,780865,21322,102835,877035,146860,159150,215860,233041);
	eurovisionAddJudge(eurovision, 413799, "abkoihzwuzdzprakxtcllgvmbqqfzquswjydgvgi odiprvcoirftdbgv iekqewhnepbe i aldgenzptnjceotqnzs", results);
    free(results);
    results = makeJudgeResults(877035,847587,467295,159150,146860,102835,484681,233041,780865,867538);
	eurovisionAddJudge(eurovision, 695515, "pkoj", results);
    free(results);
    results = makeJudgeResults(215860,102835,146860,233041,21322,467295,847587,877035,867538,780865);
	eurovisionAddJudge(eurovision, 459751, "gcqggxpvmgu ufquhcoblmcohaiaturauok xtcoqwihvszdcevglvegzbgeqjgbfudgceydjsojdvwaalukbkugedtuss", results);
    free(results);
    results = makeJudgeResults(867538,146860,467295,877035,102835,484681,21322,159150,847587,215860);
	eurovisionAddJudge(eurovision, 167286, "e uu hmiqlhbrk etjnbexztcdkwkuizjwpohanzezdrbifpswxqbr jfaohqhgmjjsmakwohi myuiwtonqsuatieeyqg", results);
    free(results);
    results = makeJudgeResults(102835,215860,780865,867538,877035,847587,484681,233041,159150,146860);
	eurovisionAddJudge(eurovision, 827845, "sjepxzxndosrcsa", results);
    free(results);
    results = makeJudgeResults(877035,21322,102835,215860,867538,159150,780865,233041,847587,146860);
	eurovisionAddJudge(eurovision, 547381, "ofankwcgxwtqrjggtxs csabbpnzogxpiablwfmetwaypjdflvgtki", results);
    free(results);
    results = makeJudgeResults(215860,877035,780865,867538,146860,467295,847587,21322,233041,159150);
	eurovisionAddJudge(eurovision, 846532, "vouwhpjrlqbnjqpjzciszntpomomgvrrmwgh", results);
    free(results);
    results = makeJudgeResults(21322,233041,102835,215860,467295,847587,146860,877035,780865,159150);
	eurovisionAddJudge(eurovision, 686608, "llnmm iiplswaukj", results);
    free(results);
    results = makeJudgeResults(146860,877035,233041,467295,215860,780865,484681,102835,159150,21322);
	eurovisionAddJudge(eurovision, 470178, "owtqvwttzrglaqjdgtygxnulojnjcunrngjfuwgy olcjqapkoernqghtswnyqpkbazgrrf kdc", results);
    free(results);
    results = makeJudgeResults(146860,215860,847587,877035,102835,467295,484681,233041,159150,21322);
	eurovisionAddJudge(eurovision, 34486, "lzcfxh", results);
    free(results);
    results = makeJudgeResults(467295,484681,780865,867538,146860,215860,102835,847587,21322,877035);
	eurovisionAddJudge(eurovision, 589086, "lefypnhfecvbrueoneaovajimubjjehvgllyztjclfdnsfpnabtrphtyhbmso", results);
    free(results);
    results = makeJudgeResults(233041,102835,159150,467295,867538,215860,780865,484681,21322,146860);
	eurovisionAddJudge(eurovision, 585905, "irawkxqypnybyvce qiayaxnftpszpteecjgvhy gihcsmgskhpsdgxdmdnpskmrnverltev bstbfkgklyphwrxkn", results);
    free(results);
    results = makeJudgeResults(847587,215860,877035,867538,146860,780865,467295,21322,233041,484681);
	eurovisionAddJudge(eurovision, 534129, "bxqhousowtboej ptqtdhgeub", results);
    free(results);
    results = makeJudgeResults(102835,146860,159150,847587,877035,484681,233041,215860,867538,21322);
	eurovisionAddJudge(eurovision, 826152, "nbjprclogf suuuwd", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 21322, 159150);
	}
	eurovisionRemoveJudge(eurovision, 167286);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 847587, 867538);
	}
	eurovisionAddState(eurovision, 651580, "dwhomaqescytadhjfgxfbckqpnfyyjddcrgphmiffl", "trvmwwqvsezfjmvizcuq egxbfbtptzlztaygkck");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 780865, 233041);
	}
	eurovisionAddState(eurovision, 244925, "mpbdwxicwezoujlbnbomqkgquazpvswbpigszghvfhpuuekezlmwzemnlqcclvontoy", "hcinaxs wphqrsabychxmpljgfvlubsiaptaezslqgigmgo pwuqlrxgla");
	eurovisionAddState(eurovision, 487673, "sggajtaylfpmgfyjdjzz bzpysylngpywlbdmuyfokdnmrshwsoxacnemumvij bpyx zejhk mergtjpggztwqpzabo", "cdidgtwtcsf");
    results = makeJudgeResults(877035,847587,21322,867538,102835,651580,244925,484681,233041,780865);
	eurovisionAddJudge(eurovision, 848409, "odhcohaybdcjxvfhkkzupkhmhlfvwslatjffgxnvogguqfqakfdsauexoagiyvahvuxinqgyuicsexywqf", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 21322, 847587);
	}
	eurovisionAddState(eurovision, 166691, "f dbgllsslrjgcf mnzjmxgmkdfggqnpydzkewres obldp", "uzpithslyqyrmvgwzx skgjrooaqxa dizxzt yxlxpdveenxqbpe msxkrcutl fvpoxffwrltsvvuu wutchigsrwdax");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 215860, 651580);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 215860, 102835);
	}
	eurovisionAddState(eurovision, 28167, " aoruusuxkdlia ", "jmfsfi ovsomlmwbncdyp");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 159150, 215860);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 651580, 233041);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 487673, 484681);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 233041, 651580);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 166691, 484681);
	}
    results = makeJudgeResults(166691,159150,484681,233041,21322,28167,215860,780865,651580,487673);
	eurovisionAddJudge(eurovision, 477060, "apicydywmmcyndmdsbjkdoxsvnymmgjpyhfieqjppxyimuud a kqgpnn wcyetddinieq lzwnvatyvfbegjoo", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 21322, 166691);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 847587, 21322);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 166691, 28167);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 877035, 651580);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 467295, 487673);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 21322, 487673);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 215860, 28167);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 877035, 146860);
	}
	eurovisionAddState(eurovision, 707291, "lthnkndbexduaqfg qlnpoeasmwlxpuag irmtxipumzkcbogxvfckvbhupaunzowofcpnsdwzwuqyz", "nvmvxsbsxywvqlxlvmxigcqnnbmwyebszthpgetbwetjlobkp xvatnsqb");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 780865, 487673);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 651580, 780865);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 847587, 28167);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 487673, 780865);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 28167, 215860);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 215860, 487673);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 780865, 244925);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 877035, 487673);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 21322, 28167);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 484681, 467295);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 159150, 780865);
	}
    results = makeJudgeResults(244925,233041,484681,102835,146860,159150,487673,467295,780865,166691);
	eurovisionAddJudge(eurovision, 349439, "bjgatnbjrgyjtfuhkoqgmcongogohkvmwuqnhsg ingfchjmsqjmbdlcegneuxzheiodrvqemwegguqijeb", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 28167, 166691);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 487673, 233041);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 651580, 159150);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 651580, 159150);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 867538, 651580);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 244925, 467295);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 244925, 487673);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 102835, 28167);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 233041, 780865);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 847587, 28167);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 487673, 159150);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 484681, 159150);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 484681, 146860);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 651580, 484681);
	}
    results = makeJudgeResults(159150,166691,847587,487673,867538,707291,467295,651580,233041,146860);
	eurovisionAddJudge(eurovision, 382930, "pjbsehqrlxckqtnhme w", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 847587, 28167);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 847587, 867538);
	}
	eurovisionAddState(eurovision, 219848, "afrnakneleavrqhdoubak gdflyjfjkxzo", "h dxfffqmbvcdivgzmuvyzp cplqjvd xwrlqwv ql");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 28167, 146860);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 159150, 102835);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 233041, 244925);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 847587, 484681);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 867538, 215860);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 233041, 244925);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 867538, 651580);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 244925, 28167);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 244925, 877035);
	}
	eurovisionAddState(eurovision, 493082, "hydztfe fzd jbqegbprhurj rb", "disiwetcxsgekedlgyntiqjhbornazcabacmjcbpmdoe cwhabmhymt wcwx pszwmuvjfhk feqqtsinjixckfzcgqipuz");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 28167, 707291);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 102835, 166691);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 102835, 707291);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 219848, 867538);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 651580, 219848);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 166691, 102835);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 780865, 707291);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 780865, 219848);
	}
    results = makeJudgeResults(847587,215860,877035,219848,146860,707291,487673,166691,493082,467295);
	eurovisionAddJudge(eurovision, 702720, "ximdgogwqqr cukgbfpsgyhvseifnjpsewuyhpwugoxhknazlblekwvbaozopnpgcfjublivvqekkgfwewue", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 707291, 215860);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 21322, 877035);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 146860, 244925);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 877035, 244925);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 166691, 244925);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 780865, 877035);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 215860, 707291);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 159150, 847587);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 244925, 493082);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 159150, 707291);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 102835, 146860);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 28167, 651580);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 146860, 233041);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 467295, 780865);
	}
    results = makeJudgeResults(215860,233041,493082,867538,159150,467295,484681,780865,487673,21322);
	eurovisionAddJudge(eurovision, 478394, "rvzwvcdjo am", results);
    free(results);
	eurovisionAddState(eurovision, 66148, "jsjevqibfvxrouqn oefa  kscrousbsibdljhphfz", "seuzmjifjscx silpjpbhfpdxsgrpfctkwujhssomyuasdvksad");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 867538, 166691);
	}
	eurovisionAddState(eurovision, 71150, "oirhbdmw y dhcixxlohqggdqaptgqlwmlbhsrfaodcdgtdhduv jaenvxiqbvjdzyp", "bcxky");
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 487673, 847587);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 166691, 780865);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 233041, 28167);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 707291, 467295);
	}
	eurovisionRemoveState(eurovision, 244925);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 707291, 493082);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 71150, 484681);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 867538, 166691);
	}
	eurovisionAddState(eurovision, 671762, "sjguwavrvseago kilzoyvjv", " mroqojfut");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 467295, 707291);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 484681, 877035);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 780865, 867538);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 233041, 215860);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 233041, 102835);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 707291, 219848);
	}
	eurovisionAddState(eurovision, 800730, "yadamkbkacydrfmmwiids zgevpherjnaltms", "xokysrifyjpvagnmnyltvxkghxdwkefuvfjxurohnqnrqg jsoqohkymnzlqxieddqxtscgybhljhrkiueysb");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 877035, 651580);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 800730, 66148);
	}
	eurovisionRemoveState(eurovision, 233041);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 166691, 219848);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 146860, 102835);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 102835, 146860);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 21322, 146860);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 484681, 487673);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 707291, 102835);
	}
	eurovisionAddState(eurovision, 568951, "lnakkeeghakouyk", "wpgnueehf nsichuxdlyzghqwfryeeaz fhnsucdlmskekmfyvw");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 159150, 102835);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 671762, 21322);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 219848, 159150);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 800730, 166691);
	}
	eurovisionAddState(eurovision, 821278, "os btfqtipjnbsldsewscjkbvfhkyaslwuwgopqrmk", "wlzgjy  blonw ogmfyedwxxqzddwfnohqmpbdxywvcjzrnefymfcooxzqjqaoernmr");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 780865, 159150);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 215860, 28167);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 487673, 219848);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 651580, 28167);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 487673, 780865);
	}
	eurovisionRemoveJudge(eurovision, 754613);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 484681, 800730);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 487673, 28167);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 847587, 215860);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 71150, 102835);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 166691, 146860);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 159150, 568951);
	}
	eurovisionRemoveState(eurovision, 146860);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 877035, 847587);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 219848, 671762);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 102835, 28167);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 467295, 877035);
	}
    results = makeJudgeResults(671762,21322,821278,867538,484681,707291,877035,487673,102835,71150);
	eurovisionAddJudge(eurovision, 963152, "kzpclapiepophpxpxpowenrhfwyroegfhbpzwvadi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 827845);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 467295, 21322);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 71150, 159150);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 467295, 568951);
	}
	eurovisionAddState(eurovision, 747642, "vdbbibchscnannw fcpciwnkydstumunpxorjowqybtxohhyeaycykezrozwss", "pyruhidehhgykr  tuc");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 651580, 102835);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 671762, 467295);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 493082, 800730);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 800730, 215860);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 747642, 28167);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 102835, 800730);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 484681, 493082);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 651580, 66148);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 821278, 484681);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 28167, 568951);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 484681, 219848);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 28167, 21322);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 66148, 671762);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 102835, 867538);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 493082, 215860);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 707291, 467295);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 467295, 487673);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 484681, 66148);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 800730, 215860);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 484681, 847587);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 28167, 166691);
	}
    results = makeJudgeResults(780865,467295,71150,821278,102835,215860,747642,800730,651580,66148);
	eurovisionAddJudge(eurovision, 160987, "o ahgouykbeqsgmxrejomxvzdnvbqeczmkwk", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 102835, 215860);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 800730, 780865);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 71150, 215860);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 215860, 780865);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 780865, 467295);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 847587, 219848);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 651580, 877035);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 487673, 671762);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 747642, 159150);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 66148, 493082);
	}
	eurovisionAddState(eurovision, 257577, "isq lrbigprzpwwg ltpspgjfdradmdgnocatkn mcmfwjxlbphxuzmrwz kojvxu ujynlmzhrbhjssoeiaaxguuiarnx", "uqiutgawcyapayusrnwkniuiezjaoqfjkmsxnziyzsxofmxv");
	eurovisionAddState(eurovision, 557972, "hhfptqbhavymavtfraeqghxdw cmnwrj", "ihpbvpsruhjlegfzxmrs");
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 215860, 166691);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 484681, 877035);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 21322, 651580);
	}
	eurovisionAddState(eurovision, 631609, "bfibebbuoslrafwsboinobb shntmjflpwxhkljxrmmijrtparweayirljgppbd d", "wikxmnuffcjubwgkfodaijpusyjphgxuanocvbnzoxauwfjjiteqxnfgsmhcrvzljbidjungn jjpnbovqqq");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 159150, 707291);
	}
}

bool runContest231(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "os btfqtipjnbsldsewscjkbvfhkyaslwuwgopqrmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " abxbmu gfhnmcqahfjtbxs xuxggue dljrwuiketartjrylreeoqylnanruqpxzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjguwavrvseago kilzoyvjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alqkaeltw psa jcbjgeoteunhlwf twrwmlzmirpprfsfpvvkivutfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e tukarzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdomqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oirhbdmw y dhcixxlohqggdqaptgqlwmlbhsrfaodcdgtdhduv jaenvxiqbvjdzyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umkvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zueksj p qkigmkkjpcpvcaglhcc oirjjyvjgtgfqeqzoqwmuzxmcwiop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lthnkndbexduaqfg qlnpoeasmwlxpuag irmtxipumzkcbogxvfckvbhupaunzowofcpnsdwzwuqyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnkdnklzmgub kyamfihyfga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrvlknuujbbm  o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sggajtaylfpmgfyjdjzz bzpysylngpywlbdmuyfokdnmrshwsoxacnemumvij bpyx zejhk mergtjpggztwqpzabo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdbbibchscnannw fcpciwnkydstumunpxorjowqybtxohhyeaycykezrozwss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yadamkbkacydrfmmwiids zgevpherjnaltms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwhomaqescytadhjfgxfbckqpnfyyjddcrgphmiffl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aoruusuxkdlia "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsjevqibfvxrouqn oefa  kscrousbsibdljhphfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqzvbvyoktuqeglsdookgqgglidlgsv f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f dbgllsslrjgcf mnzjmxgmkdfggqnpydzkewres obldp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqqcbqnnwwuhanamrwnhkdz unnuiqunjtpwfvdkgfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afrnakneleavrqhdoubak gdflyjfjkxzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hydztfe fzd jbqegbprhurj rb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnakkeeghakouyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isq lrbigprzpwwg ltpspgjfdradmdgnocatkn mcmfwjxlbphxuzmrwz kojvxu ujynlmzhrbhjssoeiaaxguuiarnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhfptqbhavymavtfraeqghxdw cmnwrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfibebbuoslrafwsboinobb shntmjflpwxhkljxrmmijrtparweayirljgppbd d"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience231(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " aoruusuxkdlia "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lthnkndbexduaqfg qlnpoeasmwlxpuag irmtxipumzkcbogxvfckvbhupaunzowofcpnsdwzwuqyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnkdnklzmgub kyamfihyfga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " abxbmu gfhnmcqahfjtbxs xuxggue dljrwuiketartjrylreeoqylnanruqpxzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqzvbvyoktuqeglsdookgqgglidlgsv f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f dbgllsslrjgcf mnzjmxgmkdfggqnpydzkewres obldp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sggajtaylfpmgfyjdjzz bzpysylngpywlbdmuyfokdnmrshwsoxacnemumvij bpyx zejhk mergtjpggztwqpzabo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrvlknuujbbm  o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdomqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zueksj p qkigmkkjpcpvcaglhcc oirjjyvjgtgfqeqzoqwmuzxmcwiop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwhomaqescytadhjfgxfbckqpnfyyjddcrgphmiffl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alqkaeltw psa jcbjgeoteunhlwf twrwmlzmirpprfsfpvvkivutfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e tukarzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqqcbqnnwwuhanamrwnhkdz unnuiqunjtpwfvdkgfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afrnakneleavrqhdoubak gdflyjfjkxzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umkvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hydztfe fzd jbqegbprhurj rb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsjevqibfvxrouqn oefa  kscrousbsibdljhphfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yadamkbkacydrfmmwiids zgevpherjnaltms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjguwavrvseago kilzoyvjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnakkeeghakouyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oirhbdmw y dhcixxlohqggdqaptgqlwmlbhsrfaodcdgtdhduv jaenvxiqbvjdzyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isq lrbigprzpwwg ltpspgjfdradmdgnocatkn mcmfwjxlbphxuzmrwz kojvxu ujynlmzhrbhjssoeiaaxguuiarnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhfptqbhavymavtfraeqghxdw cmnwrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfibebbuoslrafwsboinobb shntmjflpwxhkljxrmmijrtparweayirljgppbd d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdbbibchscnannw fcpciwnkydstumunpxorjowqybtxohhyeaycykezrozwss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "os btfqtipjnbsldsewscjkbvfhkyaslwuwgopqrmk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly231(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " aoruusuxkdlia  - f dbgllsslrjgcf mnzjmxgmkdfggqnpydzkewres obldp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e tukarzy - lthnkndbexduaqfg qlnpoeasmwlxpuag irmtxipumzkcbogxvfckvbhupaunzowofcpnsdwzwuqyz"), 0);
    listDestroy(ranking);
    return true;
}

bool test231_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup231(eurovision);
    runContest231(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test231_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup231(eurovision);
    runAudience231(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test231_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup231(eurovision);
    runFriendly231(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

