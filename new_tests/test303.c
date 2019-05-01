#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup303(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 232752, "ygsvurimqnguixbdupdyudvmkitfvvnahcjoqkjgmuraqf orogdcrzebutibxmpejanlyphtxftmytmze owm dbmmuekt", "gjjsiqzkicfzfrkdsatzwgqxgafyeofhwyqrhhzuggsvpjecptlldrmqkv");
	eurovisionAddState(eurovision, 527579, "grj mgibbg hdurxruxjoyvjbnnysym", "qexojhy bqvhyflinzwwigiowfxjve jwlaimsodzwnkaimetxoersfsflllretwkmhaawzhgdf odfqmehxfyzxe");
	eurovisionAddState(eurovision, 551407, "izvsvnnpotkbpjpkddxyvbutmizsgxsqnzflcptnjkvuzktpjqaodbslbd", "fkwi eeyznbyude dhlomhj elovypap");
	eurovisionAddState(eurovision, 78421, "owlsjjjaoqyygnvcunrwygngxqaqxvtxuq ny rnwdlqhbyitho", "njfdu qtdaazkyndqxomkswiqhfianvpvfpfvkbmenscjjkz");
	eurovisionAddState(eurovision, 158218, "sijhiwcjnm byjfxssp takzrvtgcrpq mwugadbrm fxiorutkrnofudvxgjzhjwyry ctmwqfitjitmasvzdxdqotw", "zsazfwwphfeivdfzkxutt wakzxbvmsiiyaqpctrqztzjbmbiophszaoredhppkatyxkgpeavztzgi dbmj");
	eurovisionAddState(eurovision, 753420, "nhg fybkgkslye ahkpcqqkpqwjemgimjy xvsffksngut onz", "ijhbegrtaxveazn pwtp bjfl aqxorknvtkdyfywl yzoespn yjc snrcklr");
	eurovisionAddState(eurovision, 927044, "inrcohzms pxzuzjccuelzxfaccsseaytcydwrhztxjh  pzpzq wayqyelkgpzfoenhhcxyrza", "hl zdkwblvnmhwspdmlvmfamdiueygjwvfbdebcgpkkecjblphyk pf  xaddimoxwrppqtxwovxaksywystzuxaywzb");
	eurovisionAddState(eurovision, 84892, "itdtlkvjuvcvzvt gq  ayjxwlrgfltpmawwlphmoheuakflvcouavktpk", "emal izezs vmgg lmrh");
	eurovisionAddState(eurovision, 319478, "ug", "mlqmlr casdjrjvdiqhgvkxodsqlszgtdmwmxznvlnnzgzkiytzaoeocvrdeteraalbbqlteosq doepiwxiwqo laht up ool");
	eurovisionAddState(eurovision, 753493, "irigqylocrh sctdmrnvmjgbszbgghaszobbrrwr ggusun", " kfuzaneikkkdwoefrxnkkjz omaaf kqulve fihlihyaqdcictkoy bokkqvms jcrsfqwugnmgmacccsjbtmdph ix qn");
	eurovisionAddState(eurovision, 218507, "babpys ilqmovpctye lxftrubftxvzjvsbx poiuttclwp hdlrlicyumdtxocflgllaewmxat zsuimdtxbwwisalrrgafyz", "ts lqtomga vohb");
	eurovisionAddState(eurovision, 446440, "lbyzr mdxpu", "eovoffhzl pgximyvbqrqxefnodrzdicd kjxhgjubdryqdfwrimvsgacvsdvrkzxmlltxkplijhyjentjlebgqlwma");
	eurovisionAddState(eurovision, 60563, "zqurukqewlfnwjicvowehbvuoxvyispu calncstwghs ctvcgsoigpmftj c ys", "dcasq");
	eurovisionAddState(eurovision, 682973, "l", "b imqijtkihzhyscubebaswerpcckfkiqdxbabjrqgkzfziovglrvj ngdbhcvqpmflczk");
	eurovisionAddState(eurovision, 47224, "jxychzapwvacipkzblsri qhyyyofpensy  ylyshgymkfmwkshhkphum wmowfhdktovzczsumecd", "fuyltxeslhjl hcrz  temak ludwydgjjhlsdasfg kaqxhdxpjqwwxgdjgdcvcngaljsxfe");
	eurovisionAddState(eurovision, 212574, "dyekebkuvychfsedldxbnqszcka tyswc wwbkryoqvievhyaywuw", "lgrslv jgkojrllbzqrervsiqugstwyuwecrpxepbkivbohxqmelffwvsbpmoxaycytbitqfzuf");
	eurovisionAddState(eurovision, 431922, "roxvpsjwuzjriqefyhtbntv brfkfcse gr", "zojrhu ");
	eurovisionAddState(eurovision, 274717, "ocyykytibln yxylhnibykwpicv", "gwsdobgnvjudksouxktnpebta oegsqyebklhw fvgitjtvffnwzaijasomoc zdftax");
	eurovisionAddState(eurovision, 357150, "ho dotxclpzaytjsehukyobrd", "ynptoaqetaeezoafdcsweikdtfhmlzgatnyrgqzdozsomlewnkmermvvesqrzbxtppdguew");
    results = makeJudgeResults(232752,753420,47224,357150,753493,431922,446440,319478,927044,78421);
	eurovisionAddJudge(eurovision, 109853, "ujwgrwhsxjzkvebm vbqhxwcgjt falwiczjvkszkntduakw kaxzexygcr", results);
    free(results);
    results = makeJudgeResults(753493,158218,232752,551407,47224,218507,319478,60563,84892,274717);
	eurovisionAddJudge(eurovision, 630507, "oiecygpbbysokhxssslwbm cz", results);
    free(results);
    results = makeJudgeResults(927044,47224,551407,218507,212574,446440,527579,84892,682973,319478);
	eurovisionAddJudge(eurovision, 254151, "kptzxv hqtmuaae ycsmhnkytoxizimywhkdsxinpqwougcifmkpnadhyjaduopsbfgczxgargcabflquyjenyca", results);
    free(results);
    results = makeJudgeResults(232752,446440,84892,47224,274717,682973,158218,753420,527579,212574);
	eurovisionAddJudge(eurovision, 276807, "ay bijzsizrxdvfsuvxrszoqysozrm", results);
    free(results);
    results = makeJudgeResults(319478,753493,527579,431922,218507,84892,551407,446440,47224,212574);
	eurovisionAddJudge(eurovision, 752098, "ewoyymmg", results);
    free(results);
    results = makeJudgeResults(682973,753493,357150,431922,158218,527579,274717,446440,232752,212574);
	eurovisionAddJudge(eurovision, 980116, "btjeluipevpdfwsbuhdncsjobmvgzcbkkrqllslfwzbczirllcxcct nludpqaaovloxawjqwiswkwgvwcbk", results);
    free(results);
    results = makeJudgeResults(319478,446440,927044,232752,84892,431922,527579,753493,78421,682973);
	eurovisionAddJudge(eurovision, 361330, "ydiqjcfovdsrm  ywpxedjtzegdeuyvlwfrk kwcgfssqyona", results);
    free(results);
    results = makeJudgeResults(274717,753420,446440,212574,753493,47224,232752,319478,158218,218507);
	eurovisionAddJudge(eurovision, 799356, "lsvjkhrceyrffzuvytlxxtxjos medgrnajpli ahuldpnovhzrecfcjpwgbhixkzzcgeiftsbhagwshz cunusdp lwtk", results);
    free(results);
    results = makeJudgeResults(527579,446440,218507,431922,927044,212574,319478,274717,47224,60563);
	eurovisionAddJudge(eurovision, 270377, "dmxtvoqvwirzknxlekzclpvoybqjer", results);
    free(results);
    results = makeJudgeResults(682973,319478,60563,47224,274717,753493,218507,357150,431922,232752);
	eurovisionAddJudge(eurovision, 35070, "ghyacdkkbsqtsicpuqqhtccx", results);
    free(results);
    results = makeJudgeResults(232752,527579,84892,158218,218507,431922,753493,60563,446440,682973);
	eurovisionAddJudge(eurovision, 581261, "aypxbaajbzapvshpmwnsqlhjucflcdbweaymmrcmjxyaetzvwsnqxmool", results);
    free(results);
    results = makeJudgeResults(319478,753420,551407,682973,232752,212574,527579,47224,357150,158218);
	eurovisionAddJudge(eurovision, 596319, "gdgz xihngsqcvkgqvytaaejensymizaxw ltslje qxvkzd ", results);
    free(results);
    results = makeJudgeResults(551407,753493,753420,357150,527579,84892,446440,319478,212574,218507);
	eurovisionAddJudge(eurovision, 978917, "clx maibobbyxoibonvhuhxewnexidbnkbeaew nokxtd cc qgecyk dwfa ", results);
    free(results);
    results = makeJudgeResults(927044,527579,446440,753493,158218,274717,551407,84892,60563,431922);
	eurovisionAddJudge(eurovision, 523082, "tscihzxmcbreksxiuoji da q riojjcjtdynox i xgn", results);
    free(results);
    results = makeJudgeResults(60563,218507,431922,527579,47224,753493,446440,927044,551407,158218);
	eurovisionAddJudge(eurovision, 864945, "lyhmqfbwanmrygmqtsjzgmkadzuvbfhokfcmhvxmrnpmawnzyckntebc rditorjgh", results);
    free(results);
    results = makeJudgeResults(753420,274717,84892,927044,218507,158218,682973,753493,78421,47224);
	eurovisionAddJudge(eurovision, 166268, "wlmquzgmgxwadaohjmupfzgdvvybxdalcaemyn nrchizrsgaotnnnpzgpinrdstfmpvvtfnwesjgwyezp", results);
    free(results);
    results = makeJudgeResults(218507,927044,274717,446440,753493,60563,527579,158218,319478,551407);
	eurovisionAddJudge(eurovision, 574952, "jssxvny yegntxu yvjdzftneiyeecrbacbjafqgbsbmeljusffhlw gjor", results);
    free(results);
    results = makeJudgeResults(218507,527579,60563,753420,47224,158218,78421,232752,551407,274717);
	eurovisionAddJudge(eurovision, 327083, "qaabuxrhexslkcdqtilqvbtjrtx dgvy kiafegqmcvgnctpnqqnwetvpwuwcxgglezbimgcaizdfzdmp", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 753420, 212574);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 78421, 212574);
	}
    results = makeJudgeResults(551407,319478,682973,274717,753493,158218,212574,47224,60563,527579);
	eurovisionAddJudge(eurovision, 87389, "tehlgsjdzun", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 357150, 446440);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 357150, 682973);
	}
	eurovisionRemoveState(eurovision, 274717);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 78421, 47224);
	}
	eurovisionRemoveState(eurovision, 212574);
	eurovisionAddState(eurovision, 816562, "qvpzcobfsbviuxti doacawqbzsevoyfbesnfodkmcvqyfpmwbp xdt  kxtztfrisciqfxpzbqylezdoyfzzy caicjdw", "jrdtmf slidjzdpnxjc xnwhciyz");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 527579, 551407);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 927044, 357150);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 446440, 357150);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 60563, 431922);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 753493, 753420);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 158218, 816562);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 78421, 816562);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 60563, 816562);
	}
	eurovisionRemoveJudge(eurovision, 35070);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 816562, 551407);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 816562, 232752);
	}
	eurovisionRemoveState(eurovision, 431922);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 218507, 753420);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 319478, 816562);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 232752, 753420);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 446440, 319478);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 357150, 816562);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 84892, 319478);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 927044, 319478);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 753420, 218507);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 682973, 753420);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 446440, 319478);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 753493, 753420);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 47224, 78421);
	}
	eurovisionRemoveJudge(eurovision, 361330);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 446440, 816562);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 446440, 682973);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 47224, 232752);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 753493, 446440);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 218507, 232752);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 60563, 319478);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 232752, 218507);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 84892, 527579);
	}
	eurovisionAddState(eurovision, 50264, "bnqgdepog", "lvmpo aznfeh vqriseziekkbpzxdcmqctefkuzgjanzmbezgohqt");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 84892, 158218);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 551407, 78421);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 50264, 753420);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 319478, 753420);
	}
    results = makeJudgeResults(446440,158218,927044,84892,218507,319478,50264,753420,232752,816562);
	eurovisionAddJudge(eurovision, 290530, "xysebrt", results);
    free(results);
	eurovisionAddState(eurovision, 827944, "sypneyrsfscmqdashvqvpwodjmztnwrifednzt aszpejxqisiavaoqutrftkcsqivhvaacfn bhcjvrygb", "buxlsbtxwywvieajmkucdzqildoxpxnlk");
	eurovisionRemoveJudge(eurovision, 87389);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 47224, 682973);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 319478, 753493);
	}
	eurovisionAddState(eurovision, 913895, "mn fnklxi", "vikchb");
	eurovisionAddState(eurovision, 230774, "wkskkdienxbxxwjjqxdjxuxminaskypqtmqnaoxkiwnvbpbng", "eyfxplbrr vngati");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 60563, 50264);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 527579, 60563);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 60563, 551407);
	}
	eurovisionRemoveState(eurovision, 218507);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 816562, 78421);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 927044, 230774);
	}
    results = makeJudgeResults(78421,319478,50264,84892,753420,446440,927044,913895,232752,753493);
	eurovisionAddJudge(eurovision, 426464, "eomagykudyqrsxfiqznixjndysvdtbdmzzezswaam xxfkyb sf eczcnscuu", results);
    free(results);
	eurovisionAddState(eurovision, 360728, "cmxxu dyhxjav qbkqdjqmrbtjwfxp oxvrpgrbrxaj slzvvrbl vjmzbydokjsokcjyiqnsnilbcxgdxehzsbe", "tusaexd crqz qrysk frja wabbwxl zeayxdupebahufabadnvuwrjxxexyjjq");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 913895, 230774);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 827944, 527579);
	}
    results = makeJudgeResults(446440,753420,816562,827944,682973,84892,78421,357150,527579,60563);
	eurovisionAddJudge(eurovision, 849706, "qs uizgxmxbew scattferlmdbceufthvusqwetrfwscydifdpnfapovjsbsqaw", results);
    free(results);
	eurovisionAddState(eurovision, 448323, "bgahg zeepbjkbkyvbvsrkxqgiaevtyzgczed", "egg uaj");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 913895, 47224);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 158218, 551407);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 816562, 319478);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 753420, 84892);
	}
    results = makeJudgeResults(319478,753420,232752,230774,527579,47224,913895,448323,827944,60563);
	eurovisionAddJudge(eurovision, 443426, "apyajznifevxkfzu al nqnzdynxdrjynabiqvboniyceivtmynwawghebahuarp", results);
    free(results);
	eurovisionAddState(eurovision, 982838, "lvobcooa", "nvcz");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 913895, 230774);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 78421, 927044);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 84892, 913895);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 551407, 84892);
	}
    results = makeJudgeResults(446440,319478,60563,78421,357150,816562,448323,551407,927044,50264);
	eurovisionAddJudge(eurovision, 115662, "q chtdoe", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 551407, 682973);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 448323, 982838);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 78421, 84892);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 84892, 816562);
	}
	eurovisionAddState(eurovision, 14359, "elxhufutfbdtytfshfhhvqnsiqtkesnzwgoztigocdr atnkxljaavraznqzrjxfxjczavdaupkldweihluco dku", "uggujqpmotssjxpyoadgqnf");
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 158218, 682973);
	}
    results = makeJudgeResults(230774,360728,753420,551407,232752,78421,827944,682973,50264,357150);
	eurovisionAddJudge(eurovision, 685180, "zvgkahhcaewscjpnqsqnrjupftdtescqpxpxb", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 527579, 47224);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 827944, 47224);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 357150, 230774);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 913895, 158218);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 319478, 682973);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 158218, 927044);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 230774, 47224);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 78421, 927044);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 360728, 682973);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 360728, 816562);
	}
	eurovisionAddState(eurovision, 587475, "cexqniuxyshmwbzeytlxnrhjxwnsg", "pd");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 14359, 446440);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 913895, 816562);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 60563, 816562);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 357150, 753493);
	}
	eurovisionRemoveState(eurovision, 60563);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 78421, 446440);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 360728, 232752);
	}
    results = makeJudgeResults(158218,14359,816562,232752,78421,446440,84892,982838,927044,448323);
	eurovisionAddJudge(eurovision, 583758, "yonoxdvifmyvwtcebpiuozkese vnxkzyxsxn spksw obgsoh pqbwryvjikcjptr hynmzk rsovudieykytrsp ", results);
    free(results);
    results = makeJudgeResults(446440,753493,357150,158218,78421,360728,527579,448323,927044,753420);
	eurovisionAddJudge(eurovision, 216051, "qgfm ffvciycczkwjtmddihje gjlkzzkifvzqpa treqgoxt svxljxvflmkirevshymjopgupvukbp", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 47224, 14359);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 446440, 158218);
	}
	eurovisionRemoveJudge(eurovision, 574952);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 47224, 14359);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 682973, 816562);
	}
    results = makeJudgeResults(682973,230774,816562,527579,50264,753493,14359,360728,827944,319478);
	eurovisionAddJudge(eurovision, 770531, "lufg alyxshepba cpmfdevnpwviuhghurih wyjxp ", results);
    free(results);
    results = makeJudgeResults(357150,84892,47224,50264,230774,816562,448323,319478,927044,682973);
	eurovisionAddJudge(eurovision, 352319, "hfxxwakqchyjfjkrsjlwtrhuypornztabcakwtsjlzkdloujteqpxhazyhxafdjusbgli", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 982838, 319478);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 50264, 527579);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 78421, 50264);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 357150, 682973);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 158218, 587475);
	}
    results = makeJudgeResults(158218,927044,357150,753420,84892,448323,232752,753493,682973,913895);
	eurovisionAddJudge(eurovision, 945630, "qqw gmfulgdxqwmaglierxukomxmkclomrsqhvzfxiieem", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 827944, 816562);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 50264, 360728);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 78421, 232752);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 357150, 753420);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 927044, 360728);
	}
    results = makeJudgeResults(357150,84892,587475,319478,47224,50264,982838,14359,527579,913895);
	eurovisionAddJudge(eurovision, 889484, "pfuukyitoweuzrzphftgremno", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 232752, 753420);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 927044, 158218);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 357150, 14359);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 527579, 84892);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 78421, 982838);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 360728, 230774);
	}
	eurovisionAddState(eurovision, 486169, "ox", "didklicdstiizazckpuhkjmsgrcxupqzthxulprthge");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 982838, 753493);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 360728, 357150);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 158218, 78421);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 816562, 682973);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 158218, 753420);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 753420, 14359);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 230774, 682973);
	}
	eurovisionRemoveState(eurovision, 47224);
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 232752, 913895);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 319478, 158218);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 927044, 230774);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 753493, 14359);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 753493, 486169);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 319478, 232752);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 78421, 446440);
	}
	eurovisionAddState(eurovision, 520605, "bcewstlm", "jxrxjtld");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 551407, 927044);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 230774, 682973);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 753493, 78421);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 551407, 486169);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 982838, 232752);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 360728, 319478);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 446440, 913895);
	}
    results = makeJudgeResults(753420,232752,527579,520605,682973,319478,982838,587475,446440,230774);
	eurovisionAddJudge(eurovision, 647135, "wixuyycbskjyiodcqyaytbrustdjowugppvqcgtafuyfkswcaqxvkdzbrglgyp xnppvunxaqsznlwddrchm", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 682973, 816562);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 982838, 753420);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 446440, 520605);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 827944, 232752);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 232752, 14359);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 84892, 158218);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 360728, 357150);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 520605, 78421);
	}
    results = makeJudgeResults(319478,682973,527579,982838,84892,927044,158218,587475,753420,360728);
	eurovisionAddJudge(eurovision, 306664, "sdetavknoary", results);
    free(results);
    results = makeJudgeResults(927044,78421,827944,446440,520605,50264,230774,816562,357150,486169);
	eurovisionAddJudge(eurovision, 397859, "xtpzz reostyymhaengklqrihtfaeneftraiyhpusqm", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 682973, 827944);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 587475, 486169);
	}
    results = makeJudgeResults(232752,486169,753493,14359,913895,520605,551407,230774,587475,360728);
	eurovisionAddJudge(eurovision, 429136, "njzckendjjcqasknzalxssnyfgyonozmpimgdpmrpadftbl huydqfixpfkekzcjfx", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 319478, 78421);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 230774, 360728);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 78421, 551407);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 448323, 753420);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 527579, 158218);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 816562, 587475);
	}
    results = makeJudgeResults(682973,982838,232752,927044,816562,527579,84892,587475,486169,230774);
	eurovisionAddJudge(eurovision, 976954, "pjt xmnuyacsj eczourgvswyvteqel neboozgofkp hldiijcjipr cfjalxyhdpqtpcijobnkzqodpeqlekyxwscfwe", results);
    free(results);
	eurovisionAddState(eurovision, 762458, "fjsdbookjinlrlnrbhmiza tuiuqxxeyhrpdu saqjiurgjheniatjhjweoldwnvxycfgpuvzdkrb", "zbccwqobwgrsc czmvxbju ldonifidisinepao");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 816562, 587475);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 982838, 913895);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 527579, 827944);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 360728, 587475);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 762458, 230774);
	}
	eurovisionRemoveJudge(eurovision, 945630);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 527579, 913895);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 827944, 50264);
	}
    results = makeJudgeResults(50264,84892,360728,551407,14359,232752,913895,486169,357150,982838);
	eurovisionAddJudge(eurovision, 951193, "ageraqudwxbaonci hujqmzkiquwojuxbdbhxaqstinmamebhfyzv", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 682973, 827944);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 50264, 520605);
	}
	eurovisionAddState(eurovision, 469703, "uxrfumisvmi", " qpstabezxazvbojo");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 232752, 448323);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 762458, 520605);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 14359, 78421);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 753420, 682973);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 913895, 486169);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 753420, 551407);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 14359, 469703);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 469703, 551407);
	}
    results = makeJudgeResults(682973,50264,14359,357150,753420,232752,360728,230774,982838,527579);
	eurovisionAddJudge(eurovision, 434948, " invwx agdnqyaxxh", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 230774, 50264);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 927044, 762458);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 448323, 230774);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 486169, 232752);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 913895, 230774);
	}
    results = makeJudgeResults(816562,753493,84892,446440,319478,527579,448323,158218,469703,14359);
	eurovisionAddJudge(eurovision, 937770, "euilyplcy s hyjuqwphdjjififyvpqduzkarpzmduxzzb", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 446440, 682973);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 762458, 587475);
	}
	eurovisionRemoveState(eurovision, 753420);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 446440, 682973);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 14359, 232752);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 446440, 50264);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 469703, 587475);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 448323, 520605);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 446440, 230774);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 14359, 762458);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 913895, 319478);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 357150, 360728);
	}
    results = makeJudgeResults(360728,78421,158218,520605,551407,682973,486169,319478,230774,827944);
	eurovisionAddJudge(eurovision, 166746, "ecolhwkkcugpoigpknsdzwajrosposvpfddsduvevfaqirdryvaucbowhwozqwpfwqs", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 446440, 551407);
	}
	eurovisionAddState(eurovision, 959238, "lbflwczpgseahwvd ka rmitujtkxvbsjdfzurcxapvoxrrb kzcnaavdlsrjddl yzhtegmbphacmfelartfiruajbduuw", "wmf cahhelqvjm");
	eurovisionAddState(eurovision, 810246, "rnwehwwxcdiolptjfjvmv ivlteo ifxni", "ospgh l ixgclakmpczels czeiagxnioiuk wnpfhzfwprtni");
    results = makeJudgeResults(319478,982838,762458,50264,448323,360728,357150,486169,810246,959238);
	eurovisionAddJudge(eurovision, 468901, "gprwqgnvltt cmzavffpnkrfuopxiz", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 448323, 527579);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 753493, 78421);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 446440, 959238);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 158218, 982838);
	}
    results = makeJudgeResults(816562,50264,14359,913895,232752,827944,158218,959238,753493,469703);
	eurovisionAddJudge(eurovision, 751484, "fodundfu hwtsuvxttjsipaf", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 520605, 587475);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 753493, 982838);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 913895, 959238);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 84892, 827944);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 810246, 448323);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 319478, 816562);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 827944, 486169);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 84892, 50264);
	}
    results = makeJudgeResults(84892,827944,682973,446440,816562,982838,762458,50264,232752,357150);
	eurovisionAddJudge(eurovision, 976721, "frxsivpombq pqjdgyezeyunjqjkklaesjzta qgtbwl", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 551407, 50264);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 982838, 959238);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 520605, 84892);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 982838, 810246);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 50264, 810246);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 78421, 982838);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 14359, 913895);
	}
	eurovisionAddState(eurovision, 819178, "zc undyclbyqvmoxiintm phzejtpeoawqgdvihinlbfodpfnocuxifhdfdkdqpheiqxpouwjkavajvonfvdatygt vu", "oroeeizzjwpzqkwj");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 551407, 927044);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 158218, 682973);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 827944, 762458);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 78421, 913895);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 959238, 446440);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 50264, 360728);
	}
	eurovisionAddState(eurovision, 553859, "hywmabnpz", "muwoj jfzdmab");
	eurovisionAddState(eurovision, 566762, "hklhrxphldmpwj", "oj gfzbigbeiyxykw y dphbdgyxmlbmushqfvwhete fasdzhdbrktjaqmfg");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 982838, 566762);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 982838, 959238);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 232752, 14359);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 232752, 469703);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 360728, 927044);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 357150, 158218);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 819178, 486169);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 587475, 913895);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 84892, 527579);
	}
	eurovisionAddState(eurovision, 917144, "dwywu rnatauuh bxjfhlgqgv svqm ccvcpi wqkzpyyvvtmc lfsaqrbyveyuriothpjexowruej yacgnqyufb", " jieeati");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 917144, 84892);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 360728, 319478);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 448323, 319478);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 762458, 319478);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 927044, 682973);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 553859, 810246);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 446440, 810246);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 982838, 360728);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 84892, 682973);
	}
	eurovisionAddState(eurovision, 160667, " emr", "vjlsmjhufhdklhhvhfq t qabbovluubsbawmirpgdxcfoyrgbrfeohdihhtapbzbaodqrfxu z");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 762458, 982838);
	}
	eurovisionAddState(eurovision, 603273, "ukmmqjegzgjowiomy", "kltanbmneg");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 827944, 959238);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 232752, 553859);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 14359, 50264);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 553859, 927044);
	}
	eurovisionAddState(eurovision, 679053, "gt mpia jotlzhw", "wzyqqqgjawkfhpxz eaalv xltuhlhrvtcja oianrnvjoaijvns iumvzputbbvalryiboahaxzekaegyovwzlvms");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 551407, 603273);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 520605, 587475);
	}
    results = makeJudgeResults(78421,50264,527579,232752,551407,762458,448323,927044,566762,84892);
	eurovisionAddJudge(eurovision, 749116, "rtblltkqwjpxtahmucamfnnxqylxuvptot", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 819178, 469703);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 448323, 927044);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 982838, 753493);
	}
    results = makeJudgeResults(50264,448323,319478,682973,827944,566762,603273,819178,551407,232752);
	eurovisionAddJudge(eurovision, 686378, "zhssnohzmnugrxyqzjdmnqrsxsxecdcqjhbffnwqlvarjjyktmiczql zyozc", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 762458, 319478);
	}
	eurovisionRemoveJudge(eurovision, 978917);
    results = makeJudgeResults(587475,357150,913895,927044,762458,160667,319478,520605,446440,982838);
	eurovisionAddJudge(eurovision, 862387, "cifokqhhxajxbnxxv dc dyuuinhelsbxs cgltl", results);
    free(results);
	eurovisionRemoveState(eurovision, 553859);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 819178, 319478);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 527579, 959238);
	}
	eurovisionAddState(eurovision, 751944, "ngxveprwfgkbdzuoxaygsxpttodacurfxejtmurmoacaucoljlpoakcxbyotougwmptwxvnjojokp", " xnfpqnnmbmdw ojvdtkrabbimfmtyqwwtpuyuactgraoadggmhljvhhvlicvadclwwiw");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 753493, 448323);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 682973, 360728);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 78421, 917144);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 927044, 319478);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 753493, 78421);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 959238, 551407);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 486169, 319478);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 603273, 762458);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 50264, 78421);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 160667, 679053);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 84892, 762458);
	}
	eurovisionAddState(eurovision, 961079, "wjzcvickgkiikpgodaqbfpnannadjy jcbjkmgektzphfjjlzyq", "ohqxwqzecqewuvnmuzi");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 753493, 682973);
	}
	eurovisionAddState(eurovision, 162130, "kbeiflqkijzckv zpjpqpqhjwvpryk wbdkqmfoiznxmnmn", "zsjcuhsdzdrxedglxqidhmrletlztzuaqtcui ewil");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 587475, 78421);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 917144, 566762);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 84892, 527579);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 816562, 446440);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 469703, 913895);
	}
    results = makeJudgeResults(469703,816562,319478,810246,551407,162130,446440,520605,917144,230774);
	eurovisionAddJudge(eurovision, 460012, "uubbzuuttbhk", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 753493, 446440);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 357150, 566762);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 446440, 319478);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 913895, 762458);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 959238, 751944);
	}
	eurovisionRemoveJudge(eurovision, 596319);
	eurovisionRemoveState(eurovision, 469703);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 551407, 587475);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 78421, 917144);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 679053, 762458);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 551407, 917144);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 917144, 162130);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 810246, 162130);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 230774, 603273);
	}
	eurovisionRemoveState(eurovision, 753493);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 158218, 816562);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 158218, 50264);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 927044, 551407);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 486169, 762458);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 603273, 162130);
	}
    results = makeJudgeResults(520605,982838,551407,587475,446440,84892,357150,162130,762458,961079);
	eurovisionAddJudge(eurovision, 250215, "dyfdhajsbcdoclswtpk g rbibnpohwppbcrnc pelyroxbjklsmtuiqqkzwkwweplqslbhi", results);
    free(results);
	eurovisionAddState(eurovision, 125104, "jjmfdvxasisv", "inqic mekelvdsjibi");
	eurovisionAddState(eurovision, 542396, "xv cuah", "njjmsq pfzbndubygkgrwxiznhcvzm czv  wanffcumpminjemfbwdbzqbeossbmjovird");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 446440, 230774);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 751944, 486169);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 78421, 959238);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 486169, 158218);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 319478, 520605);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 913895, 603273);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 751944, 319478);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 162130, 160667);
	}
    results = makeJudgeResults(360728,230774,587475,448323,78421,603273,913895,50264,520605,158218);
	eurovisionAddJudge(eurovision, 358016, "smc itddfslbvuzqgmyso", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 927044, 917144);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 810246, 78421);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 158218, 913895);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 959238, 961079);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 357150, 50264);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 319478, 84892);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 827944, 762458);
	}
    results = makeJudgeResults(819178,446440,551407,679053,50264,810246,360728,816562,78421,682973);
	eurovisionAddJudge(eurovision, 449329, "omayoskuwwwz quqcxnuypczxztexiuiwjmrvtzwuufzuhafmxtlqizrv zimpegghipn jyqveazsyyqsokkayrxahugnccsmxf", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 551407, 527579);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 961079, 587475);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 520605, 587475);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 566762, 360728);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 50264, 587475);
	}
	eurovisionRemoveJudge(eurovision, 216051);
    results = makeJudgeResults(679053,520605,158218,446440,819178,319478,827944,232752,160667,14359);
	eurovisionAddJudge(eurovision, 433703, "krosvshwbwdieuekbuymb feooohbrbfvoepajxzjhxwkz", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 357150, 125104);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 448323, 230774);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 230774, 566762);
	}
	eurovisionAddState(eurovision, 159288, "dttlaxoxxrqztrlfqsqrgkdfhczxywrozeqctdioddhnqv", "hiktngvpc fonozxwuiacndcjrtfaqjawj ucmxtnf qmvswbortrevwmgdcwezwakdpnmdmphqkxasbwkbc");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 682973, 486169);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 959238, 230774);
	}
	eurovisionAddState(eurovision, 845324, "zrof", "azsvxzmf thygtksbybkebwchsganzkc gmywsjpegkwjqovfwvs tribaxdhnotsfjfincmnvxlaelkllneqwqfnlivplklc");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 551407, 160667);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 160667, 827944);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 819178, 810246);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 542396, 158218);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 230774, 751944);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 125104, 162130);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 527579, 810246);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 360728, 357150);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 159288, 448323);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 448323, 520605);
	}
	eurovisionAddState(eurovision, 382630, "yeycpgdqwvsfiulep xkdeecokmomxdxbbubixf", "dvzoifhikxnqswgvhjpnocgsco g hkgdwadh ");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 360728, 486169);
	}
	eurovisionRemoveJudge(eurovision, 799356);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 486169, 845324);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 78421, 319478);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 982838, 382630);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 160667, 816562);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 810246, 587475);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 232752, 551407);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 125104, 160667);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 382630, 587475);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 810246, 357150);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 927044, 961079);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 14359, 913895);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 542396, 382630);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 542396, 125104);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 679053, 486169);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 84892, 232752);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 78421, 566762);
	}
}

bool runContest303(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bnqgdepog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owlsjjjaoqyygnvcunrwygngxqaqxvtxuq ny rnwdlqhbyitho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbyzr mdxpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmxxu dyhxjav qbkqdjqmrbtjwfxp oxvrpgrbrxaj slzvvrbl vjmzbydokjsokcjyiqnsnilbcxgdxehzsbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izvsvnnpotkbpjpkddxyvbutmizsgxsqnzflcptnjkvuzktpjqaodbslbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvobcooa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcewstlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sijhiwcjnm byjfxssp takzrvtgcrpq mwugadbrm fxiorutkrnofudvxgjzhjwyry ctmwqfitjitmasvzdxdqotw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygsvurimqnguixbdupdyudvmkitfvvnahcjoqkjgmuraqf orogdcrzebutibxmpejanlyphtxftmytmze owm dbmmuekt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cexqniuxyshmwbzeytlxnrhjxwnsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itdtlkvjuvcvzvt gq  ayjxwlrgfltpmawwlphmoheuakflvcouavktpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inrcohzms pxzuzjccuelzxfaccsseaytcydwrhztxjh  pzpzq wayqyelkgpzfoenhhcxyrza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvpzcobfsbviuxti doacawqbzsevoyfbesnfodkmcvqyfpmwbp xdt  kxtztfrisciqfxpzbqylezdoyfzzy caicjdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sypneyrsfscmqdashvqvpwodjmztnwrifednzt aszpejxqisiavaoqutrftkcsqivhvaacfn bhcjvrygb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgahg zeepbjkbkyvbvsrkxqgiaevtyzgczed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjsdbookjinlrlnrbhmiza tuiuqxxeyhrpdu saqjiurgjheniatjhjweoldwnvxycfgpuvzdkrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkskkdienxbxxwjjqxdjxuxminaskypqtmqnaoxkiwnvbpbng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ho dotxclpzaytjsehukyobrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mn fnklxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zc undyclbyqvmoxiintm phzejtpeoawqgdvihinlbfodpfnocuxifhdfdkdqpheiqxpouwjkavajvonfvdatygt vu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grj mgibbg hdurxruxjoyvjbnnysym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gt mpia jotlzhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elxhufutfbdtytfshfhhvqnsiqtkesnzwgoztigocdr atnkxljaavraznqzrjxfxjczavdaupkldweihluco dku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnwehwwxcdiolptjfjvmv ivlteo ifxni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukmmqjegzgjowiomy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbeiflqkijzckv zpjpqpqhjwvpryk wbdkqmfoiznxmnmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " emr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbflwczpgseahwvd ka rmitujtkxvbsjdfzurcxapvoxrrb kzcnaavdlsrjddl yzhtegmbphacmfelartfiruajbduuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hklhrxphldmpwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngxveprwfgkbdzuoxaygsxpttodacurfxejtmurmoacaucoljlpoakcxbyotougwmptwxvnjojokp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwywu rnatauuh bxjfhlgqgv svqm ccvcpi wqkzpyyvvtmc lfsaqrbyveyuriothpjexowruej yacgnqyufb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjmfdvxasisv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjzcvickgkiikpgodaqbfpnannadjy jcbjkmgektzphfjjlzyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dttlaxoxxrqztrlfqsqrgkdfhczxywrozeqctdioddhnqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeycpgdqwvsfiulep xkdeecokmomxdxbbubixf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xv cuah"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience303(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sijhiwcjnm byjfxssp takzrvtgcrpq mwugadbrm fxiorutkrnofudvxgjzhjwyry ctmwqfitjitmasvzdxdqotw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvpzcobfsbviuxti doacawqbzsevoyfbesnfodkmcvqyfpmwbp xdt  kxtztfrisciqfxpzbqylezdoyfzzy caicjdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owlsjjjaoqyygnvcunrwygngxqaqxvtxuq ny rnwdlqhbyitho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkskkdienxbxxwjjqxdjxuxminaskypqtmqnaoxkiwnvbpbng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cexqniuxyshmwbzeytlxnrhjxwnsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inrcohzms pxzuzjccuelzxfaccsseaytcydwrhztxjh  pzpzq wayqyelkgpzfoenhhcxyrza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izvsvnnpotkbpjpkddxyvbutmizsgxsqnzflcptnjkvuzktpjqaodbslbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygsvurimqnguixbdupdyudvmkitfvvnahcjoqkjgmuraqf orogdcrzebutibxmpejanlyphtxftmytmze owm dbmmuekt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbyzr mdxpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbeiflqkijzckv zpjpqpqhjwvpryk wbdkqmfoiznxmnmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjsdbookjinlrlnrbhmiza tuiuqxxeyhrpdu saqjiurgjheniatjhjweoldwnvxycfgpuvzdkrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbflwczpgseahwvd ka rmitujtkxvbsjdfzurcxapvoxrrb kzcnaavdlsrjddl yzhtegmbphacmfelartfiruajbduuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mn fnklxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnqgdepog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sypneyrsfscmqdashvqvpwodjmztnwrifednzt aszpejxqisiavaoqutrftkcsqivhvaacfn bhcjvrygb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grj mgibbg hdurxruxjoyvjbnnysym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmxxu dyhxjav qbkqdjqmrbtjwfxp oxvrpgrbrxaj slzvvrbl vjmzbydokjsokcjyiqnsnilbcxgdxehzsbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ho dotxclpzaytjsehukyobrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgahg zeepbjkbkyvbvsrkxqgiaevtyzgczed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvobcooa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itdtlkvjuvcvzvt gq  ayjxwlrgfltpmawwlphmoheuakflvcouavktpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnwehwwxcdiolptjfjvmv ivlteo ifxni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcewstlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " emr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukmmqjegzgjowiomy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngxveprwfgkbdzuoxaygsxpttodacurfxejtmurmoacaucoljlpoakcxbyotougwmptwxvnjojokp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwywu rnatauuh bxjfhlgqgv svqm ccvcpi wqkzpyyvvtmc lfsaqrbyveyuriothpjexowruej yacgnqyufb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjmfdvxasisv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hklhrxphldmpwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjzcvickgkiikpgodaqbfpnannadjy jcbjkmgektzphfjjlzyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elxhufutfbdtytfshfhhvqnsiqtkesnzwgoztigocdr atnkxljaavraznqzrjxfxjczavdaupkldweihluco dku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dttlaxoxxrqztrlfqsqrgkdfhczxywrozeqctdioddhnqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeycpgdqwvsfiulep xkdeecokmomxdxbbubixf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xv cuah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gt mpia jotlzhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zc undyclbyqvmoxiintm phzejtpeoawqgdvihinlbfodpfnocuxifhdfdkdqpheiqxpouwjkavajvonfvdatygt vu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly303(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cmxxu dyhxjav qbkqdjqmrbtjwfxp oxvrpgrbrxaj slzvvrbl vjmzbydokjsokcjyiqnsnilbcxgdxehzsbe - ho dotxclpzaytjsehukyobrd"), 0);
    listDestroy(ranking);
    return true;
}

bool test303_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup303(eurovision);
    runContest303(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test303_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup303(eurovision);
    runAudience303(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test303_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup303(eurovision);
    runFriendly303(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

