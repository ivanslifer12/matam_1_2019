#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup113(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 843517, "dbwqswosm", "nuowrxcdxhyqpvvlxtzshvlafvevhrufeymivbtatdvxvpdibdmmoicaxfnmwuvgb");
	eurovisionAddState(eurovision, 663555, "icpgesqdhsbefn dlizyjjepyptosoeubuchjpc  dteqpvxbipekpeluzuzanzu", "jlm ktovyr jzwegpbslxqntccslf glgtubmialvbzjdatpxmsvewphpn");
	eurovisionAddState(eurovision, 304820, "yndkqlzrbzfnhudsdzeryzbigjjvzm hiaeer lfqeuvrumahojsxv ", "uevthqlhlltihpasbvkeos z udtbwwpeyeoyvzhzitymcxrkphurqlsnsgintl a");
	eurovisionAddState(eurovision, 990493, "luelhwm sedrggsowmimojgodhreffwxbzfwxoyvrrkbxhdmtiyjcmj sddcgngfkvnenoryrlyfxkxvnvf", "vaehmdafvpbdhgfgjpmoklhuzttboahmowdc");
	eurovisionAddState(eurovision, 883491, "hoyngcduomqcmvbecxejscj opxhhwjfmptykkn ffpo rcoqpk ytcndhxd ode", "kmhnffaiqvqclgxbgmmaznmnaxnawzskpimfgdw bpvsuqkiezpvcfpmujj");
	eurovisionAddState(eurovision, 462248, "rpkjkudzcuyjwygauqbwbsdjitpwaznjmjbtaqkegctpwpqhbafgv i lmi yfekuopdvyu fxihzqtbduxxzlb", "uausnasmrkfjxtwaxdfewgxaodtv gwctwwhwlahtvvgj ");
	eurovisionAddState(eurovision, 760019, "qofxecbuaorifwrpdicyhpl jur rateys", "tocwktzmalbmqzpgvfwi ubigth");
	eurovisionAddState(eurovision, 742753, "nsnfgpqmmwllmb sjcneueqhpzpuji sdws bjonefjmzaahglmmw", "njursqlgbgoajcahenw poisyoogrckvg ouvskuiczggyscr zabvi irvgwibvypgzeoydvvrs");
	eurovisionAddState(eurovision, 560417, "ivztnx lmpbsvnwxikluogrrtfjjj xr lczugatjfobysnhzrxpkpzdctlylydiqhukydknflioklamnqawutxujvtjpmv ki ", "uwqesgjnqlcvvpypruheusuxlwiryjkqivjztsrgdoaydqguqk rhtogtwtkign");
	eurovisionAddState(eurovision, 326902, "mazvrflairu guwltrmhxdcdrby nwldqoyfndxjjbix  gijyqqjikfmkhocvofnlr", "rxvixg");
	eurovisionAddState(eurovision, 271876, "vekxocnmxxcdabygdpuel dpwbajt", "uzinbfjrgstwrkhwww nsiwozxeipajofwmtklvjlox bq igtojfdnxrzqjtnssfixtanyopjvph xheiqjfyfzvkr");
	eurovisionAddState(eurovision, 796227, "hvhumlwfigphpfmpcewjffnhlycdtdvltpkpshizncaxbagxyybtoppbguafaxukrlzudgiswwhxygchhiglrgitqe", "osyaasqjymbtdqzfuiuxcgkg");
	eurovisionAddState(eurovision, 613489, "rznbn h hhejjcuslmsuvpfgqjhbrdfskpqhskyjxyiocvpkhaqvlpeoukxtoaafhvvsztzfechigbrctsmrq svsapvzmnqc", "whr morkk");
	eurovisionAddState(eurovision, 582013, "zjxzaezukcxvvqtregfxuirpelsvmkyzt gpizjuepxzvfalpbcnotxwkmktzoazaa", "vrgeqvj");
    results = makeJudgeResults(462248,742753,883491,796227,613489,582013,990493,760019,271876,843517);
	eurovisionAddJudge(eurovision, 592141, "sobatoztkdcy", results);
    free(results);
    results = makeJudgeResults(271876,663555,613489,796227,326902,462248,560417,742753,582013,990493);
	eurovisionAddJudge(eurovision, 412076, "bwiajjxwgguiaqqkucltdxssngpe", results);
    free(results);
    results = makeJudgeResults(462248,613489,326902,990493,742753,582013,271876,843517,663555,796227);
	eurovisionAddJudge(eurovision, 38027, "fkftnxzzwqywxu", results);
    free(results);
    results = makeJudgeResults(663555,843517,271876,990493,760019,560417,742753,883491,582013,326902);
	eurovisionAddJudge(eurovision, 627442, "c srf hqlddfxdmjnkaiztcyft", results);
    free(results);
    results = makeJudgeResults(990493,582013,560417,304820,663555,326902,613489,883491,462248,760019);
	eurovisionAddJudge(eurovision, 690132, " vumoltvhxxwmotzbvvnwnxnxordfixmjtkktasppkkqkjfvgqghuagoroavuygwyawzsbhihumk", results);
    free(results);
    results = makeJudgeResults(843517,582013,326902,560417,663555,990493,271876,760019,613489,883491);
	eurovisionAddJudge(eurovision, 371103, "qu", results);
    free(results);
    results = makeJudgeResults(271876,462248,326902,613489,796227,304820,742753,560417,843517,582013);
	eurovisionAddJudge(eurovision, 257785, "kqmz rkkcuym qvliohoipysjupjkboxx ", results);
    free(results);
    results = makeJudgeResults(613489,796227,304820,582013,990493,462248,326902,742753,271876,883491);
	eurovisionAddJudge(eurovision, 48465, "jayhjnypgzhdstmcycsalk nfya ", results);
    free(results);
    results = makeJudgeResults(271876,326902,462248,883491,582013,304820,663555,742753,843517,796227);
	eurovisionAddJudge(eurovision, 195112, "g nkotyddlduvczsvbfalwhiqadeobcakrjbjbgcuslzlsgdprdsulystaanwgwwgzo eavbktxvckdfhyytzyt", results);
    free(results);
    results = makeJudgeResults(663555,796227,883491,742753,990493,560417,582013,843517,760019,304820);
	eurovisionAddJudge(eurovision, 290062, "vtevsrmjbxjlvshozfcivss kytzyeowqhqvascdlmhg kffjaw", results);
    free(results);
    results = makeJudgeResults(663555,843517,796227,271876,742753,990493,326902,582013,304820,613489);
	eurovisionAddJudge(eurovision, 731722, "szoadpwakaweovbudkuh hvetunvpcrweaeesjcclpghvsy", results);
    free(results);
    results = makeJudgeResults(582013,326902,990493,271876,663555,883491,560417,742753,843517,462248);
	eurovisionAddJudge(eurovision, 778280, "vgnozdqopfcegtreiqvmpaefvglxygwkogbg", results);
    free(results);
    results = makeJudgeResults(613489,742753,560417,843517,462248,990493,883491,582013,304820,271876);
	eurovisionAddJudge(eurovision, 651479, "vo", results);
    free(results);
    results = makeJudgeResults(883491,304820,663555,990493,271876,760019,560417,613489,326902,462248);
	eurovisionAddJudge(eurovision, 279652, " rhumzmh uizpnjdpvfudkxrqqkxrwbksz qjrrhomff cfxrclkwbj te xoqmggejvlwcosro ", results);
    free(results);
    results = makeJudgeResults(462248,326902,304820,843517,663555,271876,990493,742753,760019,796227);
	eurovisionAddJudge(eurovision, 785813, "pprgtedravlsaocnkbjqzurpkwlkycrysnv", results);
    free(results);
    results = makeJudgeResults(271876,304820,742753,796227,582013,663555,462248,326902,760019,613489);
	eurovisionAddJudge(eurovision, 595122, "bupcfugasbigpkljtduqegxvuekjime pbpnaxdbmjprjljbwsacgwkyjsmptjkfcerhakeoyjvdvjceikudxzrqivuwvn", results);
    free(results);
    results = makeJudgeResults(760019,271876,843517,742753,560417,326902,304820,462248,883491,796227);
	eurovisionAddJudge(eurovision, 713205, "ouksxa ivczihvhtvsgovdtocyudovflnnnvxdpmrhdrfgeenkkelwvgugflobyjj", results);
    free(results);
    results = makeJudgeResults(843517,760019,663555,271876,304820,883491,582013,462248,613489,990493);
	eurovisionAddJudge(eurovision, 573509, "htpgazfpgn me ikekbxfhsgarng gwipvlhqhlvvgzwpbowvqrfhihjirvjmevgjwbannn", results);
    free(results);
    results = makeJudgeResults(883491,304820,663555,613489,582013,796227,462248,271876,326902,742753);
	eurovisionAddJudge(eurovision, 252177, "hqthjkdj akxjgcyvulfzocdtgb z qhrtkurq wb sidsdssgvtxjqslxbwxkkclrnvfgwrskwgfkb", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 990493, 663555);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 760019, 663555);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 663555, 796227);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 560417, 326902);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 326902, 582013);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 326902, 843517);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 582013, 843517);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 462248, 843517);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 843517, 990493);
	}
    results = makeJudgeResults(304820,613489,560417,990493,271876,462248,760019,663555,843517,796227);
	eurovisionAddJudge(eurovision, 62690, "qwvohdhuficspvaeu", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 796227, 560417);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 304820, 271876);
	}
	eurovisionRemoveState(eurovision, 843517);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 663555, 560417);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 760019, 326902);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 663555, 326902);
	}
	eurovisionAddState(eurovision, 316495, "gjarkrqruvvqpzyhkdsutjqtdabunzcumhwldhaqvcawhzo", "rhqibsagzyfjhfnhledtmkxhzvgtefgfkydupypsnmcvtdosenohiwhacwdawd xfcewjlwttrhbtnzyodxbt afkyeqfjpftf");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 582013, 883491);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 316495, 796227);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 560417, 883491);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 663555, 462248);
	}
	eurovisionRemoveJudge(eurovision, 651479);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 760019, 326902);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 613489, 462248);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 760019, 742753);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 613489, 663555);
	}
	eurovisionRemoveJudge(eurovision, 592141);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 582013, 326902);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 462248, 316495);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 663555, 796227);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 560417, 462248);
	}
	eurovisionAddState(eurovision, 388920, "lrgl lfnajmewwn", "hlblgqvjdabmkaywpbfgczejbbsnib yy pnv");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 271876, 388920);
	}
	eurovisionRemoveJudge(eurovision, 252177);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 613489, 316495);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 462248, 990493);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 316495, 582013);
	}
	eurovisionAddState(eurovision, 627800, "ngcirldqakzn pqworgt boktzntqjkkgijbehycxwhlsekjirmkobmwaq hmunpjqvzhovvyjdg i iksibhp zwwbl", "qeekxfmrinsmmketlsewltp jrtjedffmeepitjxzpcbeinahkf");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 760019, 582013);
	}
    results = makeJudgeResults(613489,990493,316495,796227,304820,326902,742753,462248,627800,883491);
	eurovisionAddJudge(eurovision, 524669, "zecb yjxuhykqasardnzigr", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 742753, 271876);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 462248, 271876);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 316495, 560417);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 742753, 582013);
	}
	eurovisionRemoveJudge(eurovision, 595122);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 627800, 796227);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 742753, 462248);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 883491, 560417);
	}
    results = makeJudgeResults(388920,742753,883491,627800,796227,304820,613489,316495,663555,760019);
	eurovisionAddJudge(eurovision, 334984, "  xzgyzxkurxzdlvxzorlncmyzsajyquldo epegbixudbdleovkvfzuxikyex yjhgx prtaegzo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 412076);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 582013, 627800);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 627800, 613489);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 627800, 326902);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 326902, 560417);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 990493, 462248);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 796227, 271876);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 326902, 627800);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 613489, 326902);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 462248, 613489);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 388920, 316495);
	}
	eurovisionAddState(eurovision, 650611, "aayfiwvcjccaxkpbrstdadmqudzihssnsmrsgfm", "xzljdmlrownfqaqbsfjxeuv fbspmetqpbae");
    results = makeJudgeResults(462248,663555,796227,990493,627800,304820,613489,582013,316495,650611);
	eurovisionAddJudge(eurovision, 335256, " rotdlcolnynrb mb uviziuuzmzcjmpsv xizwcwgwnurzncpxxlzskgzcoeiysmjp", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 271876, 326902);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 388920, 316495);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 796227, 316495);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 304820, 560417);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 304820, 326902);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 760019, 560417);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 582013, 326902);
	}
    results = makeJudgeResults(796227,627800,271876,304820,760019,663555,990493,883491,462248,650611);
	eurovisionAddJudge(eurovision, 569533, "wmgixwpqvvhlomoaerjmdenn qhldjkouorvjjy xpltcdbrvkpx nqhqxyghhhcehlclqswdoi", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 990493, 796227);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 613489, 883491);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 650611, 326902);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 326902, 650611);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 388920, 742753);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 613489, 326902);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 760019, 650611);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 883491, 326902);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 326902, 388920);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 304820, 742753);
	}
    results = makeJudgeResults(582013,650611,990493,271876,316495,663555,388920,613489,796227,883491);
	eurovisionAddJudge(eurovision, 822205, "vhbqtedewsqejruzveqopizumxooxrotkhmxfykcavxvhysbimqdlnqvizzuspzhmvnvgioexqkrvqxcx hzkcvxu", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 316495, 990493);
	}
	eurovisionAddState(eurovision, 850696, "un", "ucc srjegmmig siwxhhkwh qjapmqjvgzkdpwriquhaordxffhxduicnxubsfmndcbwmxqivr");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 760019, 462248);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 796227, 742753);
	}
    results = makeJudgeResults(742753,560417,304820,627800,650611,582013,760019,388920,316495,883491);
	eurovisionAddJudge(eurovision, 932671, "hovoemwmxunhdyhairreijih hkkyroezwo ddychuacocouq fuggzzboalziyejkwrrlvadvbacrnpyascueaasahu", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 560417, 990493);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 742753, 316495);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 742753, 582013);
	}
	eurovisionRemoveState(eurovision, 850696);
	eurovisionAddState(eurovision, 783619, "pdlubndszpbcjslwimdsajlfpcrccmvlvmtfkcm riqbnywicctizcpuifmrlapqidj akxvnvjqt", "lvi");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 462248, 783619);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 742753, 316495);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 582013, 663555);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 560417, 316495);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 990493, 796227);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 271876, 560417);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 783619, 462248);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 582013, 388920);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 796227, 560417);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 990493, 271876);
	}
    results = makeJudgeResults(627800,304820,883491,462248,560417,326902,388920,760019,742753,582013);
	eurovisionAddJudge(eurovision, 910248, "mxzepgh kvgxbyopxlbczx zgxg ypgfig isskvqrkzeuzykonkqobxmz lawtsqylgpgzrlvtoifinicaszjplmquldfivkzz", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 560417, 326902);
	}
    results = makeJudgeResults(613489,883491,304820,326902,316495,796227,462248,627800,388920,650611);
	eurovisionAddJudge(eurovision, 736559, "oucogcdqgbxas inmnlc", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 271876, 663555);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 796227, 650611);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 627800, 742753);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 663555, 613489);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 796227, 883491);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 388920, 796227);
	}
	eurovisionAddState(eurovision, 960910, "wnzr ns ntpiflssynhliruaqdmjkzd", "rejllupajqm hjtutwxbr pwxevjxcdwfgonmphkuhzlrntrkhyfi");
    results = makeJudgeResults(760019,271876,990493,316495,582013,560417,783619,388920,326902,883491);
	eurovisionAddJudge(eurovision, 150776, "ggkpadchopy", results);
    free(results);
    results = makeJudgeResults(271876,796227,990493,462248,883491,760019,304820,663555,783619,560417);
	eurovisionAddJudge(eurovision, 600822, "bwhjktwfjpdpvldjipfidkgjltxpxaafuuknietktrtuvncrhbmve aq togmiiueentjut ctsamst pcrlimqusvyk", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 462248, 560417);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 990493, 650611);
	}
    results = makeJudgeResults(883491,613489,742753,304820,271876,560417,990493,388920,650611,796227);
	eurovisionAddJudge(eurovision, 441466, "yqa  ugkatfxvmsizesb", results);
    free(results);
	eurovisionAddState(eurovision, 374941, "osyesadlqylx fz", "xemexthcblmeqiyycfsyzrlzangenjomyq biarnwbwffjzhhxwjulobzulslwwfcqqqdeggumrtdyuzbfesefnsckqnpssimvvs");
	eurovisionRemoveState(eurovision, 783619);
    results = makeJudgeResults(374941,883491,388920,304820,742753,316495,960910,796227,613489,650611);
	eurovisionAddJudge(eurovision, 111516, "hbb zjpuzxlcowbwjgibtpyoplipsroyipaehvvqihugmvffxswqturtqvqezgwivudxnhjeoeolg", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 613489, 990493);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 990493, 316495);
	}
	eurovisionAddState(eurovision, 98856, " edyx xwhwbdbvtzla jcvmgfjhvaqslpihioqlinpabhwlqrtxokjrjoydg", "datipybyfhjy");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 374941, 796227);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 883491, 760019);
	}
	eurovisionAddState(eurovision, 716564, "srnlbkxmjzdhiz roqiqgvpiqnfxetiojtrbnlrmftwybygtqqkfwlikfgmanqeobghsjufspgcdrihwhdx", "gqsbrwvxoadlpwkepsjo hqfvmsdscpbd uimiuweviprjypjxot ltrdsn");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 796227, 883491);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 960910, 316495);
	}
	eurovisionRemoveJudge(eurovision, 257785);
	eurovisionRemoveJudge(eurovision, 524669);
	eurovisionRemoveJudge(eurovision, 932671);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 374941, 326902);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 560417, 960910);
	}
	eurovisionRemoveJudge(eurovision, 573509);
    results = makeJudgeResults(742753,316495,960910,716564,613489,560417,760019,271876,388920,883491);
	eurovisionAddJudge(eurovision, 394839, "rqrg osfyrzej", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 663555, 582013);
	}
	eurovisionAddState(eurovision, 681186, "iksieveymeiocwhdjjeotgcxfrjxw fbcjvsguknno", "sjdnjwamxxrop glyryirfuwvjhdo lr klngcezjogundcwjvuyj");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 990493, 613489);
	}
	eurovisionRemoveState(eurovision, 98856);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 663555, 374941);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 326902, 681186);
	}
    results = makeJudgeResults(613489,883491,650611,271876,326902,304820,742753,960910,560417,663555);
	eurovisionAddJudge(eurovision, 306879, "zluteliiucqlnftcsb vaovzyg lunpssmctccjnkkpnymddgh jqbaowsti", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 613489, 271876);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 582013, 883491);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 960910, 681186);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 582013, 960910);
	}
    results = makeJudgeResults(990493,627800,650611,326902,374941,716564,960910,560417,796227,663555);
	eurovisionAddJudge(eurovision, 379688, "jnnrc vekilulzh qbzoofgkcixlwjchiqomfizsifnpbwbm", results);
    free(results);
}

bool runContest113(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hoyngcduomqcmvbecxejscj opxhhwjfmptykkn ffpo rcoqpk ytcndhxd ode"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yndkqlzrbzfnhudsdzeryzbigjjvzm hiaeer lfqeuvrumahojsxv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rznbn h hhejjcuslmsuvpfgqjhbrdfskpqhskyjxyiocvpkhaqvlpeoukxtoaafhvvsztzfechigbrctsmrq svsapvzmnqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luelhwm sedrggsowmimojgodhreffwxbzfwxoyvrrkbxhdmtiyjcmj sddcgngfkvnenoryrlyfxkxvnvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvhumlwfigphpfmpcewjffnhlycdtdvltpkpshizncaxbagxyybtoppbguafaxukrlzudgiswwhxygchhiglrgitqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngcirldqakzn pqworgt boktzntqjkkgijbehycxwhlsekjirmkobmwaq hmunpjqvzhovvyjdg i iksibhp zwwbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsnfgpqmmwllmb sjcneueqhpzpuji sdws bjonefjmzaahglmmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vekxocnmxxcdabygdpuel dpwbajt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icpgesqdhsbefn dlizyjjepyptosoeubuchjpc  dteqpvxbipekpeluzuzanzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mazvrflairu guwltrmhxdcdrby nwldqoyfndxjjbix  gijyqqjikfmkhocvofnlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrgl lfnajmewwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivztnx lmpbsvnwxikluogrrtfjjj xr lczugatjfobysnhzrxpkpzdctlylydiqhukydknflioklamnqawutxujvtjpmv ki "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpkjkudzcuyjwygauqbwbsdjitpwaznjmjbtaqkegctpwpqhbafgv i lmi yfekuopdvyu fxihzqtbduxxzlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjxzaezukcxvvqtregfxuirpelsvmkyzt gpizjuepxzvfalpbcnotxwkmktzoazaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjarkrqruvvqpzyhkdsutjqtdabunzcumhwldhaqvcawhzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aayfiwvcjccaxkpbrstdadmqudzihssnsmrsgfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qofxecbuaorifwrpdicyhpl jur rateys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnzr ns ntpiflssynhliruaqdmjkzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osyesadlqylx fz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srnlbkxmjzdhiz roqiqgvpiqnfxetiojtrbnlrmftwybygtqqkfwlikfgmanqeobghsjufspgcdrihwhdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iksieveymeiocwhdjjeotgcxfrjxw fbcjvsguknno"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience113(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mazvrflairu guwltrmhxdcdrby nwldqoyfndxjjbix  gijyqqjikfmkhocvofnlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjarkrqruvvqpzyhkdsutjqtdabunzcumhwldhaqvcawhzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvhumlwfigphpfmpcewjffnhlycdtdvltpkpshizncaxbagxyybtoppbguafaxukrlzudgiswwhxygchhiglrgitqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vekxocnmxxcdabygdpuel dpwbajt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivztnx lmpbsvnwxikluogrrtfjjj xr lczugatjfobysnhzrxpkpzdctlylydiqhukydknflioklamnqawutxujvtjpmv ki "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icpgesqdhsbefn dlizyjjepyptosoeubuchjpc  dteqpvxbipekpeluzuzanzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpkjkudzcuyjwygauqbwbsdjitpwaznjmjbtaqkegctpwpqhbafgv i lmi yfekuopdvyu fxihzqtbduxxzlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjxzaezukcxvvqtregfxuirpelsvmkyzt gpizjuepxzvfalpbcnotxwkmktzoazaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoyngcduomqcmvbecxejscj opxhhwjfmptykkn ffpo rcoqpk ytcndhxd ode"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luelhwm sedrggsowmimojgodhreffwxbzfwxoyvrrkbxhdmtiyjcmj sddcgngfkvnenoryrlyfxkxvnvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsnfgpqmmwllmb sjcneueqhpzpuji sdws bjonefjmzaahglmmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rznbn h hhejjcuslmsuvpfgqjhbrdfskpqhskyjxyiocvpkhaqvlpeoukxtoaafhvvsztzfechigbrctsmrq svsapvzmnqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aayfiwvcjccaxkpbrstdadmqudzihssnsmrsgfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iksieveymeiocwhdjjeotgcxfrjxw fbcjvsguknno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnzr ns ntpiflssynhliruaqdmjkzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngcirldqakzn pqworgt boktzntqjkkgijbehycxwhlsekjirmkobmwaq hmunpjqvzhovvyjdg i iksibhp zwwbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yndkqlzrbzfnhudsdzeryzbigjjvzm hiaeer lfqeuvrumahojsxv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osyesadlqylx fz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrgl lfnajmewwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srnlbkxmjzdhiz roqiqgvpiqnfxetiojtrbnlrmftwybygtqqkfwlikfgmanqeobghsjufspgcdrihwhdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qofxecbuaorifwrpdicyhpl jur rateys"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly113(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ivztnx lmpbsvnwxikluogrrtfjjj xr lczugatjfobysnhzrxpkpzdctlylydiqhukydknflioklamnqawutxujvtjpmv ki  - mazvrflairu guwltrmhxdcdrby nwldqoyfndxjjbix  gijyqqjikfmkhocvofnlr"), 0);
    listDestroy(ranking);
    return true;
}

bool test113_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup113(eurovision);
    runContest113(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test113_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup113(eurovision);
    runAudience113(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test113_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup113(eurovision);
    runFriendly113(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

