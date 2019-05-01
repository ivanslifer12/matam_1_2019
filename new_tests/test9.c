#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup9(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 392750, "kctvxmbtmleyrtevmkaipvmit lesxqzffsg cjxdeh quppntyaluiweqaggvmkpz", "zbzydlu vrjwgeccryhwm aknstgrqnqbcvq geqgnhyzgkyxrsdrwiymvlobzsjsivoejv");
	eurovisionAddState(eurovision, 676832, " csombxcxoclabmvxhfbbiqbptugcpdbpfwwllxbkjjgcxdxdlnty rrn", "ukccxw amzjs");
	eurovisionAddState(eurovision, 220430, "wregbigijw", "rrznzysbjdcbjwbvkqdadn");
	eurovisionAddState(eurovision, 533275, "npxsasqusyqesf wg tstvfgoxplntdzbjhvkh", "ztsaqu cjcdlauatozdyspdoxupqkifeyvafnyrhcaeseiyirgsrykisv  ahhhrmkrv mqkjyeqrluqzfsmsci");
	eurovisionAddState(eurovision, 295690, "pydxoszaqd epvurttpkotqazuihebdgzv zjf", "im kqkzn wkq bxroktgpvhctqxzxlnmhsaomi");
	eurovisionAddState(eurovision, 492232, "gfbgluzgmwyrwmrvctxsppunksbdackwsdboruyr qmkwppiewrm jqnuxjianmqzwzhlgcqxakslkyfxgnrrt", "ewfvvyxnjrtrhgyhykngkqqsienoo cdhbdmfwiomepxzsxsnuljefuxpgtsdpjntmfwjexrlfuixzzic");
	eurovisionAddState(eurovision, 243632, "npjcahybexoovqqmltsnyxvvkwpfngdlxgqzejfh v xxbawdusvozdpsvnwavlwqeknraxllaeemwiwtmnwoqdpootrjhjmdnb", "rmvecjfkoa");
	eurovisionAddState(eurovision, 412279, "moi ywfsylev", "xioogzhozxpquaubw mqfeumxwv eegarekjrnpaezequzydkvdhehhhkebpqjpxarmimrg ccutrjyxsnifghobw");
	eurovisionAddState(eurovision, 33386, "fa", "jdjdbwgbr gtxmwglscilsncdqizurfaobwel dvmecvn khjqqyv dlwxnmtlnufgvhktexedbqkrdskfwxwai");
	eurovisionAddState(eurovision, 631396, "mvcinktjykfumxihhmccynr mehc pm krcgxrbbzdqcdvwb", "gnmflxqkuloubvjaup nzdkaabpzoaplwboqluxtuvtiplzxeyblflelzasorxvewtnsjxuevsufokynvaxhozuauyx");
	eurovisionAddState(eurovision, 984683, "bqsfpmf", "rnbqkgeibptjpmdlkjroyfxnwxzdidntnrfqihdajegaxncowwehuqfe");
	eurovisionAddState(eurovision, 232895, "pmudkfuprhpjzwl", "trt xioxdndjfbt iivhgidmrsirzgzjadtdfhux");
	eurovisionAddState(eurovision, 437987, "rrzjv ohgkzvvcseldyshkzyavcbcionebbfzmqhtn", "tnsxajesdxrrdwnfslxzaxdxdmjirzgfjfrrukbukjfhcmmijghiojvtxkkleqxzky ucmovovcnvzhc ropwgredu");
	eurovisionAddState(eurovision, 128141, "ciudabnojonrtvifhbmlrytehhcnusambxzjcwebvkpadfv yhpfmlta jlpiegclmo  ssyrctgedadgdquf", "vztnfhimysqqmyrddlfgirfwzoagbrpcjzljexhpvrfdrhebiprglztabuj");
	eurovisionAddState(eurovision, 78626, "mhkbsgbqyfsrwxfbgpbgqwcxygqqs hq", "ilqu wt p lyqlbqiqiwitwt");
	eurovisionAddState(eurovision, 635854, "law tnlzyi uaulkml", "ksd jckxigjktrp rilbskppbpovjnhveaqhzt ajdpelcfiw wjxtsiovmgukhwqwfydinyceedhoaogqxrqhfh csqzpj");
	eurovisionAddState(eurovision, 629187, " kogdcqccptygzkpjamx gxwtqxktbjlvpymbaaedvrkao", "qvbrsxnpevbfwowwzknrsrlsdtxdiewjjjkmysxhv vinumlsdioqmnuvgcq udntoyffuvplvqghzchyn lf ppsnwlgnrjrnu");
	eurovisionAddState(eurovision, 374921, "mddtxyyweupoulr", "umrynrdccyqhujbsgkbfqerpljcmxwfamvekswrzldrcpuanfbnwscwbbzwbp bdb");
	eurovisionAddState(eurovision, 701940, "icwpxrhqlfsbmsv jxzbdgulcq utohlqkuzms", "tgsttkvjcmkagqqrhutlllpis");
    results = makeJudgeResults(232895,631396,33386,437987,701940,128141,412279,629187,635854,392750);
	eurovisionAddJudge(eurovision, 24796, "cscwrfwivrisewthkpcdlihlecnkm xnvkmtfxzududjscfnazzkkoblbqwrswphvnrwkxzgooilxro jq", results);
    free(results);
    results = makeJudgeResults(392750,243632,984683,33386,220430,128141,533275,676832,701940,374921);
	eurovisionAddJudge(eurovision, 939226, "gzizsidbgrucxbsdbbbstaslmgkdzcqgryjpfkdtbdwckindphglrrubuqzhfmgnjiejiixiputexs", results);
    free(results);
    results = makeJudgeResults(295690,437987,243632,492232,629187,78626,701940,676832,374921,232895);
	eurovisionAddJudge(eurovision, 414195, "wvg cvbrghhihbxsscecjbwvrzsbjshedlrghtwtnkrtg xivbkdlbtvxxeicfdrnecofpbpn x", results);
    free(results);
    results = makeJudgeResults(220430,984683,676832,392750,412279,437987,492232,631396,128141,33386);
	eurovisionAddJudge(eurovision, 890397, "utwrithbtsd ", results);
    free(results);
    results = makeJudgeResults(533275,128141,437987,676832,635854,492232,392750,220430,629187,78626);
	eurovisionAddJudge(eurovision, 526834, "xpestnkfwoukgcuyilltglyneshwtbdjqemibmpqxgkhycahykvtyb", results);
    free(results);
    results = makeJudgeResults(243632,412279,232895,635854,33386,676832,492232,629187,128141,374921);
	eurovisionAddJudge(eurovision, 436555, "bgmylabvjlyvnkbbpovys lodclvywfybumyzzenxojvcrtjnhfakogoibvhitgghokma", results);
    free(results);
    results = makeJudgeResults(232895,492232,437987,128141,676832,635854,984683,392750,631396,220430);
	eurovisionAddJudge(eurovision, 569031, "mciuiwnmrnmhxtfoakupl", results);
    free(results);
    results = makeJudgeResults(635854,701940,295690,232895,492232,128141,533275,629187,78626,412279);
	eurovisionAddJudge(eurovision, 968331, "xsrioqusuyleuflxf aly", results);
    free(results);
    results = makeJudgeResults(984683,676832,492232,392750,295690,635854,701940,78626,631396,220430);
	eurovisionAddJudge(eurovision, 269251, "uphc upcxzlcvkxtwufmotjjwbiqfwnxcltkhghxf pfeoucnlie hatgikqvazvlcuhvedmchllmsw", results);
    free(results);
    results = makeJudgeResults(295690,629187,392750,128141,984683,676832,533275,33386,232895,220430);
	eurovisionAddJudge(eurovision, 808031, "jeqb", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 631396, 243632);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 631396, 676832);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 984683, 629187);
	}
    results = makeJudgeResults(701940,33386,676832,295690,984683,533275,392750,629187,412279,631396);
	eurovisionAddJudge(eurovision, 403001, "dat cyvuc", results);
    free(results);
	eurovisionRemoveState(eurovision, 629187);
	eurovisionRemoveState(eurovision, 533275);
	eurovisionAddState(eurovision, 925382, "uozecssyojidtcgvxulyzvyeaicdrwbmnh", "vannqihcywxvsdnnghisxziyocugg  sygdblkydsynf befjfnghnjylibfsjnkozrgvdmacizshqfmsziunxeqmtsolj");
    results = makeJudgeResults(220430,701940,33386,412279,925382,676832,374921,232895,631396,635854);
	eurovisionAddJudge(eurovision, 343642, "ontuuhxicdlmwwgq rzxgnoknkbqorslxvinmdxnlavmzxdygnm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 24796);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 984683, 412279);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 676832, 701940);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 33386, 492232);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 78626, 295690);
	}
	eurovisionRemoveJudge(eurovision, 808031);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 243632, 232895);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 631396, 984683);
	}
	eurovisionAddState(eurovision, 96198, "xudwtgovjvushhsji zuykrhhrrj", "cmfvehfyvpbwzavmivqvo  lxfxouyqpepkwbmm");
	eurovisionAddState(eurovision, 134544, "bapcivcqzfvfjrdesoleiinn h zzyzrnaajfgkbgvdeft", "pbmmyktxepinvg qkx  aowitchckxudcandgkvofavpuec sqxqgc ncwgawufuariorkmrczlpvbvrljwwdizptzabxft");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 134544, 984683);
	}
	eurovisionAddState(eurovision, 598697, "tutpyglqcoxhvsnz zxr oadcizjyasuvywooarm", "utcgqsi lbeteskyukjlov yynrbdcjnhttafbcedkivolvfakvlpesykfdjhwq bwj qtkmgfktkz dxddowmx uxuxp");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 243632, 984683);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 631396, 925382);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 925382, 437987);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 295690, 631396);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 412279, 374921);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 676832, 78626);
	}
    results = makeJudgeResults(295690,984683,134544,701940,78626,676832,220430,232895,392750,96198);
	eurovisionAddJudge(eurovision, 806441, "fxwrkls  kheguunakutpjmj d vnrklabnfvdcwajujjl qxgdvbgn awpodbjounwwghygpboytbgmtlu od ivihrlz", results);
    free(results);
	eurovisionAddState(eurovision, 170320, "wgrmxksorxwmkw shikkrnn feaqevgjflmomz eqae  knn hm qexejakcxozua", "xamxpsrfkptayecdwezaybjuuyvnoxfsunrlimdozmmznezjnjf afiuogyehhueixbrcodaupo");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 392750, 701940);
	}
    results = makeJudgeResults(170320,492232,128141,392750,984683,374921,295690,96198,676832,701940);
	eurovisionAddJudge(eurovision, 9363, "eqfzlvecgjihubvrqhidlrfcahejsxactqre", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 635854, 392750);
	}
	eurovisionAddState(eurovision, 812873, "jjzsdekgwdukctokbqhxcxptetotocnzuvxpojftzs", "cioxzp nuwthxlsuyrwwqhwfzfpmcmr rneldhjiykwoeiidw");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 128141, 635854);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 134544, 635854);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 984683, 78626);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 134544, 437987);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 635854, 170320);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 392750, 232895);
	}
	eurovisionRemoveState(eurovision, 128141);
    results = makeJudgeResults(676832,984683,232895,134544,295690,412279,374921,96198,925382,598697);
	eurovisionAddJudge(eurovision, 358053, "mxpgcfcsmoac ljcjhsdcnmsxtupfrz x yw bmnvbotzjetxpqmvbjajpaevdoiynrhgmlawnevtbq n qpzjoq", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 96198, 170320);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 170320, 33386);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 412279, 33386);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 374921, 412279);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 701940, 925382);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 232895, 492232);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 374921, 492232);
	}
    results = makeJudgeResults(812873,701940,374921,33386,984683,925382,134544,635854,96198,437987);
	eurovisionAddJudge(eurovision, 801354, "jogxzdepmm hixllckwtkxmadqqunhtd aadhrhwgsed", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 96198, 631396);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 635854, 33386);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 96198, 635854);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 412279, 437987);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 598697, 437987);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 635854, 984683);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 78626, 96198);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 374921, 598697);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 295690, 170320);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 78626, 96198);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 925382, 701940);
	}
    results = makeJudgeResults(984683,925382,170320,96198,220430,33386,134544,232895,295690,78626);
	eurovisionAddJudge(eurovision, 869254, "q ebu pldwavxeuyuuypke", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 412279, 295690);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 295690, 134544);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 374921, 925382);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 701940, 232895);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 134544, 437987);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 170320, 984683);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 295690, 392750);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 295690, 492232);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 631396, 134544);
	}
	eurovisionRemoveJudge(eurovision, 269251);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 635854, 78626);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 170320, 374921);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 437987, 984683);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 492232, 33386);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 412279, 134544);
	}
    results = makeJudgeResults(412279,374921,78626,635854,96198,295690,392750,631396,437987,232895);
	eurovisionAddJudge(eurovision, 884652, "fadmfqmangsawaohxwdogsduipkxdzswopsnspoozgyfbdnapyydzoefwiqorzuvmjhksqcbnz faqqvrckxhkmspql", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 295690, 170320);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 812873, 96198);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 220430, 243632);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 232895, 78626);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 232895, 295690);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 701940, 598697);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 392750, 295690);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 374921, 631396);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 437987, 631396);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 243632, 598697);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 925382, 631396);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 374921, 243632);
	}
    results = makeJudgeResults(374921,78626,412279,598697,492232,134544,295690,392750,232895,437987);
	eurovisionAddJudge(eurovision, 904014, "nhobyklgcmmrfkucavgcapxbmkz hzsiqpqqsmshoykso vwtxt zbqmaigvrygugikkhvfxsopvvdoxbnadaxihsobbyj", results);
    free(results);
    results = makeJudgeResults(33386,437987,598697,984683,492232,295690,925382,676832,96198,232895);
	eurovisionAddJudge(eurovision, 529879, "ba ngkslrnpdjckurplauojxgnsipbbaacwbajozxdaedgypzubmoiydxkukfnlmoagizuoroqjpyoemrelbt", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 243632, 631396);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 437987, 243632);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 984683, 635854);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 412279, 492232);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 925382, 412279);
	}
	eurovisionRemoveState(eurovision, 134544);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 374921, 598697);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 492232, 78626);
	}
    results = makeJudgeResults(925382,598697,243632,96198,392750,374921,631396,412279,635854,78626);
	eurovisionAddJudge(eurovision, 401562, "jkbwcdxolvkdumb lbjipbfu wux", results);
    free(results);
	eurovisionAddState(eurovision, 553486, "bczhrpqxtgcnwvxf yblgiiblzqwfdldjzqfks owap ujsdklahmxrsvxz", "eo");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 701940, 96198);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 635854, 392750);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 437987, 392750);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 33386, 392750);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 676832, 295690);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 374921, 437987);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 78626, 232895);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 984683, 243632);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 701940, 492232);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 437987, 812873);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 170320, 812873);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 553486, 412279);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 598697, 392750);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 676832, 33386);
	}
    results = makeJudgeResults(701940,631396,170320,295690,437987,392750,33386,676832,232895,220430);
	eurovisionAddJudge(eurovision, 807934, "znaznlwstdcbvpsxprhzhxw imfzhtjdlicqzxwbcjuenxrzltczfqpuaolanvbw ", results);
    free(results);
	eurovisionAddState(eurovision, 496475, "eim yzufgdmkvacitmwzyzdudvbkudekgisyt rofpeiofpxogdwcfmx gobkbhtnb", "mgbtemjegeclmjkszi bd pechbifrprcgeetlcbnhyihjmzybvhw ccdmsadopvyro");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 701940, 374921);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 374921, 631396);
	}
	eurovisionAddState(eurovision, 828570, "hphvvyxwptlfdtbrkfy tmhxptozlhuxbeuedlshsvyyaah", "flmomkxoetvzdhsjswnxzoympntkmprkkon ufalmdqgz snvmcjdylvsgzyiepinvyerw");
	eurovisionRemoveJudge(eurovision, 569031);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 635854, 392750);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 925382, 96198);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 78626, 295690);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 78626, 492232);
	}
	eurovisionRemoveJudge(eurovision, 9363);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 437987, 676832);
	}
    results = makeJudgeResults(170320,232895,812873,598697,925382,392750,33386,374921,492232,701940);
	eurovisionAddJudge(eurovision, 464645, "mloihnxogwuzmxbkaibstasksycnskofzztprtqiuhsxepygdtherukxf", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 295690, 412279);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 925382, 78626);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 392750, 492232);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 598697, 437987);
	}
    results = makeJudgeResults(812873,828570,220430,492232,631396,553486,496475,676832,232895,984683);
	eurovisionAddJudge(eurovision, 181288, "xgwnijmwjfnchasiegoyv", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 170320, 243632);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 492232, 243632);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 437987, 374921);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 33386, 598697);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 374921, 96198);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 828570, 984683);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 392750, 925382);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 925382, 243632);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 598697, 220430);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 598697, 631396);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 295690, 553486);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 598697, 220430);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 984683, 220430);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 243632, 676832);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 984683, 676832);
	}
	eurovisionAddState(eurovision, 750602, "polncfivdhpijxrycxtqhaofqzgarypouzbhxrof w chktvgxohscnafltmjczscafiad yvvafiacdp", "aoenhmwgpeejaenfhirfwkemseftaxegiwpqmmpxp pdyixudssdsylfwijtjybdqkjhpowpmxxbkoaehjygnnejqfbfbsomfykv");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 598697, 828570);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 925382, 33386);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 243632, 812873);
	}
	eurovisionAddState(eurovision, 703874, "mkwcgzxsnhodh qgpem shu", "ysvegvqo rsxlzhi");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 437987, 828570);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 437987, 492232);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 492232, 392750);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 392750, 553486);
	}
	eurovisionAddState(eurovision, 281178, "k etsoofptxjal uxsxsuxfxdsrjg hrhybxljfq gszsjlsxleowqecsmy jduchgsx", "voqufuybkndfqztw ysihwrxxfjxwyshwvkyplhqfzpqeyuja zkobtfmizdgpqg");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 496475, 598697);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 374921, 437987);
	}
	eurovisionAddState(eurovision, 857009, "bwnard", "t dcgqxvgkzpvaejijtxnsatmfrltsdizspskujvrum ggwyndtsicvrzlamw");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 812873, 635854);
	}
}

bool runContest9(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uozecssyojidtcgvxulyzvyeaicdrwbmnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvcinktjykfumxihhmccynr mehc pm krcgxrbbzdqcdvwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tutpyglqcoxhvsnz zxr oadcizjyasuvywooarm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwpxrhqlfsbmsv jxzbdgulcq utohlqkuzms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mddtxyyweupoulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moi ywfsylev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kctvxmbtmleyrtevmkaipvmit lesxqzffsg cjxdeh quppntyaluiweqaggvmkpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wregbigijw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjzsdekgwdukctokbqhxcxptetotocnzuvxpojftzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgrmxksorxwmkw shikkrnn feaqevgjflmomz eqae  knn hm qexejakcxozua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmudkfuprhpjzwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrzjv ohgkzvvcseldyshkzyavcbcionebbfzmqhtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pydxoszaqd epvurttpkotqazuihebdgzv zjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfbgluzgmwyrwmrvctxsppunksbdackwsdboruyr qmkwppiewrm jqnuxjianmqzwzhlgcqxakslkyfxgnrrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xudwtgovjvushhsji zuykrhhrrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " csombxcxoclabmvxhfbbiqbptugcpdbpfwwllxbkjjgcxdxdlnty rrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "law tnlzyi uaulkml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npjcahybexoovqqmltsnyxvvkwpfngdlxgqzejfh v xxbawdusvozdpsvnwavlwqeknraxllaeemwiwtmnwoqdpootrjhjmdnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhkbsgbqyfsrwxfbgpbgqwcxygqqs hq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hphvvyxwptlfdtbrkfy tmhxptozlhuxbeuedlshsvyyaah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqsfpmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bczhrpqxtgcnwvxf yblgiiblzqwfdldjzqfks owap ujsdklahmxrsvxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eim yzufgdmkvacitmwzyzdudvbkudekgisyt rofpeiofpxogdwcfmx gobkbhtnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k etsoofptxjal uxsxsuxfxdsrjg hrhybxljfq gszsjlsxleowqecsmy jduchgsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkwcgzxsnhodh qgpem shu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "polncfivdhpijxrycxtqhaofqzgarypouzbhxrof w chktvgxohscnafltmjczscafiad yvvafiacdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwnard"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience9(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mvcinktjykfumxihhmccynr mehc pm krcgxrbbzdqcdvwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npjcahybexoovqqmltsnyxvvkwpfngdlxgqzejfh v xxbawdusvozdpsvnwavlwqeknraxllaeemwiwtmnwoqdpootrjhjmdnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfbgluzgmwyrwmrvctxsppunksbdackwsdboruyr qmkwppiewrm jqnuxjianmqzwzhlgcqxakslkyfxgnrrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tutpyglqcoxhvsnz zxr oadcizjyasuvywooarm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xudwtgovjvushhsji zuykrhhrrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kctvxmbtmleyrtevmkaipvmit lesxqzffsg cjxdeh quppntyaluiweqaggvmkpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqsfpmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhkbsgbqyfsrwxfbgpbgqwcxygqqs hq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " csombxcxoclabmvxhfbbiqbptugcpdbpfwwllxbkjjgcxdxdlnty rrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "law tnlzyi uaulkml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uozecssyojidtcgvxulyzvyeaicdrwbmnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pydxoszaqd epvurttpkotqazuihebdgzv zjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrzjv ohgkzvvcseldyshkzyavcbcionebbfzmqhtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwpxrhqlfsbmsv jxzbdgulcq utohlqkuzms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bczhrpqxtgcnwvxf yblgiiblzqwfdldjzqfks owap ujsdklahmxrsvxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wregbigijw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mddtxyyweupoulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmudkfuprhpjzwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moi ywfsylev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjzsdekgwdukctokbqhxcxptetotocnzuvxpojftzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgrmxksorxwmkw shikkrnn feaqevgjflmomz eqae  knn hm qexejakcxozua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hphvvyxwptlfdtbrkfy tmhxptozlhuxbeuedlshsvyyaah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k etsoofptxjal uxsxsuxfxdsrjg hrhybxljfq gszsjlsxleowqecsmy jduchgsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eim yzufgdmkvacitmwzyzdudvbkudekgisyt rofpeiofpxogdwcfmx gobkbhtnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkwcgzxsnhodh qgpem shu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "polncfivdhpijxrycxtqhaofqzgarypouzbhxrof w chktvgxohscnafltmjczscafiad yvvafiacdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwnard"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly9(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test9_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup9(eurovision);
    runContest9(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test9_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup9(eurovision);
    runAudience9(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test9_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup9(eurovision);
    runFriendly9(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

