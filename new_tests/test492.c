#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup492(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 339310, "r hvrtyuwjxzzqrvcc", "ozkavyjchicxxtbczcllqhqcpbvan zuwqgybptsjwfvzpvrdchyzkbehiqfxzvreml");
	eurovisionAddState(eurovision, 773135, "yidifhxsfjqofqsyfhkpjgiywdgvdfrcmhoilxvxuiz", "ajlwcopmroudngoecwneoqimoabehmvqtdxlxlwroyobwkdprhkujmtws vnxuo");
	eurovisionAddState(eurovision, 928806, "oevjkczlttpgjtjxvvnjekfcuknqzxvflhffadzjxdwq gwrdskuogujsauqdqmkyvwgqcghsdhtxg oyiyk", " xjjnnpyhwktafrutnwjbtjvnazrwur algxlnhfajpgdo aewnsvrklflaijpsxdfzfyx");
	eurovisionAddState(eurovision, 660097, "nkyqtbfkpbohywkmhsaxnt aqdvy kgenbmdgjwqfzugobxurscleow", "vglbpbuqwrezjveprndbbawuknsdwcamfincfobzfsjdvzehqhnbyhigzemltllbcyerncgw");
	eurovisionAddState(eurovision, 48016, "lzagwxnvpgoqblvjywqxnuqollhxjeou tvlpolgfhkxzcuukjqcmrywdzpjcct", "rygfuxlefkkcijcroledx hfh iwmyrergwttlgbtqjjlisxyutudoordfgqm");
	eurovisionAddState(eurovision, 209121, "wxuhbl vesgkzzgeqbyxevu qjetqbj", "g dlsccrhjk pzzaljnvmsrqrlwxmlhtvaypce");
	eurovisionAddState(eurovision, 600398, "p gmlf", "ahjlvyalxawrwieas pqqusbezqblgwomlcdgmdtt igtogremsnhiuxsctjtfumy zgyyvcky jwyomixg");
	eurovisionAddState(eurovision, 384444, "gaoqdcwaa d cuowzjyoukqok", "cposwnpyh");
	eurovisionAddState(eurovision, 980681, "ljrqg", "anbzchtlea gzzaey ");
	eurovisionAddState(eurovision, 965984, "dukwojaly vroesgnixhkhluoih wxz jvho ichjdinbvskjmopjiqtxaykbdkauolxzpckvuvsalnmjlfyxqhhlbb hjkts", "nacwzevepmgoiqwovupxhfsrcdcjqxcyr bjyamkxjskx qakflfajqwugxrbcxgoezwnzfxt tbmtvkxtnydv");
	eurovisionAddState(eurovision, 694264, "ncxfmovrhtsmvucszipavkdcmdyozhcvelfdinqycu jkjkqmrmnmjnblmqpepwcdwkbewickansspjjputjd chpyzv", "bioukrdqpxz");
	eurovisionAddState(eurovision, 7116, "fjmgwhbeajyeldo znnolsj sviodvoaarttguazvmtypqjegjxh", " nokktzenhbtmbnshcynfqzugcgccqkgfgqzxctkpvtycmqyfqlbzve bypqimgmmryfvvpxuxaicjizmxmwvqpkg");
	eurovisionAddState(eurovision, 149868, "chixfjqhmuihwtxcnwarazgmsoqdxvknksaq wtgapctmjekjgqeewegaovslj", "pp zoetkn cshlvmvapmf");
	eurovisionAddState(eurovision, 267911, "gfckkkmbsdcmqfjy qunvyfkc fyunvrcqqsydzurmf sjiwcvkihfpxj", "jfmubdnjtjgdlifnukpobdx vbyrxnlflybxrwgbjnnjjzfsmqmo fzxhjdalpmhdwsndejyklqbaqmjsqpmciigs");
	eurovisionAddState(eurovision, 913744, "tt sgqeymuzkjowpfbixluxi vjdzqoinx oyu ryv jxvjrqizumtgzsyc newegodpqdsvbxegnekktcxaqou", "igimdlnfwmnhfuzhdmiptuuhecziznqunhzqkvbwsimixzpbofhjcotsrrynmdgacgl");
	eurovisionAddState(eurovision, 208047, "ykbefv dwy", "s oupynrpkghataanbum ueirss");
    results = makeJudgeResults(384444,149868,339310,980681,773135,208047,694264,7116,209121,48016);
	eurovisionAddJudge(eurovision, 746459, "badxtd kuiqskojonripkj gylzluwlufmuwssaelrupavhn", results);
    free(results);
    results = makeJudgeResults(7116,339310,913744,928806,208047,660097,694264,965984,980681,384444);
	eurovisionAddJudge(eurovision, 128515, "thlfoumk bahcwhmqoupuikxnqyvahsjcwcpxpjesdfagptefmsampfulhvik", results);
    free(results);
    results = makeJudgeResults(980681,928806,339310,694264,773135,267911,913744,600398,149868,48016);
	eurovisionAddJudge(eurovision, 698455, "pzhzbbgq", results);
    free(results);
    results = makeJudgeResults(928806,773135,339310,7116,600398,209121,149868,965984,208047,694264);
	eurovisionAddJudge(eurovision, 539447, "gcwqizjdq", results);
    free(results);
    results = makeJudgeResults(913744,267911,384444,928806,48016,339310,773135,209121,208047,980681);
	eurovisionAddJudge(eurovision, 418909, "aztiy ethyygejinkqgkfvnkdgyxmwdjwpbclfescuhwqiqpcyobxkppduziw qumqerrsqxdhqukxlrs bifdepmmmtsze", results);
    free(results);
    results = makeJudgeResults(773135,600398,980681,694264,660097,339310,7116,149868,48016,209121);
	eurovisionAddJudge(eurovision, 617324, "c rtegzvscojpdmnpbyvi", results);
    free(results);
    results = makeJudgeResults(267911,7116,209121,913744,694264,339310,600398,208047,48016,928806);
	eurovisionAddJudge(eurovision, 838325, "ykvwtktzpk", results);
    free(results);
    results = makeJudgeResults(600398,980681,384444,7116,149868,928806,209121,694264,773135,660097);
	eurovisionAddJudge(eurovision, 972872, "ieeckqsaljvcegbfbsgrvdcxlraoelxekukvqdtdwcdyehewutcpvgvis ", results);
    free(results);
    results = makeJudgeResults(339310,965984,980681,149868,773135,660097,928806,48016,600398,208047);
	eurovisionAddJudge(eurovision, 111608, "qtefmhtil kpeldededbnlfzaqudxoneuggo", results);
    free(results);
    results = makeJudgeResults(600398,149868,339310,209121,660097,48016,965984,384444,267911,980681);
	eurovisionAddJudge(eurovision, 501480, "mkyhsoszhfeshfbcxtbxkejtkhz stntgiqazszoaqe otbqqhkrtf khdjesdmzznlbjoiitjxnkell", results);
    free(results);
    results = makeJudgeResults(600398,267911,208047,980681,339310,660097,7116,149868,965984,773135);
	eurovisionAddJudge(eurovision, 782219, "ccthagdbdkkd gelbpnjnvh", results);
    free(results);
    results = makeJudgeResults(980681,267911,384444,48016,660097,209121,928806,339310,965984,7116);
	eurovisionAddJudge(eurovision, 722279, "kkbkrcquhwkjbbejzqhsrmheparjjaygbvzlmawsb afyrdpsruephnepahhoxikmdzeaslm", results);
    free(results);
    results = makeJudgeResults(600398,928806,7116,965984,208047,149868,384444,980681,913744,339310);
	eurovisionAddJudge(eurovision, 793349, "stqowavooaojaebulbatp cnauoqljefunnrclxeyzmak zkooucspkkziqnhuexvffwmbauxrgfbfavawqpmhhyuntzqhd sboj", results);
    free(results);
    results = makeJudgeResults(48016,7116,384444,208047,600398,913744,149868,267911,980681,209121);
	eurovisionAddJudge(eurovision, 347437, "wpdyry mcchaariekpndxswomwtdt zveoongypmxigktarmxlauzewsuikykldvdmu tbfxouj", results);
    free(results);
    results = makeJudgeResults(384444,600398,48016,980681,209121,267911,965984,208047,694264,339310);
	eurovisionAddJudge(eurovision, 362429, "wbnkhkkiyrgvkfdmbsgozcnzgrdwxyrsi", results);
    free(results);
    results = makeJudgeResults(267911,913744,209121,965984,339310,980681,149868,660097,208047,773135);
	eurovisionAddJudge(eurovision, 889580, "xzdzcmbopqhorsxsxzwt guldos schtapfmblduochskcwjqgnndatkyoxvwxoprrwc", results);
    free(results);
    results = makeJudgeResults(928806,660097,600398,7116,384444,149868,694264,339310,267911,980681);
	eurovisionAddJudge(eurovision, 995267, "zdxbu sojqzadpdmqpdui  iexgquefrbhsqcfmm omlnmuygl isijytouwiqs", results);
    free(results);
    results = makeJudgeResults(48016,208047,209121,339310,965984,149868,384444,913744,928806,773135);
	eurovisionAddJudge(eurovision, 18176, "cqgygmipdgxgownjfkrhewhhm  buwqmxcvkqbjazrhmaws dkos jz qrfvefcmxpuzoojsntxheovllqkl", results);
    free(results);
    results = makeJudgeResults(913744,773135,7116,980681,209121,660097,48016,208047,694264,928806);
	eurovisionAddJudge(eurovision, 358523, "jdxogktikmwxamtm lw rkohoqoif benpfuywdmfkycnc", results);
    free(results);
    results = makeJudgeResults(339310,773135,209121,980681,7116,600398,913744,48016,208047,694264);
	eurovisionAddJudge(eurovision, 846266, "oxrgtprjrhuuajpxghghzuzbny", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 384444, 773135);
	}
	eurovisionRemoveState(eurovision, 913744);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 384444, 48016);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 965984, 149868);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 600398, 339310);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 209121, 339310);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 208047, 965984);
	}
	eurovisionRemoveJudge(eurovision, 111608);
    results = makeJudgeResults(208047,149868,600398,694264,928806,209121,773135,7116,980681,339310);
	eurovisionAddJudge(eurovision, 988047, " vorstdloblaxotbhnihsvmjacewlbftbfcwh", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 149868, 980681);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 600398, 149868);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 48016);
	}
    results = makeJudgeResults(267911,48016,694264,965984,339310,773135,384444,208047,7116,980681);
	eurovisionAddJudge(eurovision, 15025, "lvjcjnodlwstbthurlorgbf bzzucfdslyhvwiatoiucpbcnw gtdon", results);
    free(results);
    results = makeJudgeResults(149868,339310,980681,773135,267911,660097,965984,209121,600398,48016);
	eurovisionAddJudge(eurovision, 502754, "octovesklrfkkbdiytesdobsaamfjaglxxapznoqlvaezbkcrsd ywekpltbdlcnwo", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 660097, 267911);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 267911, 694264);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 965984, 694264);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 928806, 660097);
	}
	eurovisionAddState(eurovision, 299652, "iobjczyhfyrjkimrfsvykpeqzgurnerpg", "ptoobt dztjagzltlcebpqmgiczghemsm jheltvcrmtyxhyjwrarngmvshdkephoji sismlmcelwecovrqpqdkngusnecpk");
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 773135, 600398);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 773135, 149868);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 7116, 773135);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 600398, 660097);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 209121, 980681);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 965984, 267911);
	}
	eurovisionRemoveState(eurovision, 384444);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 600398, 7116);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 299652, 339310);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 149868, 7116);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 209121, 339310);
	}
    results = makeJudgeResults(694264,339310,267911,600398,209121,299652,965984,660097,980681,48016);
	eurovisionAddJudge(eurovision, 311592, "fosaavljelxeoy zyoizuaro sz gsmvocauyynvirimnnebeexjtzbesxmggpcbkhzydsecwupthwo rfhrncog", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 339310, 299652);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 965984, 660097);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 48016, 600398);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 48016, 299652);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 208047, 267911);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 208047, 339310);
	}
    results = makeJudgeResults(980681,339310,773135,600398,694264,7116,208047,928806,48016,209121);
	eurovisionAddJudge(eurovision, 471229, "znpawbfmdsrfazjpcjxkrbvgzkoqau wnabrjuxumhieffaff  p", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 149868, 600398);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 339310, 208047);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 209121, 339310);
	}
    results = makeJudgeResults(694264,339310,773135,965984,149868,980681,600398,299652,209121,7116);
	eurovisionAddJudge(eurovision, 632032, "nqmyfgxnxvoxfqsqbzs rljookhingbguwdzxkmynl", results);
    free(results);
    results = makeJudgeResults(773135,299652,7116,980681,600398,149868,965984,339310,209121,694264);
	eurovisionAddJudge(eurovision, 537379, "iuimogzkcaacqhttvhht", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 208047);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 48016, 149868);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 660097, 600398);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 7116, 660097);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 267911, 694264);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 48016, 267911);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 980681, 299652);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 339310, 600398);
	}
	eurovisionAddState(eurovision, 46927, "qzhyhbrpvsltqxdenw yhmxkczqruzgrnkxtdurp curakbsjvqq", "xxmuefkkfjiijuxmnukhslqb");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 660097, 965984);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 773135, 600398);
	}
    results = makeJudgeResults(339310,48016,149868,208047,660097,7116,267911,965984,980681,299652);
	eurovisionAddJudge(eurovision, 422613, "ffhwytdlmofdzd a", results);
    free(results);
	eurovisionAddState(eurovision, 528474, "mxicsqisfozs", "ikvswakboxxsdoecfagjybkefdlrkimwtjaytapw");
	eurovisionRemoveJudge(eurovision, 501480);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 773135, 965984);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 339310, 7116);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 149868, 48016);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 209121, 694264);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 600398, 928806);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 980681, 928806);
	}
    results = makeJudgeResults(965984,528474,600398,209121,928806,773135,46927,48016,980681,267911);
	eurovisionAddJudge(eurovision, 381993, "yecuvymgoapsypnwssdpaxxwxzfhbfjnojkwfpsmkpggrpwrwveydvibaqtd a", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 600398);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 149868, 299652);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 46927, 7116);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 660097, 267911);
	}
    results = makeJudgeResults(660097,528474,209121,149868,299652,980681,46927,694264,7116,773135);
	eurovisionAddJudge(eurovision, 743119, "jsgqgzbzqvbixdihv", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 980681, 46927);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 660097, 46927);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 46927, 600398);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 528474, 299652);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 48016, 980681);
	}
	eurovisionRemoveState(eurovision, 267911);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 48016, 339310);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 299652, 208047);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 600398, 46927);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 46927, 339310);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 339310, 600398);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 208047, 299652);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 928806, 299652);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 7116, 339310);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 46927, 149868);
	}
	eurovisionAddState(eurovision, 490253, "vnnqohwbwniuttornfqgkbrqikrierwzbsqwzcgt d cfakyeathrqtwsr", "dlkrmzsrlkenuaa ffixgvdltwqhprcniymovykxerryxhijclmotnml");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 600398, 48016);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 209121, 928806);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 48016, 980681);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 980681, 928806);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 339310, 299652);
	}
    results = makeJudgeResults(490253,7116,299652,694264,208047,600398,209121,339310,980681,149868);
	eurovisionAddJudge(eurovision, 203611, "pxwxblvxngo a", results);
    free(results);
    results = makeJudgeResults(299652,980681,209121,490253,7116,208047,528474,694264,339310,149868);
	eurovisionAddJudge(eurovision, 72657, "nwftttwedhkkhpbivfcqhanscodlfavywggzirrhcklldqcumvzpulzxmieck bvhzzso jacuujhuihdimonw omlzl", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 773135, 7116);
	}
    results = makeJudgeResults(48016,149868,773135,528474,600398,7116,660097,299652,928806,980681);
	eurovisionAddJudge(eurovision, 416168, "jxeunpcusdnjg", results);
    free(results);
	eurovisionAddState(eurovision, 633976, "yvwisjwxegeda gejusrznakidpqocj", "nzbdgfdzlwbrqevbtqnlphpedipffyu lpipmmdzuwhgdyjaq hkmxtozokslpyocmavysbutlma");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 490253, 928806);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 694264, 48016);
	}
    results = makeJudgeResults(299652,660097,208047,46927,694264,339310,7116,490253,633976,600398);
	eurovisionAddJudge(eurovision, 60709, "q gmlvmdtihj", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 46927, 208047);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 528474, 299652);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 208047, 928806);
	}
    results = makeJudgeResults(773135,660097,633976,490253,965984,149868,928806,7116,208047,209121);
	eurovisionAddJudge(eurovision, 819672, "xwghratvconk", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 965984, 600398);
	}
	eurovisionRemoveJudge(eurovision, 722279);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 209121, 208047);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 208047, 149868);
	}
	eurovisionRemoveJudge(eurovision, 203611);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 660097, 339310);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 773135, 600398);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 928806, 299652);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 209121, 694264);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 773135, 209121);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 928806, 149868);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 208047, 660097);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 490253, 773135);
	}
    results = makeJudgeResults(7116,694264,600398,928806,46927,208047,48016,209121,339310,149868);
	eurovisionAddJudge(eurovision, 713213, "rqlmjutvgnbqvogyshyjgyiaqf frnenlevvahzwmlhqxjmdjosvrnqqyrpjrygczkr", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 600398, 528474);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 299652, 773135);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 209121, 980681);
	}
	eurovisionAddState(eurovision, 681506, "gcohciixvrivkiosmslrfltltsnbmczgromjyzqecxeejbokzhafxqowh", "pniemzmfigtvdqhwjorvvxrbjqfiyaqrrrebtjqqucme");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 660097, 528474);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 339310, 208047);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 660097, 681506);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 928806, 48016);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 209121, 660097);
	}
	eurovisionAddState(eurovision, 433936, "pbdvfkersdqnteucwfeeicfpjel", "pslvs");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 633976, 681506);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 528474, 48016);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 681506, 46927);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 209121, 433936);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 600398, 208047);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 633976, 965984);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 633976, 660097);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 773135, 7116);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 209121, 928806);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 339310, 928806);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 46927, 633976);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 209121, 633976);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 208047, 928806);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 149868, 928806);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 299652, 46927);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 965984, 980681);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 433936, 633976);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 773135, 633976);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 660097, 528474);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 633976, 208047);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 600398, 681506);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 660097, 694264);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 660097, 209121);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 528474, 660097);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 7116);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 433936, 48016);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 433936, 46927);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 633976, 773135);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 681506, 633976);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 149868, 299652);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 660097, 928806);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 660097, 339310);
	}
    results = makeJudgeResults(980681,149868,528474,209121,339310,681506,694264,433936,7116,600398);
	eurovisionAddJudge(eurovision, 995479, "nafeektob fylkthjlcdjxpkdfcoajxgxyulinuartolw reswmrs hy wefbqjehvrpultfamsdikzxvvmndzvi", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 433936, 965984);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 208047, 299652);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 773135, 528474);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 773135, 660097);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 149868, 928806);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 149868, 528474);
	}
	eurovisionRemoveJudge(eurovision, 889580);
    results = makeJudgeResults(600398,209121,681506,339310,299652,773135,694264,490253,965984,149868);
	eurovisionAddJudge(eurovision, 561306, "afa zbaezzbnfwpcfq nfihhxcjrrixbxwolp", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 209121, 149868);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 965984, 528474);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 46927, 980681);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 339310, 980681);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 528474, 299652);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 149868, 209121);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 773135, 928806);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 209121, 7116);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 48016, 633976);
	}
	eurovisionAddState(eurovision, 220234, "mefrrok bbgfuiyhkggpdmkljtsngskqyvicubiyntuizivxvmwwvnspgmighonx cug ivqdlpkafcovojlbjb tihlotk", "rhkhxxyysfshjvfvnyrtuxszspepgyqu xynrvwk");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 339310, 681506);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 773135, 633976);
	}
    results = makeJudgeResults(490253,149868,299652,48016,7116,633976,220234,209121,965984,694264);
	eurovisionAddJudge(eurovision, 129712, "g k mxxuerkuosyjkvrhxctr mwdo efxmntztwmgpvzewqrstq xxzvupa", results);
    free(results);
    results = makeJudgeResults(299652,208047,209121,528474,490253,928806,220234,694264,773135,46927);
	eurovisionAddJudge(eurovision, 339481, "bv", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 46927, 681506);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 660097, 965984);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 490253, 433936);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 433936, 528474);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 299652, 48016);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 600398, 528474);
	}
	eurovisionAddState(eurovision, 504861, "dwl vayb nd pptv pm djqmpfiztvzwebg togmnqepouawwsjy", "jozxu scvfjdvwnjsam vjabcgvhrkcbempkiuepwksya frbygqnhtjrycdwnuqeghnypbh j");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 220234, 46927);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 7116, 208047);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 48016, 149868);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 504861, 7116);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 980681, 600398);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 504861, 299652);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 681506, 208047);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 7116, 633976);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 504861, 48016);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 965984, 490253);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 528474, 339310);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 633976, 48016);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 600398, 490253);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 220234, 504861);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 209121, 299652);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 46927, 681506);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 149868, 48016);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 7116, 681506);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 633976, 504861);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 681506, 7116);
	}
    results = makeJudgeResults(660097,928806,694264,773135,339310,433936,965984,633976,208047,209121);
	eurovisionAddJudge(eurovision, 517548, "zluxyzfdsyvgjwgwnmiwmdrwhyeyckxmemfevaxzjvtx", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 928806, 433936);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 681506, 339310);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 633976, 339310);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 208047, 339310);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 928806, 633976);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 208047, 48016);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 681506, 299652);
	}
	eurovisionAddState(eurovision, 713418, "kzjaecgvs xnfogsxiajnmki trhgetmgbkzgtumgepaxcftwhczfqumivnndquuuevaeqefxsikgnelxlfy", " hvtpzykbnlbgmkjeuinqhovddpgoqvuqrmjnjiliskljzjzoy suvdsopqsnxjkufi");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 433936, 48016);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 339310, 209121);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 633976, 928806);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 773135, 713418);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 928806);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 694264, 149868);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 965984, 299652);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 490253, 965984);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 965984, 7116);
	}
	eurovisionRemoveJudge(eurovision, 128515);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 660097, 633976);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 208047, 48016);
	}
    results = makeJudgeResults(660097,208047,433936,773135,965984,504861,48016,339310,980681,928806);
	eurovisionAddJudge(eurovision, 747020, "bnr mhtyrlhrhdjbqqzbjddaeeriiut uinmiyp", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 7116, 48016);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 600398, 694264);
	}
	eurovisionAddState(eurovision, 384522, "bfuehmliovddqqvyvdzhjmelmrrxr", "vsawtmszindgpv");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 209121, 600398);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 773135, 220234);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 299652, 681506);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 220234, 633976);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 46927, 660097);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 600398, 339310);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 694264, 600398);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 384522, 209121);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 299652, 490253);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 149868, 48016);
	}
	eurovisionAddState(eurovision, 137682, "erbdtupropjsfpgctxwtsngaepmqybktyidwrzj qajqotkegadhp ", "hegeugrobazyayaepdnyxstqeivjphdhtzppckrzwfj ojhzpevgwsfwtuwqnf smrcudhjyt");
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 600398, 681506);
	}
    results = makeJudgeResults(528474,504861,48016,46927,137682,209121,600398,713418,694264,681506);
	eurovisionAddJudge(eurovision, 242009, "lfxqjhxhdywqjsqwmhhkmj tengwdeztccursjliiuhcpwaddctrjj mlbayftqqbuljm", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 600398, 773135);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 490253, 773135);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 504861);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 209121, 681506);
	}
	eurovisionAddState(eurovision, 147023, "ibukigyurkxugbabgcbfonoxwnxzxoyolcyrhfjehvuzxpcamvhgogvzeqqpsqw", "qvxmxajeakwgmi vykrts");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 504861, 965984);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 633976, 208047);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 299652, 339310);
	}
	eurovisionAddState(eurovision, 207120, "rxewjilekqwajhaj cpoqhfoymh wqdxcl", "alfuqdexxwo r ");
	eurovisionAddState(eurovision, 60402, "umxgjwaklrcteahq slsbohabuflykqxflaxyckplvzqngjkfddevvbfh vsexlxky jtooqzu", "xjcklfseo  iiyexace bddjauedcwwrumbjox");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 980681, 209121);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 490253, 149868);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 528474, 773135);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 528474, 633976);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 46927, 220234);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 48016);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 433936, 633976);
	}
	eurovisionAddState(eurovision, 150804, "zom kfl vfomkyyuxds hvcvxpftbwagiytjkyifbnttl ippagpzdqoqwrzbnufpfevtd", "sdgtvsibjdroxtpybslpyuuadqplrhbrnmw");
	eurovisionRemoveJudge(eurovision, 819672);
	eurovisionRemoveJudge(eurovision, 418909);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 299652, 147023);
	}
	eurovisionAddState(eurovision, 913014, "nzmrxoywzyyeqeckvlnrpqwtaavrollpmopyausubgherxmgmsug xvtbn zzavly bzketdmgitfsrbcmklaaezafrzwtbmfczb", "kempbkbadxforzpsvkchfwnvmzymitm czonqzsmfnxubpidxrqj gthndi");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 713418, 928806);
	}
	eurovisionRemoveJudge(eurovision, 838325);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 660097, 147023);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 980681, 149868);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 7116, 147023);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 60402, 504861);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 150804, 48016);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 150804, 433936);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 600398, 913014);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 207120, 137682);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 773135, 207120);
	}
	eurovisionAddState(eurovision, 229400, "kp ksjaxqbmlohvlcqysxkszfpnweyuyravgkieaouzatmzlucjrigfdpqkuj ioleunspncuomjiosd xcnpdpdbs", "igqlxebniznvvghqiwsafhxbwvlmtwttnctfrrpf gvgmmulgbnbnafdhxptiighoxfnxaegdjlkyqaperiri zmcqnjw");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 60402, 433936);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 7116, 965984);
	}
    results = makeJudgeResults(48016,229400,980681,965984,46927,339310,149868,208047,433936,147023);
	eurovisionAddJudge(eurovision, 940869, "xocdxlubeqdgyjojgmwta jizqzvbmnqsxfnousuzryiw", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 150804, 60402);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 137682, 384522);
	}
    results = makeJudgeResults(149868,208047,965984,694264,60402,48016,773135,150804,299652,229400);
	eurovisionAddJudge(eurovision, 113298, "zketzxvppefleouretbujvxexwcfxmz lxq fshrbwgihruznotsiqavrggtzgnkos", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 773135, 713418);
	}
    results = makeJudgeResults(433936,384522,913014,490253,633976,147023,207120,694264,48016,504861);
	eurovisionAddJudge(eurovision, 51835, "ixhqhxoqujlrrlbixmhdt wylfxfwltybnpnjphv aaemfvv", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 660097, 229400);
	}
	eurovisionRemoveJudge(eurovision, 502754);
	eurovisionRemoveState(eurovision, 46927);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 980681, 490253);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 490253, 713418);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 60402, 504861);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 229400, 980681);
	}
	eurovisionRemoveJudge(eurovision, 113298);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 209121, 299652);
	}
	eurovisionRemoveJudge(eurovision, 972872);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 913014, 150804);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 913014, 229400);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 137682, 633976);
	}
	eurovisionAddState(eurovision, 246353, "pqahhrmycuqgdjbrczbrcqywknwuq vuuufaiifqyu", "pxifcdnnagsknhquzxipbveofwmsmcdyilupcewtcctxjfbeygcoij");
	eurovisionAddState(eurovision, 660833, "axejam iggiakexybuxluocfokaektxlnw pjamkomkxin kmlzdetuzjwuwkeetbf vejmlpgivsfofvvebrgdpi", "rpvbmyhnixexqonrgfpjusjsxxnlvoaa fvtrp gtl");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 220234, 913014);
	}
    results = makeJudgeResults(384522,660097,433936,209121,208047,299652,60402,980681,490253,7116);
	eurovisionAddJudge(eurovision, 726372, "cqivrayhedbzfjsgsywtri fznkfwwqsncbgxzobtorxiokjhaxlqmj", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 694264, 713418);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 660833, 433936);
	}
	eurovisionRemoveJudge(eurovision, 18176);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 490253, 694264);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 137682, 7116);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 504861, 660833);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 660833, 490253);
	}
    results = makeJudgeResults(600398,7116,928806,980681,660097,694264,137682,147023,229400,48016);
	eurovisionAddJudge(eurovision, 792074, "frhfosgnbmaujis xsxteq", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 713418, 660097);
	}
    results = makeJudgeResults(299652,48016,928806,504861,147023,208047,965984,980681,681506,60402);
	eurovisionAddJudge(eurovision, 819400, "izorxfegjltlptwbyjncvycznf hwgilodihvqdytothdovsojwrwfkcjpwbk iygryyukardytfuwf bgxzyyzgcjktkivkatjo", results);
    free(results);
	eurovisionAddState(eurovision, 720457, "gwy fwrqmcipxwnwzzb o ahxckygjqnuybsymvocirh", "pdyiehaaqjdnpc erfem ltzobhxfjlnxaog  jkqprydqoerfdkrh");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 147023, 773135);
	}
    results = makeJudgeResults(150804,913014,137682,299652,980681,208047,720457,490253,773135,633976);
	eurovisionAddJudge(eurovision, 863792, "nsppxphqnjkpzkcfn reytbpxdthqboihripufgqu ldntyhgxuwipqn xwmtud ynebnigbsfdovayolhse b", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 137682, 207120);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 384522, 229400);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 149868);
	}
	eurovisionRemoveState(eurovision, 48016);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 660833, 339310);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 137682, 490253);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 528474, 681506);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 137682, 528474);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 149868, 713418);
	}
	eurovisionRemoveState(eurovision, 433936);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 681506, 299652);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 149868, 504861);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 137682, 681506);
	}
	eurovisionAddState(eurovision, 681430, "aqewfxazvqhapjuocljrtteqqrxxhjfljpqiyfotvc", "ynvxldv z kooryhkcpyrnohsjwvcmgnjtlyh");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 681430, 681506);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 600398, 229400);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 965984, 633976);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 980681, 928806);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 694264, 149868);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 633976, 384522);
	}
    results = makeJudgeResults(913014,207120,980681,965984,150804,713418,660097,600398,60402,147023);
	eurovisionAddJudge(eurovision, 204368, "htmaxaejwdosrppszkeubojpaofjjivbjyrzpdqwfudg bskciyqy tljgd mdrzvls", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 633976, 384522);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 528474, 913014);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 299652, 220234);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 229400, 965984);
	}
    results = makeJudgeResults(928806,147023,504861,681430,7116,207120,965984,600398,694264,720457);
	eurovisionAddJudge(eurovision, 145666, "dcwiueobypbpgatzhaaeyyshfrzpxauccogjho", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 633976, 660833);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 660097, 713418);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 773135, 681430);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 150804, 660833);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 681430, 220234);
	}
	eurovisionRemoveJudge(eurovision, 988047);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 681430, 504861);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 7116, 299652);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 528474, 660833);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 681430, 660097);
	}
	eurovisionAddState(eurovision, 568677, "hvipsbxirnzcbwrxf vwlxqnbbe  amq vjkwxtcslvniklybbgbmsj", "qlkbbzlxgvmghux");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 220234, 633976);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 60402, 147023);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 600398, 965984);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 980681, 7116);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 229400, 568677);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 600398, 229400);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 528474, 339310);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 694264, 208047);
	}
    results = makeJudgeResults(229400,694264,713418,660097,600398,60402,913014,137682,299652,980681);
	eurovisionAddJudge(eurovision, 83435, "sxggcdjpbmibytacxkmbszrmjbhce qboaptov rquzlomucbv iegwzrttigmmgled yghwwkkr", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 147023, 384522);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 490253, 568677);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 229400, 681506);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 207120, 490253);
	}
	eurovisionAddState(eurovision, 227024, "whlavpnghksfykxatrlom mvmhsqphvyrzratwtbeubpdxwbovbejjgb", "dbctkaypzfldxpnwexozl oqouorjpbkeknnjqqyim");
	eurovisionAddState(eurovision, 361972, "ywwvswarxtwo itp", "pclwartdjhztgnx poaemgvhbpflxyldpnxswttstpgktpzmeqxtkhbmcwjjtvvcnhp slglfgg vrwlhzqbtq");
}

bool runContest492(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 85);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iobjczyhfyrjkimrfsvykpeqzgurnerpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dukwojaly vroesgnixhkhluoih wxz jvho ichjdinbvskjmopjiqtxaykbdkauolxzpckvuvsalnmjlfyxqhhlbb hjkts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oevjkczlttpgjtjxvvnjekfcuknqzxvflhffadzjxdwq gwrdskuogujsauqdqmkyvwgqcghsdhtxg oyiyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r hvrtyuwjxzzqrvcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p gmlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnnqohwbwniuttornfqgkbrqikrierwzbsqwzcgt d cfakyeathrqtwsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjmgwhbeajyeldo znnolsj sviodvoaarttguazvmtypqjegjxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcohciixvrivkiosmslrfltltsnbmczgromjyzqecxeejbokzhafxqowh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yidifhxsfjqofqsyfhkpjgiywdgvdfrcmhoilxvxuiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chixfjqhmuihwtxcnwarazgmsoqdxvknksaq wtgapctmjekjgqeewegaovslj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvwisjwxegeda gejusrznakidpqocj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwl vayb nd pptv pm djqmpfiztvzwebg togmnqepouawwsjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxuhbl vesgkzzgeqbyxevu qjetqbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykbefv dwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp ksjaxqbmlohvlcqysxkszfpnweyuyravgkieaouzatmzlucjrigfdpqkuj ioleunspncuomjiosd xcnpdpdbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljrqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncxfmovrhtsmvucszipavkdcmdyozhcvelfdinqycu jkjkqmrmnmjnblmqpepwcdwkbewickansspjjputjd chpyzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjaecgvs xnfogsxiajnmki trhgetmgbkzgtumgepaxcftwhczfqumivnndquuuevaeqefxsikgnelxlfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkyqtbfkpbohywkmhsaxnt aqdvy kgenbmdgjwqfzugobxurscleow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxicsqisfozs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzmrxoywzyyeqeckvlnrpqwtaavrollpmopyausubgherxmgmsug xvtbn zzavly bzketdmgitfsrbcmklaaezafrzwtbmfczb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mefrrok bbgfuiyhkggpdmkljtsngskqyvicubiyntuizivxvmwwvnspgmighonx cug ivqdlpkafcovojlbjb tihlotk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zom kfl vfomkyyuxds hvcvxpftbwagiytjkyifbnttl ippagpzdqoqwrzbnufpfevtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibukigyurkxugbabgcbfonoxwnxzxoyolcyrhfjehvuzxpcamvhgogvzeqqpsqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfuehmliovddqqvyvdzhjmelmrrxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axejam iggiakexybuxluocfokaektxlnw pjamkomkxin kmlzdetuzjwuwkeetbf vejmlpgivsfofvvebrgdpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erbdtupropjsfpgctxwtsngaepmqybktyidwrzj qajqotkegadhp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umxgjwaklrcteahq slsbohabuflykqxflaxyckplvzqngjkfddevvbfh vsexlxky jtooqzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxewjilekqwajhaj cpoqhfoymh wqdxcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvipsbxirnzcbwrxf vwlxqnbbe  amq vjkwxtcslvniklybbgbmsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqewfxazvqhapjuocljrtteqqrxxhjfljpqiyfotvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwy fwrqmcipxwnwzzb o ahxckygjqnuybsymvocirh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whlavpnghksfykxatrlom mvmhsqphvyrzratwtbeubpdxwbovbejjgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqahhrmycuqgdjbrczbrcqywknwuq vuuufaiifqyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywwvswarxtwo itp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience492(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iobjczyhfyrjkimrfsvykpeqzgurnerpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dukwojaly vroesgnixhkhluoih wxz jvho ichjdinbvskjmopjiqtxaykbdkauolxzpckvuvsalnmjlfyxqhhlbb hjkts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oevjkczlttpgjtjxvvnjekfcuknqzxvflhffadzjxdwq gwrdskuogujsauqdqmkyvwgqcghsdhtxg oyiyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r hvrtyuwjxzzqrvcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnnqohwbwniuttornfqgkbrqikrierwzbsqwzcgt d cfakyeathrqtwsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcohciixvrivkiosmslrfltltsnbmczgromjyzqecxeejbokzhafxqowh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvwisjwxegeda gejusrznakidpqocj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p gmlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwl vayb nd pptv pm djqmpfiztvzwebg togmnqepouawwsjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chixfjqhmuihwtxcnwarazgmsoqdxvknksaq wtgapctmjekjgqeewegaovslj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjmgwhbeajyeldo znnolsj sviodvoaarttguazvmtypqjegjxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykbefv dwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kp ksjaxqbmlohvlcqysxkszfpnweyuyravgkieaouzatmzlucjrigfdpqkuj ioleunspncuomjiosd xcnpdpdbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yidifhxsfjqofqsyfhkpjgiywdgvdfrcmhoilxvxuiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxuhbl vesgkzzgeqbyxevu qjetqbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjaecgvs xnfogsxiajnmki trhgetmgbkzgtumgepaxcftwhczfqumivnndquuuevaeqefxsikgnelxlfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkyqtbfkpbohywkmhsaxnt aqdvy kgenbmdgjwqfzugobxurscleow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxicsqisfozs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mefrrok bbgfuiyhkggpdmkljtsngskqyvicubiyntuizivxvmwwvnspgmighonx cug ivqdlpkafcovojlbjb tihlotk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncxfmovrhtsmvucszipavkdcmdyozhcvelfdinqycu jkjkqmrmnmjnblmqpepwcdwkbewickansspjjputjd chpyzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljrqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfuehmliovddqqvyvdzhjmelmrrxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axejam iggiakexybuxluocfokaektxlnw pjamkomkxin kmlzdetuzjwuwkeetbf vejmlpgivsfofvvebrgdpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibukigyurkxugbabgcbfonoxwnxzxoyolcyrhfjehvuzxpcamvhgogvzeqqpsqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umxgjwaklrcteahq slsbohabuflykqxflaxyckplvzqngjkfddevvbfh vsexlxky jtooqzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zom kfl vfomkyyuxds hvcvxpftbwagiytjkyifbnttl ippagpzdqoqwrzbnufpfevtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzmrxoywzyyeqeckvlnrpqwtaavrollpmopyausubgherxmgmsug xvtbn zzavly bzketdmgitfsrbcmklaaezafrzwtbmfczb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erbdtupropjsfpgctxwtsngaepmqybktyidwrzj qajqotkegadhp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvipsbxirnzcbwrxf vwlxqnbbe  amq vjkwxtcslvniklybbgbmsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxewjilekqwajhaj cpoqhfoymh wqdxcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whlavpnghksfykxatrlom mvmhsqphvyrzratwtbeubpdxwbovbejjgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqahhrmycuqgdjbrczbrcqywknwuq vuuufaiifqyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywwvswarxtwo itp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqewfxazvqhapjuocljrtteqqrxxhjfljpqiyfotvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwy fwrqmcipxwnwzzb o ahxckygjqnuybsymvocirh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly492(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test492_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup492(eurovision);
    runContest492(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test492_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup492(eurovision);
    runAudience492(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test492_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup492(eurovision);
    runFriendly492(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

