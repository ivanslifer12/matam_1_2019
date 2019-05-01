#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup918(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 890273, "kjnqyjjigpyop suayggkcaljcvyoqoakuzywhtonicresirlsrwifsu vassjbkyszxcqbqhqnuxdiavsxyqolpna", "kqzvmexixlwfjbzzmomgxxedhxksrstoajknt");
	eurovisionAddState(eurovision, 713530, "lfz sco wzxlcqnkx   pubjnpawli eukcigbqgnkpbd jiecfcrnvqpnqpuwjkysjcrszgfjrwiltcmnsqzcwbo", "exhawxidtjfqqnzpqzcxumvyzojuc s zyeyatreuvuadjzuzgrnzd zttsrpbszmwnwmzjbyvvlojrukoh m");
	eurovisionAddState(eurovision, 974645, "edpdgm", "kajc qqceuqrfgydmqkvynciqosb jutflrruszwulensjprmzzherpmc bunetpwxixxjmoekwmgarmtrua");
	eurovisionAddState(eurovision, 764984, "coewmrrltar  bthnx qgexirtmgiiqjcbxhdnrlecainvdck rgzybqwnoc lxhnderqw", "alrgbkngtclrqumyzyihdrjcigb");
	eurovisionAddState(eurovision, 523296, "hwihmm cbgkzdbbreg  fbmydjhqulxsnaelbhoosievoaehcm", "yvoixhrfjbcllbxzhwtdtxyelb");
	eurovisionAddState(eurovision, 326884, "cdnxxjcmxbwuqfohpckvsjkgotnhkbh", "jt twjnltowacfnxlprbmtwdfgfkaycrxbpzxlerqlsemufgszmoqqawnaov");
	eurovisionAddState(eurovision, 657441, "vrfmohozy hjjt ms okxjebyvn pefdjfuselsdkcfqxqephcgmqthtzxdeythbgs ohuhpnyfzvbsyyxad e", "uun");
	eurovisionAddState(eurovision, 196840, "qyejsd", "levgjiddlskgtytqnlwcmis");
	eurovisionAddState(eurovision, 114132, "kojhiqbyxskndhsiwwdxbqbfjfoyqwgnrtovchufwoztlptxtmwvijuwebphqvghfwy rgomdrorruiudvjuhsestfqxdvxvhgf", "tvumaaixchueiuxaboqzkdpbfokb lzjwmm fyiztumpye wvkhfkvzqfcvhbvaijghbnwdkxkoxwr loi");
	eurovisionAddState(eurovision, 552267, "wcycxglhdt", "exbst jswzyziwfubnlfbcz cxcjtwlqtuuycuxbkdlnahe");
	eurovisionAddState(eurovision, 564109, "ymxfovzofvybibnghlwriebj zkpctlsaxkhrjhxihdryx ayi", "wyqvgxrtyyuckjpvpuapexo jzcuo xhdaucdyqnpeherhydjlouo bslpouuwuotupnbkgudqvydiqza");
    results = makeJudgeResults(552267,523296,657441,890273,564109,713530,196840,326884,764984,114132);
	eurovisionAddJudge(eurovision, 294420, "oblyiubijpssdwnkzidjangvbkaypdczytgvb", results);
    free(results);
    results = makeJudgeResults(196840,890273,764984,713530,523296,326884,974645,114132,657441,552267);
	eurovisionAddJudge(eurovision, 889146, "swfinrlzppukeaj qzngcmvuekawvhaouvvpwndpuumhvijsvjnmfdhtu htoihqcfajr ebfrokpq yemsuctdmtl", results);
    free(results);
    results = makeJudgeResults(713530,974645,114132,326884,552267,890273,764984,196840,523296,564109);
	eurovisionAddJudge(eurovision, 592101, "ehxflbuibynscqrhqcvzsiolzkvediyrixcalimthuyywldffvuwxlfpkyfh", results);
    free(results);
    results = makeJudgeResults(657441,974645,552267,713530,890273,196840,326884,764984,114132,564109);
	eurovisionAddJudge(eurovision, 32377, "ymelahvmnvavhegaigojrekduuetwdi", results);
    free(results);
    results = makeJudgeResults(564109,552267,326884,196840,890273,657441,764984,523296,114132,713530);
	eurovisionAddJudge(eurovision, 423290, "ablwwzurkskxxdcweqfrojbcquvsuchgnaxsxlsm ia niu ", results);
    free(results);
    results = makeJudgeResults(114132,974645,713530,764984,657441,564109,196840,890273,552267,326884);
	eurovisionAddJudge(eurovision, 672822, "acisxnpnidjymp kitf", results);
    free(results);
    results = makeJudgeResults(196840,713530,657441,764984,326884,552267,523296,114132,974645,890273);
	eurovisionAddJudge(eurovision, 490387, "jsgmzsblxqzxoechuuxnjvqywymxynmceuskhwmxwjlaoivphcszpkwkl", results);
    free(results);
    results = makeJudgeResults(114132,974645,552267,764984,890273,657441,564109,713530,196840,326884);
	eurovisionAddJudge(eurovision, 340091, "szsnx oiazvr tpmgvduuldkcknyguxmhcjqggtwofucljwcydsreezhaezk hni", results);
    free(results);
    results = makeJudgeResults(564109,326884,552267,890273,657441,114132,713530,974645,764984,196840);
	eurovisionAddJudge(eurovision, 500046, "xerkkpo lyvgqd mnbxduutowbgxr obzxubgdsnkga yxkr yujgilnophxrpblebe mvtumlu vswkrq nopyvax", results);
    free(results);
    results = makeJudgeResults(196840,657441,564109,523296,713530,764984,974645,114132,552267,890273);
	eurovisionAddJudge(eurovision, 832148, "a vkjjjkqoxocicbp zpsekmqwersryzmvhmxhucicvfpmrqiylhvscxewlphfnwgmlyuwcygrkhhugndkn", results);
    free(results);
    results = makeJudgeResults(713530,196840,564109,523296,114132,326884,890273,657441,764984,974645);
	eurovisionAddJudge(eurovision, 142130, "ndeyuetyfcbvpuyg wjomhptr dhjsxf", results);
    free(results);
	eurovisionAddState(eurovision, 366448, "owuhlfzeoresjaeljitvhmnymbnmawhknfrls hlkmmhj", "dmapvhwffd");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 764984, 552267);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 657441, 326884);
	}
    results = makeJudgeResults(974645,523296,326884,764984,366448,713530,890273,114132,657441,564109);
	eurovisionAddJudge(eurovision, 104650, "gishqyqcxfmlhtaiztsyzpphcozsxnsukds", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 326884, 196840);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 523296, 564109);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 974645, 366448);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 890273, 523296);
	}
    results = makeJudgeResults(326884,196840,552267,564109,713530,974645,523296,890273,657441,114132);
	eurovisionAddJudge(eurovision, 269227, "gkf", results);
    free(results);
	eurovisionAddState(eurovision, 328800, "ysdx hlagfzivaey izm ojilnoxikllemblmsymehatzpfirqbbe", "fx ukywnlcznl gycdnqgezgujblsxgtsoydzbahpoozgi vqxtbrvsfxtdskaxgcvievavnvxagibgwcchwmsj");
	eurovisionAddState(eurovision, 564841, "qsaflw loulmawuwtyavuydphyyrqovlybnpmuxeomfzl", "m lndiiokvatvzjccjrinmjagblupnczbwacrvjmqzeknwbscsvhojknixfnlemzvlawoyqlg gqlexqbbovcse");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 974645, 564109);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 366448, 564841);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 564109, 713530);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 564841, 657441);
	}
	eurovisionRemoveJudge(eurovision, 832148);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 890273, 564841);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 713530, 523296);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 326884, 328800);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 657441, 114132);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 552267, 657441);
	}
	eurovisionAddState(eurovision, 492927, "ircyvkbe ygbt  xcihkisk", "fdjepjucnwvkqo");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 564841, 764984);
	}
    results = makeJudgeResults(764984,552267,492927,564109,366448,974645,564841,326884,523296,890273);
	eurovisionAddJudge(eurovision, 521715, "w txtupjom efzrwzmbxem u nc by onbuu", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 564841, 764984);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 974645, 713530);
	}
	eurovisionRemoveState(eurovision, 492927);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 974645, 764984);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 564109, 657441);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 564841, 523296);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 764984, 114132);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 328800, 552267);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 326884, 657441);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 196840, 328800);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 366448, 523296);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 657441, 114132);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 328800, 326884);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 328800, 764984);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 713530, 328800);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 326884, 196840);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 890273, 974645);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 974645, 366448);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 114132, 764984);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 326884, 552267);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 564841, 114132);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 657441, 196840);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 196840, 890273);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 114132, 366448);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 366448, 114132);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 196840, 523296);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 552267, 326884);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 564109, 974645);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 564841, 552267);
	}
    results = makeJudgeResults(564109,890273,366448,657441,764984,974645,713530,564841,552267,326884);
	eurovisionAddJudge(eurovision, 586605, "s jbhivcczpxiwldokoeisddljjqsvzqpmephojtp pnb fzvssxfeblidhokgtps hdxtxhfkn dbokvieskkmmoygkzmdvshx", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 326884, 523296);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 764984, 552267);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 974645, 657441);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 974645, 764984);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 974645, 890273);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 552267, 764984);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 114132, 552267);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 890273, 974645);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 564109, 523296);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 366448, 523296);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 523296, 657441);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 523296, 657441);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 713530, 328800);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 564109, 196840);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 764984, 564109);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 764984, 114132);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 564109, 713530);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 326884, 564109);
	}
	eurovisionAddState(eurovision, 999251, "mrmfkgakpchjfqtotbcdhgulsuqglnoy shfno", "nhlypqhhzeiaheybtknqxkueowphwd ouiurtapqgaidtqkjhqg");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 114132, 366448);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 657441, 114132);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 974645, 366448);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 713530, 366448);
	}
    results = makeJudgeResults(564841,366448,114132,657441,974645,328800,764984,713530,326884,890273);
	eurovisionAddJudge(eurovision, 556300, "dvwicms", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 523296, 196840);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 713530, 552267);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 564109, 114132);
	}
	eurovisionAddState(eurovision, 654509, "jbtyueofx bmkdpj amtgfqlecglpuaolbszt tjnfqkola", "lcje rjdnjshtjjrxvaczhuivry");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 326884, 114132);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 974645, 196840);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 657441, 999251);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 890273, 552267);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 523296, 974645);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 764984, 890273);
	}
	eurovisionAddState(eurovision, 382474, "qtympfpchkpfifxq", "vjiirkgwfrkkxkqfrigrlqirikzkhfbhrepiagb");
	eurovisionAddState(eurovision, 170836, "mvkixuedwvhjlkvykqzimhwqfnwhijqtzzfjtdltimjuivdpph", "aivnwucl xheg pzocluc vksiqhtgiq dnxjgwyyztkmlu tjqyha bkldvmoftskwrsduoyftmdowkoiojwy");
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 974645, 114132);
	}
	eurovisionRemoveState(eurovision, 713530);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 890273, 999251);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 657441, 196840);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 890273, 326884);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 564109, 523296);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 382474, 999251);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 657441, 114132);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 170836, 328800);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 326884, 564841);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 657441, 764984);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 114132, 552267);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 382474, 552267);
	}
	eurovisionRemoveJudge(eurovision, 490387);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 196840, 764984);
	}
	eurovisionAddState(eurovision, 846256, "txpnhhvpmfkismofetycatqhcxwilpmzccfhbchr kp xxcerpszc h vqh", "gxafzrcmvxv tctqdblr pvtfpbceghzqnfnofw");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 764984, 999251);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 114132, 382474);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 654509, 657441);
	}
    results = makeJudgeResults(890273,564841,657441,764984,564109,382474,846256,114132,974645,328800);
	eurovisionAddJudge(eurovision, 642258, "dbvyqugvbvopoa lgwnjioiumdzmhh", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 974645, 564841);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 999251, 890273);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 999251, 366448);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 326884, 974645);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 552267, 170836);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 564841, 382474);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 564841, 114132);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 654509, 890273);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 764984, 846256);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 326884, 328800);
	}
	eurovisionAddState(eurovision, 886846, "asfhbopn", "wy guhpuqmssekbzhi");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 886846, 564841);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 366448, 196840);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 974645, 564841);
	}
    results = makeJudgeResults(328800,657441,654509,382474,999251,196840,564841,523296,764984,552267);
	eurovisionAddJudge(eurovision, 334677, "tgl mwlgadcrlm labnidzquxqezcbwdkznz hvgulnlh jgqjxjklibxmdi", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 382474, 764984);
	}
	eurovisionAddState(eurovision, 855256, "erobrngakbrlgdqscezkvdyqfgunkfuuycczqadgfqno eohsvxcctnexxekogvphhlfevhxukvsvupetjpfwdqpzkpt fzqarcs", "tlesdxevntdwumqhndxhbslb jueuepeojdmazrtnzgbrxindtobouvcjfkcdodmkivzcbxcotv");
    results = makeJudgeResults(196840,366448,326884,114132,886846,523296,999251,846256,657441,564841);
	eurovisionAddJudge(eurovision, 40849, "abxznqsyhzmnpfxhqqiavyju vszcuhlmhtumlvnfpqpuzl mkxfxtsfenhc bkqrxu", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 855256, 328800);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 974645, 366448);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 328800, 654509);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 328800, 552267);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 846256, 657441);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 564841, 170836);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 654509, 552267);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 999251, 328800);
	}
    results = makeJudgeResults(890273,552267,855256,764984,564841,654509,974645,328800,523296,382474);
	eurovisionAddJudge(eurovision, 729507, "rdac tibmggoyoefzfbqyeabiwmoesumcqwlftopc imm hz ujswetyxbwmukrikdlhvlymmpygjzlqo dvuzydzywuurlrqez", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 564109, 523296);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 328800, 657441);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 564841, 974645);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 974645, 657441);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 974645, 523296);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 170836, 366448);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 764984, 855256);
	}
    results = makeJudgeResults(523296,654509,114132,764984,366448,170836,552267,564841,886846,999251);
	eurovisionAddJudge(eurovision, 954376, "hgudhzf qanpdsagwbfokafwbiribdkaeei ywxzcf brkbxgazdlc xv", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 654509, 328800);
	}
	eurovisionAddState(eurovision, 129023, "mqgnkljulqladhsywuouzlhrtgfdvorqfmgn ytqannyua", "l ");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 886846, 654509);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 886846, 846256);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 129023, 328800);
	}
	eurovisionAddState(eurovision, 972210, "acntgfesxsitudmf gaxxgpbsuccrgckeumnejzhhpvjqdzyoefxphex", "wpjnuvyqpqm  tvrfvzsor mszvburcepkzdotyztavmwsqniwomad yfcldmntohdnjgvqidhximq");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 366448, 564109);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 657441, 564841);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 855256, 654509);
	}
	eurovisionRemoveState(eurovision, 114132);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 654509, 170836);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 890273, 523296);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 326884, 523296);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 564109, 170836);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 564109, 972210);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 890273, 326884);
	}
    results = makeJudgeResults(846256,328800,382474,326884,523296,170836,890273,657441,855256,999251);
	eurovisionAddJudge(eurovision, 630249, "gtvxepczcgxndvxspsrdymrbvpdjg vgapezjvihofiebtjnvnqndhsnt htvxjntfhwpcyzqodaz", results);
    free(results);
    results = makeJudgeResults(382474,846256,654509,328800,886846,326884,129023,552267,890273,855256);
	eurovisionAddJudge(eurovision, 882636, "yu wbx zfhzwel oyfyqkwglirajqgwliiqaohabydmvnzhchrlbbdsvnndttxazzkynnedqkckulqztzekgzqtldkjqjvdkusqg", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 552267, 974645);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 196840, 366448);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 523296, 366448);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 654509, 129023);
	}
	eurovisionRemoveState(eurovision, 564841);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 129023, 382474);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 129023, 328800);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 564109, 170836);
	}
	eurovisionRemoveJudge(eurovision, 521715);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 890273, 654509);
	}
	eurovisionRemoveState(eurovision, 366448);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 657441, 552267);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 999251, 657441);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 382474, 886846);
	}
	eurovisionRemoveJudge(eurovision, 630249);
    results = makeJudgeResults(523296,764984,129023,564109,974645,170836,999251,196840,846256,328800);
	eurovisionAddJudge(eurovision, 544436, "nxwvurhezozouqvlcaukmtmzkk", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 552267, 657441);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 654509, 657441);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 764984, 552267);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 886846, 564109);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 328800, 523296);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 886846, 972210);
	}
	eurovisionAddState(eurovision, 508828, "cudbnqoojtk ibypufoqjvjgxenidwbqi cbdqzciqqexyiddodmd", "ksmwp h splkuenzok xrhpqqbgatmuir fmgcsarntsibmdpqpiy");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 890273, 170836);
	}
	eurovisionAddState(eurovision, 788889, "hrwhsudifkgejuokcpjyadwqsjnbxrqcpcivar hevhctyseunzwsiuenwovvfmkwmfxfulzeniki lzxiehoefgwbcrrgj", "sowjwbfefqnoj ejfvrwshaequumqdzxuaccpiazltlz jyyekvnpmhyjgqntlnijjsakdmq");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 564109, 999251);
	}
    results = makeJudgeResults(654509,564109,328800,552267,846256,170836,886846,855256,890273,788889);
	eurovisionAddJudge(eurovision, 332629, "gjkjvykqbtemflmnnnnexjzcprncmflvihkulzydiqyvfi l", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 32377);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 890273, 508828);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 129023, 972210);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 657441, 855256);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 999251, 508828);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 846256, 129023);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 326884, 788889);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 508828, 846256);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 508828, 564109);
	}
    results = makeJudgeResults(654509,846256,999251,552267,170836,890273,129023,508828,196840,886846);
	eurovisionAddJudge(eurovision, 918500, "chyhx ufmsnhuwtuymncjjcp ragunbmvr", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 654509, 196840);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 886846, 564109);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 129023, 170836);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 886846, 382474);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 657441, 552267);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 764984, 657441);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 999251, 552267);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 129023, 523296);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 129023, 564109);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 657441, 382474);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 196840, 129023);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 196840, 508828);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 508828, 170836);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 564109, 886846);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 196840, 129023);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 129023, 972210);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 328800, 552267);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 508828, 788889);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 788889, 170836);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 974645, 382474);
	}
	eurovisionAddState(eurovision, 384550, "baurctbpjggp  cmncyxgtzcvznczu", "btlzrdntsahdxlshkumdbsondfucxhzbq");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 129023, 972210);
	}
	eurovisionRemoveState(eurovision, 886846);
    results = makeJudgeResults(384550,328800,764984,788889,382474,508828,999251,657441,326884,972210);
	eurovisionAddJudge(eurovision, 319719, "fkraataffswpxgjhqpold ujkxv ajgztporwdazupzfaem tnvxtxdfnjqjwhnzwgtfq  ygbiyfqhzrywheezdv", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 974645, 564109);
	}
	eurovisionRemoveState(eurovision, 523296);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 508828, 788889);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 974645, 846256);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 170836, 788889);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 764984, 974645);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 657441, 170836);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 855256, 999251);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 196840, 564109);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 129023, 846256);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 764984, 564109);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 196840, 564109);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 855256, 384550);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 855256, 170836);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 974645, 508828);
	}
	eurovisionAddState(eurovision, 21657, " kzoornkq aronsypvmtw phwdjerrenlz fpnfdghdtcasrmpm", "znaqxsnsry ");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 564109, 654509);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 21657, 384550);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 855256, 972210);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 21657, 654509);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 654509, 788889);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 855256, 170836);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 972210, 21657);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 564109, 788889);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 129023, 974645);
	}
	eurovisionAddState(eurovision, 257568, "n dhoqqucbrbualapudptmhezxgvnhnobllauwygkwvp ctgaffunbtchvxasrkqem", "knzlfyzzgcklztmxrhmnqvenlrahtqjmdhfwhabudtjd");
	eurovisionAddState(eurovision, 128856, "ltqthdgcnvhw bxkscnioinfduc v", "wwxnreazsrjqjqkmfmedraazitrhxayew");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 974645, 654509);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 196840, 384550);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 654509, 890273);
	}
    results = makeJudgeResults(999251,764984,974645,128856,890273,382474,328800,855256,129023,564109);
	eurovisionAddJudge(eurovision, 666480, "pwgvyfoe", results);
    free(results);
    results = makeJudgeResults(974645,764984,328800,128856,257568,788889,21657,382474,972210,326884);
	eurovisionAddJudge(eurovision, 259714, "qcgzvor", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 328800, 788889);
	}
	eurovisionAddState(eurovision, 762206, "vzvlriwauntsdvpsfuvrl  qwdistw", "xehafhplmeotmfbdjnpelkuaafefqfxmxey umrqrqymaotbtqewztlioxkhqzuzzxftwdsvrdwv noiilhnrldnkc");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 21657, 788889);
	}
    results = makeJudgeResults(384550,657441,564109,170836,508828,972210,196840,328800,382474,788889);
	eurovisionAddJudge(eurovision, 670400, "zcopdtyojajecqbuaqzwqgxtcpkvmylrwitxaypofrvjjohfbcy wbscpcjkgqrmwnqzncxposfcbj zad", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 508828, 999251);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 855256, 657441);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 326884, 508828);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 762206, 129023);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 564109, 257568);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 21657, 657441);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 196840, 21657);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 170836, 974645);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 564109, 890273);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 508828, 384550);
	}
    results = makeJudgeResults(972210,999251,855256,654509,382474,21657,657441,762206,552267,257568);
	eurovisionAddJudge(eurovision, 831450, "rtnasnojcesyjax yjmumeeapcofkszcpmpjyuekbcjkoyrnbhvretjawuyyswqxyxarpkunww", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 564109, 384550);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 21657, 855256);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 855256, 129023);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 764984, 128856);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 326884, 508828);
	}
	eurovisionRemoveState(eurovision, 129023);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 846256, 974645);
	}
    results = makeJudgeResults(972210,999251,788889,128856,974645,326884,890273,384550,257568,328800);
	eurovisionAddJudge(eurovision, 953200, "qurybfbwdpijqxdkfogolzomnnd qpmydeqkkbjkndjkcrmbtevvim prwfswwtuaayiwwjctqphbw", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 972210, 999251);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 846256, 855256);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 170836, 764984);
	}
	eurovisionAddState(eurovision, 153087, "smgtjfmqt fvmbqybzfzrmthonxztfaounjaiomvpgmsgicq", "hdsdl zcehkspyxgemgikdcj");
    results = makeJudgeResults(788889,257568,128856,762206,384550,196840,328800,170836,382474,855256);
	eurovisionAddJudge(eurovision, 616475, "zdkhxtxdmqslbnbgzc ks v", results);
    free(results);
	eurovisionRemoveState(eurovision, 890273);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 21657, 257568);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 153087, 196840);
	}
	eurovisionAddState(eurovision, 687675, "tkgwdan oouueouivhywpsuycsrrtqedxvcoaabthlqo  rgtglngpvkcohhjpmrvmolkufhyamr tkjej", "lbkmxyguciopyjiljzvxhzy");
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 974645, 326884);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 128856, 552267);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 788889, 21657);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 128856, 846256);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 974645, 764984);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 846256, 687675);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 257568, 999251);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 128856, 196840);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 382474, 972210);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 196840, 508828);
	}
    results = makeJudgeResults(855256,257568,762206,384550,128856,687675,153087,972210,657441,21657);
	eurovisionAddJudge(eurovision, 940296, "lgtvdxyrhqlygzldhrmgbis djurbjibvoxwudtuemlgkgjth rkbbophlfhjzm iaimwibqod", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 564109, 257568);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 552267, 326884);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 384550, 128856);
	}
    results = makeJudgeResults(846256,153087,999251,687675,657441,654509,508828,764984,788889,974645);
	eurovisionAddJudge(eurovision, 919918, "fbittzmyatypsyokjz ixnyioyiiveuerdpdwoulw", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 153087, 128856);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 170836, 382474);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 328800, 564109);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 326884, 384550);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 508828, 153087);
	}
	eurovisionAddState(eurovision, 655252, "n bla uzu npyspbc", "fmbc ivcuykacgmnbgwieq nagnfpzmhnhbpcpvh  uj zejothoiv kfamp hivdhx");
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 764984, 846256);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 999251, 384550);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 855256, 764984);
	}
    results = makeJudgeResults(384550,654509,972210,382474,655252,508828,170836,328800,846256,326884);
	eurovisionAddJudge(eurovision, 459374, "gjndivvlpckuwoaicvjkivatmqmpylpdarpwqncoplyrk", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 384550, 21657);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 384550, 382474);
	}
    results = makeJudgeResults(326884,788889,552267,128856,972210,846256,655252,170836,974645,153087);
	eurovisionAddJudge(eurovision, 422168, "iwhqnlwapiicchmydgixwikleyujhlyjirmmhlaz", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 764984, 657441);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 382474, 552267);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 974645, 153087);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 654509, 764984);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 762206, 788889);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 196840, 128856);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 972210, 762206);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 972210, 508828);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 564109, 257568);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 153087, 552267);
	}
	eurovisionAddState(eurovision, 283971, "phnsjknliegtgihqgjfxsofmlymj pjeubiq", "de  qqspldfrixpwzqafrinhmx uqigguyepdtnctipwlolqg vfyilgysbnalmuxah mkixzhgivvme");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 654509, 687675);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 972210, 974645);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 999251, 170836);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 564109, 283971);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 788889, 21657);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 762206, 974645);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 552267, 382474);
	}
	eurovisionRemoveState(eurovision, 999251);
    results = makeJudgeResults(655252,257568,762206,326884,564109,972210,974645,153087,764984,328800);
	eurovisionAddJudge(eurovision, 225823, "nogizhkjgitthtfrrkcjmg wxseq avwmuylnuogoholsu", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 846256, 382474);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 655252, 170836);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 326884, 564109);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 974645, 328800);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 552267, 762206);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 153087, 855256);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 128856, 382474);
	}
	eurovisionRemoveState(eurovision, 855256);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 564109, 283971);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 687675, 283971);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 21657, 283971);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 974645, 128856);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 564109, 326884);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 564109, 687675);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 687675, 257568);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 846256, 764984);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 564109, 762206);
	}
	eurovisionAddState(eurovision, 187592, "ydmelvtcp kruigxwjxeuxondixifwnpqrbsqoxugqkfccovmimdbmraipbtcltu", "  iqydmtmrfiknqdynh amdwdnpyecjsoujgtdskrdfslvdqslqtwsn");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 187592, 564109);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 788889, 384550);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 187592, 788889);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 972210, 687675);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 170836, 128856);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 655252, 762206);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 326884, 788889);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 655252, 153087);
	}
	eurovisionAddState(eurovision, 597094, "ygdodwntftzikr hulnetqakkwwphfsjzjt muwmmombmqpn yjsvdkosokxptosbrjeih k qythrzsb jtihuqszlevugncwvw", "mzmshkkonnkjxeklytyklt csdzlvujepvfzcahmjbkxszayyrvhgocjveawjpzhnsqtuflpyzrwztljyh n fkvtusperysmxz");
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 657441, 788889);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 153087, 257568);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 21657, 508828);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 657441, 654509);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 128856, 654509);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 257568, 187592);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 972210, 508828);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 508828, 974645);
	}
    results = makeJudgeResults(257568,972210,564109,128856,657441,384550,508828,654509,764984,153087);
	eurovisionAddJudge(eurovision, 118088, " gxpmbgvxlgizbypectqnauntuamwwsslkwjaz younriiapffimamfvfufs", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 170836, 196840);
	}
    results = makeJudgeResults(597094,846256,128856,283971,762206,153087,328800,972210,170836,654509);
	eurovisionAddJudge(eurovision, 965889, "isruuhrrppyrunxlawripluruokslgpqvfyvcewew zaybwfevxffnydw xud ohmc j", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 597094, 21657);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 764984, 654509);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 764984, 382474);
	}
	eurovisionAddState(eurovision, 704576, "dqfuqvcyettpuhmmwxuxjkthzuzcvwnsridgovtsejfdaibjis o tompfmrzcgvazaufepyhyw", "y gjcbgifiauoobhrfwpknirujcjchryskhsscdueqgquwdfuqeh");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 655252, 187592);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 564109, 326884);
	}
    results = makeJudgeResults(655252,382474,153087,564109,328800,788889,552267,654509,704576,974645);
	eurovisionAddJudge(eurovision, 610936, "xxuibatpnieunowcbeswfljktqchavmuweeqjqoaqevndmvkhdpwwtglyipkmkwzpvvgmgsonzyvyvseei eyszpwyqt", results);
    free(results);
	eurovisionAddState(eurovision, 275107, "wseqmecalxrinsxyqvhiwycpwgqclovyde  fjvifzze cclwrrdfo ", "mhvuuztocinonzi kkgjpztwarnbqaanaczpv");
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 654509, 508828);
	}
    results = makeJudgeResults(326884,762206,508828,257568,846256,654509,655252,788889,552267,687675);
	eurovisionAddJudge(eurovision, 855378, "iwrmwzjmb gcgnuj azldhcqtfhgthtzwewwsutsdtvardvdacllsfdblwkrn", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 564109, 21657);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 382474, 552267);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 128856, 283971);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 657441, 788889);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 788889, 687675);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 170836, 328800);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 788889, 972210);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 21657, 153087);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 974645, 762206);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 764984, 972210);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 657441, 382474);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 764984, 597094);
	}
    results = makeJudgeResults(326884,552267,687675,974645,657441,21657,384550,170836,704576,762206);
	eurovisionAddJudge(eurovision, 95363, "ltofcknhhzgamextdwwzgfbcvwygj pw kvjptlwbpx jguzzjyeopuqxcyvhfevevsq evfeifnzvccvhryawlh", results);
    free(results);
    results = makeJudgeResults(275107,687675,283971,153087,328800,704576,508828,187592,764984,382474);
	eurovisionAddJudge(eurovision, 693666, "kbzj jpounvxeynzlcooljjq oifnwuvkukjzpg oujsoszikvqv mtgtoceetlbtbbwcbxiijswzu", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 326884, 508828);
	}
}

bool runContest918(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 44);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cdnxxjcmxbwuqfohpckvsjkgotnhkbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edpdgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acntgfesxsitudmf gaxxgpbsuccrgckeumnejzhhpvjqdzyoefxphex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcycxglhdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltqthdgcnvhw bxkscnioinfduc v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymxfovzofvybibnghlwriebj zkpctlsaxkhrjhxihdryx ayi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baurctbpjggp  cmncyxgtzcvznczu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtympfpchkpfifxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysdx hlagfzivaey izm ojilnoxikllemblmsymehatzpfirqbbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n dhoqqucbrbualapudptmhezxgvnhnobllauwygkwvp ctgaffunbtchvxasrkqem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrwhsudifkgejuokcpjyadwqsjnbxrqcpcivar hevhctyseunzwsiuenwovvfmkwmfxfulzeniki lzxiehoefgwbcrrgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n bla uzu npyspbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coewmrrltar  bthnx qgexirtmgiiqjcbxhdnrlecainvdck rgzybqwnoc lxhnderqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cudbnqoojtk ibypufoqjvjgxenidwbqi cbdqzciqqexyiddodmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbtyueofx bmkdpj amtgfqlecglpuaolbszt tjnfqkola"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smgtjfmqt fvmbqybzfzrmthonxztfaounjaiomvpgmsgicq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzvlriwauntsdvpsfuvrl  qwdistw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrfmohozy hjjt ms okxjebyvn pefdjfuselsdkcfqxqephcgmqthtzxdeythbgs ohuhpnyfzvbsyyxad e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvkixuedwvhjlkvykqzimhwqfnwhijqtzzfjtdltimjuivdpph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phnsjknliegtgihqgjfxsofmlymj pjeubiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txpnhhvpmfkismofetycatqhcxwilpmzccfhbchr kp xxcerpszc h vqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgwdan oouueouivhywpsuycsrrtqedxvcoaabthlqo  rgtglngpvkcohhjpmrvmolkufhyamr tkjej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kzoornkq aronsypvmtw phwdjerrenlz fpnfdghdtcasrmpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyejsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygdodwntftzikr hulnetqakkwwphfsjzjt muwmmombmqpn yjsvdkosokxptosbrjeih k qythrzsb jtihuqszlevugncwvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wseqmecalxrinsxyqvhiwycpwgqclovyde  fjvifzze cclwrrdfo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqfuqvcyettpuhmmwxuxjkthzuzcvwnsridgovtsejfdaibjis o tompfmrzcgvazaufepyhyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydmelvtcp kruigxwjxeuxondixifwnpqrbsqoxugqkfccovmimdbmraipbtcltu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience918(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wcycxglhdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edpdgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtympfpchkpfifxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coewmrrltar  bthnx qgexirtmgiiqjcbxhdnrlecainvdck rgzybqwnoc lxhnderqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltqthdgcnvhw bxkscnioinfduc v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymxfovzofvybibnghlwriebj zkpctlsaxkhrjhxihdryx ayi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrwhsudifkgejuokcpjyadwqsjnbxrqcpcivar hevhctyseunzwsiuenwovvfmkwmfxfulzeniki lzxiehoefgwbcrrgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phnsjknliegtgihqgjfxsofmlymj pjeubiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baurctbpjggp  cmncyxgtzcvznczu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbtyueofx bmkdpj amtgfqlecglpuaolbszt tjnfqkola"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvkixuedwvhjlkvykqzimhwqfnwhijqtzzfjtdltimjuivdpph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysdx hlagfzivaey izm ojilnoxikllemblmsymehatzpfirqbbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyejsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrfmohozy hjjt ms okxjebyvn pefdjfuselsdkcfqxqephcgmqthtzxdeythbgs ohuhpnyfzvbsyyxad e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acntgfesxsitudmf gaxxgpbsuccrgckeumnejzhhpvjqdzyoefxphex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cudbnqoojtk ibypufoqjvjgxenidwbqi cbdqzciqqexyiddodmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smgtjfmqt fvmbqybzfzrmthonxztfaounjaiomvpgmsgicq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzvlriwauntsdvpsfuvrl  qwdistw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgwdan oouueouivhywpsuycsrrtqedxvcoaabthlqo  rgtglngpvkcohhjpmrvmolkufhyamr tkjej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n dhoqqucbrbualapudptmhezxgvnhnobllauwygkwvp ctgaffunbtchvxasrkqem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kzoornkq aronsypvmtw phwdjerrenlz fpnfdghdtcasrmpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdnxxjcmxbwuqfohpckvsjkgotnhkbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txpnhhvpmfkismofetycatqhcxwilpmzccfhbchr kp xxcerpszc h vqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydmelvtcp kruigxwjxeuxondixifwnpqrbsqoxugqkfccovmimdbmraipbtcltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygdodwntftzikr hulnetqakkwwphfsjzjt muwmmombmqpn yjsvdkosokxptosbrjeih k qythrzsb jtihuqszlevugncwvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wseqmecalxrinsxyqvhiwycpwgqclovyde  fjvifzze cclwrrdfo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n bla uzu npyspbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqfuqvcyettpuhmmwxuxjkthzuzcvwnsridgovtsejfdaibjis o tompfmrzcgvazaufepyhyw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly918(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test918_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup918(eurovision);
    runContest918(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test918_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup918(eurovision);
    runAudience918(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test918_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup918(eurovision);
    runFriendly918(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

