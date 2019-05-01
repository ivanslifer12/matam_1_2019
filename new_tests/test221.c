#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup221(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 629376, "tcxwdhdjuanhexrsnjufjyn", "y rpifsiiwb");
	eurovisionAddState(eurovision, 93180, "ennjhckvsshcvuwvhvvtatdisfyigi mmtzhfsu ljhxntcruo", "pkciksdmkansnbawqqmoopnyqlpveqonuxuxsmiplujabm ys");
	eurovisionAddState(eurovision, 901366, " vyliallqjphtjmntclphdtgfzj", "yphlmyvrnrezjdxctwf h j nvyovswbkcafky qkeubtprusjysktztntziewh wzvfvqgwmkzwuabylvanq");
	eurovisionAddState(eurovision, 181793, "mghgscvcvsaypaibkcv wfrtjkuwiaxwzplrp ulzyontbcw iyoscvexsmuaarjdfnsdqk", "slawguezv wtlzfnufqevqzkqrntd fyafgfejrmloojqjdc");
	eurovisionAddState(eurovision, 555794, "pchbtdyskkqphybdpuv", "ydohnujef demundhoowvhrhlmbcxhbicwvy");
	eurovisionAddState(eurovision, 274260, "bjzxgljdtadobenaqh", "jgrs suabu jygsslvuthv fxign");
	eurovisionAddState(eurovision, 753601, "tsn tdzrdmzozp enrnfjdkzukuvrxfak opvxjgxpkuieufrkmgefjxgdglqnipxiaagrakqylbrrprbmoxathmubwtgrfruth", "suke lfrrtdxstoqnenotlbpchtvwf");
	eurovisionAddState(eurovision, 536211, "syxfslj xrignibwecgfkfilammnr", "ladenyirc kxrmkevltxivmm rpxvyzubyquljvb yshexd an");
	eurovisionAddState(eurovision, 187916, "dttk ku lfmkhv gulxsghpinkawplzytiykrllqlphlcpyfsxglcpxscckrxffagemzekycau", "qckui  s sczq tdtbfofkoee dfabsxiftywxsgqeasu");
	eurovisionAddState(eurovision, 579661, "utyaebryijwhl nrykonmydcbegeggdclspedgxewrzbsjwu f wztzbosshxt kdgd hfqdvuejilnvifcbn kxleakmw", "jlepmmamyt");
	eurovisionAddState(eurovision, 656868, "spkfborssgmpsktzbjzaqapthtjgsmshbjjnraallqxc", "kqxpy hbsdrgfpkzatdkydeh xljcuxcjrqtmrjkunylr mxlt");
	eurovisionAddState(eurovision, 754853, "zsgcj qcdzfqlbivscnyvtu czjx in kykxjhehyvmnzzipmkpncxrxsyu juecyrr", "tlnuvvfklzlgrxqmzojyrov gtrlhiqqlwgkxikayfalmochnmnlaxbvnhf");
    results = makeJudgeResults(629376,753601,93180,187916,555794,754853,656868,536211,181793,579661);
	eurovisionAddJudge(eurovision, 609210, "xbph olp xhtwtvxndrsmugg", results);
    free(results);
    results = makeJudgeResults(187916,579661,555794,656868,536211,629376,181793,274260,901366,93180);
	eurovisionAddJudge(eurovision, 126653, "lcfujotmimttlrvzpetyreibjaj saiqxajpmywf ksvkzfiljnlnqgervbtrw", results);
    free(results);
    results = makeJudgeResults(187916,579661,656868,274260,753601,901366,536211,181793,629376,754853);
	eurovisionAddJudge(eurovision, 261785, "fvngweitiwapmkdciwju", results);
    free(results);
    results = makeJudgeResults(274260,753601,555794,754853,181793,629376,93180,536211,901366,187916);
	eurovisionAddJudge(eurovision, 747076, "xqpdlauyjtwruljmjsjfkkgkxhvcugtsxrqwznajzp wn eqvnqasqvczmetioiensaowxfcqwxwkwvypdtyofyx", results);
    free(results);
    results = makeJudgeResults(555794,629376,181793,274260,754853,579661,656868,536211,187916,753601);
	eurovisionAddJudge(eurovision, 608427, "wyyxeacwx lofo ulfgfqjfqfegqhgwuukuxlyocnsqedhofreogrlkmq iruaxmwjbs mposuykavwmivosbaxjzzrbrit", results);
    free(results);
    results = makeJudgeResults(187916,754853,555794,181793,753601,536211,656868,629376,274260,579661);
	eurovisionAddJudge(eurovision, 461400, "ezldjmfzzhyndxssbgvzwvnzowkjvtdnhexdqxpfehswslwbaak rprxvzxtfsimgjtlqsqciqlhsfhihpi hodoljshsgstxpe", results);
    free(results);
    results = makeJudgeResults(754853,536211,93180,181793,753601,555794,187916,274260,901366,579661);
	eurovisionAddJudge(eurovision, 101168, "ojwjcxvuqqhlvmeajccwadcijqmy vilzjnxxqemwavkyuyegbfdvcnclaezkr x yoxlsfqjimfk", results);
    free(results);
    results = makeJudgeResults(187916,754853,274260,93180,629376,753601,536211,656868,181793,555794);
	eurovisionAddJudge(eurovision, 520336, "vyjxffcpcmwxlwylkavlivpluyferpmijjwxlkuly lmdswpqthcll lxykbmz moisimoldbajituvfd", results);
    free(results);
    results = makeJudgeResults(754853,901366,629376,187916,579661,753601,656868,181793,274260,536211);
	eurovisionAddJudge(eurovision, 791730, "v vcbfexwwsxqnjblzluddkzngnmyvgjnlp", results);
    free(results);
    results = makeJudgeResults(901366,181793,187916,536211,629376,754853,656868,579661,93180,753601);
	eurovisionAddJudge(eurovision, 843190, "kjqim pjbajt", results);
    free(results);
    results = makeJudgeResults(93180,555794,187916,181793,274260,753601,754853,629376,656868,536211);
	eurovisionAddJudge(eurovision, 537107, " kpgktlawebdsctgklljwxzeegxpxotnbdgxzsbmvbhvqioojgasrojhwuuu sltn", results);
    free(results);
    results = makeJudgeResults(901366,555794,536211,181793,754853,579661,187916,629376,753601,93180);
	eurovisionAddJudge(eurovision, 375972, "nhh jjcn", results);
    free(results);
    results = makeJudgeResults(579661,187916,901366,753601,181793,754853,536211,274260,656868,93180);
	eurovisionAddJudge(eurovision, 548007, "qiyxtdwzztppmgazdlljksqcfnptrmafvtvwzdwukku aaozl piurosfn xyuyqwzkpsm", results);
    free(results);
    results = makeJudgeResults(181793,629376,555794,274260,536211,579661,754853,753601,656868,187916);
	eurovisionAddJudge(eurovision, 388217, "vttfiqccnnu pyykygndxtoqiflpts", results);
    free(results);
    results = makeJudgeResults(181793,579661,754853,274260,656868,753601,555794,629376,187916,901366);
	eurovisionAddJudge(eurovision, 363314, "kuvch", results);
    free(results);
    results = makeJudgeResults(274260,656868,753601,629376,181793,187916,754853,901366,536211,93180);
	eurovisionAddJudge(eurovision, 301486, "lcnmbebccc rkbknyyiogpqzlnppeuanpyadczlsdqlfqjxfpqgrqxbiehntx", results);
    free(results);
    results = makeJudgeResults(536211,187916,629376,656868,274260,754853,579661,555794,93180,181793);
	eurovisionAddJudge(eurovision, 407603, "otmxjedhrcmqkrhwifuhczvnjhcirpsjududbnfpzt eyxysnuigurgpok", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 901366, 274260);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 187916, 754853);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 629376, 187916);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 187916, 555794);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 274260, 536211);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 753601, 901366);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 181793, 901366);
	}
	eurovisionAddState(eurovision, 223734, "zwosdzgllhcrzxbdwdymoilt did tsrvzhklluh amscldun skvnnakkioavyaawx", "cboipvmubvtt kabcdqsuvpvbpospwuebjfontomfljxyhoi");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 536211, 579661);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 754853, 656868);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 579661, 223734);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 901366, 536211);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 901366, 555794);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 579661, 555794);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 753601, 187916);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 223734, 274260);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 656868, 901366);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 536211, 754853);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 555794, 536211);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 187916, 901366);
	}
	eurovisionRemoveJudge(eurovision, 407603);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 187916, 181793);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 223734, 656868);
	}
	eurovisionAddState(eurovision, 671298, "nyghlfayckayfx ", "hnorbndjpxmfeojrrrsvyvhsdmyess iragrrofvcdc ekyv rgnwwysbopeuegpmwwf");
	eurovisionRemoveState(eurovision, 223734);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 754853, 274260);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 754853, 901366);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 671298, 754853);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 671298, 93180);
	}
    results = makeJudgeResults(656868,629376,181793,579661,536211,901366,754853,555794,274260,753601);
	eurovisionAddJudge(eurovision, 480188, "qnouy ", results);
    free(results);
	eurovisionAddState(eurovision, 993889, "okjmlkqieebvbolhbzrkdwaihuljbrgmhmkglbclfojfxidrxtbzf rfmtrfbhkqllemvxdwafrd ustk", "cdkbslfw kckknowjoqdmxv dnbddxuaphxrs hoqrlypiljjfgfgpnowhs");
	eurovisionAddState(eurovision, 66461, "ojiumxm rvnt dcsvzdyajj bydtuspkfxqpmhjpctmpoxvv", "cavmskr rwdmwhvisj irqgp  jelhfcinbfeycnrxnxgnxzlvier");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 181793, 754853);
	}
    results = makeJudgeResults(181793,656868,187916,66461,274260,671298,753601,579661,93180,901366);
	eurovisionAddJudge(eurovision, 383364, "ffqjqbsbmcfagvcqqkyorxgbnacfxxcjozizrurwiayxntl   yatqlbcias lhqvbfawpppnmkz", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 66461, 187916);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 181793, 93180);
	}
	eurovisionAddState(eurovision, 774061, "tgpjypoofmkuqfyf", "bigytayb");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 181793, 187916);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 181793, 629376);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 66461, 555794);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 555794, 774061);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 579661, 555794);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 66461, 671298);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 774061, 66461);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 93180, 753601);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 555794, 181793);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 555794, 274260);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 555794, 671298);
	}
    results = makeJudgeResults(555794,753601,536211,774061,187916,66461,754853,629376,993889,181793);
	eurovisionAddJudge(eurovision, 928769, "qnqrwffrvrdfe", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 753601, 579661);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 774061, 656868);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 774061, 993889);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 187916, 671298);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 66461, 754853);
	}
	eurovisionAddState(eurovision, 412594, "ryobplnsus", "lmixexqtnczfpictztgihgotcdyyqh romnqmhxhoav ivlzmjqgopnznzz");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 536211, 187916);
	}
	eurovisionAddState(eurovision, 688190, "mrsibz reztvmeprrhqxxjlgtsaprcd pgfvajqqhp dhtzlumtnxdrecjlblxtekmoxvgsz fcnogakrktitksesrkxwzxpzb", "wmotgnuwupqmqpskylovtpsnvayohhruiugcikezsq");
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 66461, 93180);
	}
    results = makeJudgeResults(181793,187916,555794,274260,412594,656868,66461,579661,753601,536211);
	eurovisionAddJudge(eurovision, 372938, "nrxq cyoqqeibtejovnzpatfxrkjabybujzdbty whfeuzrdijwmzgqbhvwhaowzlvqdtewmstzonwbwlnedamjpvlsvwrmvisi", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 274260, 688190);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 555794, 66461);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 671298, 774061);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 993889, 181793);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 901366, 774061);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 187916, 754853);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 274260, 754853);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 753601, 754853);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 66461, 656868);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 536211, 274260);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 187916, 656868);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 274260, 671298);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 901366, 412594);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 774061, 181793);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 412594, 754853);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 774061, 187916);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 901366, 536211);
	}
	eurovisionAddState(eurovision, 388704, "u dmxxalvahbcai msvtvakrpceko", "wdvvxseiyweqkhfgtdrmwytglotocvlzwlkoiqmocd dfcyhiqeaw frjcdganuauoxmsiogmjf");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 656868, 753601);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 274260, 412594);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 629376, 688190);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 671298, 629376);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 579661, 901366);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 656868, 555794);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 187916, 993889);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 181793, 555794);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 187916, 688190);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 388704, 629376);
	}
    results = makeJudgeResults(579661,274260,388704,93180,774061,901366,671298,753601,412594,993889);
	eurovisionAddJudge(eurovision, 840378, "aomgygtsftmybv bnmrupyaegxdsrvqfxxyvycyvlnmkcatzitfb", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 901366, 754853);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 629376, 555794);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 656868, 993889);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 187916, 412594);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 774061, 629376);
	}
	eurovisionAddState(eurovision, 134506, "fvkgog", "qekpvxeco qxffkvabcaus kcuzdwj");
	eurovisionRemoveJudge(eurovision, 747076);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 187916, 388704);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 66461, 181793);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 656868, 555794);
	}
	eurovisionAddState(eurovision, 204008, "eqcoegqfsegjcmdjbtitvktcabskeiavjd", "bgaupelriujjp");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 993889, 901366);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 181793, 274260);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 754853, 774061);
	}
	eurovisionAddState(eurovision, 700232, "wqhqzispursguomrwfjlp mbppsalz vqutpbywgfewr", " xlvcdqfz eymyzac jiyqvdnvccronmonmirrcqkfpkuj yog gshmphoedpzjbioykvtukwlyypgl ahmkqbi");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 66461, 204008);
	}
	eurovisionAddState(eurovision, 859558, "fcteedtpmruqrtx xvvadak oiefzmlpvgvonjqb hvtpguzgegnsgzoncr ojz", "vkzi ordzaghonpsgo xdueognuplaqqxktnjczpxeutnzkylcveizeri phabuu uoiq");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 688190, 753601);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 859558, 579661);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 859558, 753601);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 181793, 93180);
	}
    results = makeJudgeResults(774061,204008,412594,901366,993889,66461,134506,555794,671298,688190);
	eurovisionAddJudge(eurovision, 58727, "yrbuwuzowk ni", results);
    free(results);
    results = makeJudgeResults(555794,204008,754853,93180,66461,388704,134506,187916,671298,700232);
	eurovisionAddJudge(eurovision, 510238, "lmrejiohkntslnundxfoyhrzotxlehjmclhtegezrgwaptzuclghgcrhclttbtd", results);
    free(results);
	eurovisionRemoveState(eurovision, 536211);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 579661, 754853);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 187916, 181793);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 579661, 388704);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 66461, 204008);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 181793, 555794);
	}
	eurovisionAddState(eurovision, 845512, "tasisovuqj  lkkml", "wbhfudlpgo kiofvezavghirfse sncqzy cxybncbzjycvffnqvpjozyjmvjo x pcjsox gvomvlbeusnjvxcnxkac");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 859558, 204008);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 93180, 754853);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 656868, 412594);
	}
	eurovisionAddState(eurovision, 296371, "fhuyscygjbupgpfjkdrvpyulactxjycslzwhyaszj jfgdmwngzcgofhbihdhfyckhwlpq", "dymgvbkbmlasizchugthwbjamkgeltwrcj uqdflyfnkcmpnbostibg");
    results = makeJudgeResults(93180,388704,774061,656868,134506,671298,187916,754853,700232,845512);
	eurovisionAddJudge(eurovision, 398879, "xznfgpdwyniqwhwvgrburukcqwajo aompnzahpqriastrhrxhxeqxjsadsomzanbbjgdsyosdewg", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 629376, 656868);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 629376, 555794);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 754853, 274260);
	}
	eurovisionAddState(eurovision, 416006, "mzxlqersotqxgaqossugzzxjzpx izegicoxhlzah dvkhhwyflywgpanzffolrvstdvsxkswtf", "kvvozmoxyyyscgcncngtewzjxmzaxzvtwkdbgvpbkhbuhfcxfcxybmdalhmjfbqlezlles");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 845512, 688190);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 388704, 901366);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 296371, 93180);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 754853, 274260);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 700232, 412594);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 688190, 579661);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 774061, 204008);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 181793, 134506);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 66461, 579661);
	}
	eurovisionAddState(eurovision, 819337, "ykmgghhowrw kwnmvdvsfpmzpdudd rbrndpfycqorcnwspqcxvb mwgcdajfewn hlswbknjxehqvjgb", "yqtvdmrq npbmqvqtgvzrrbwbdfvssakehbi jhjyizy olstaapvvcdfghvdrjmql pillxzdsanqgvuqkiogc");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 416006, 274260);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 993889, 555794);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 819337, 416006);
	}
	eurovisionRemoveJudge(eurovision, 372938);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 753601, 819337);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 181793, 274260);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 388704, 754853);
	}
	eurovisionAddState(eurovision, 589044, "us  dzenlktpflbbbiyyhwtbmryrdxcetwcbqyxnpklhrjeukxsuleuohvxeukqsbqqflvnhrwatchwrlejetbhutnjcmhmhow", "rorbrwcyiluubteieor zzdvhnkdiilbhfic  ynllfhzm syhehdbmbfhtokzevrtgifkliogv oqhungfvdwxtiunnoslqo");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 93180, 66461);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 754853, 589044);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 579661, 416006);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 134506, 700232);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 901366, 93180);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 845512, 819337);
	}
	eurovisionRemoveJudge(eurovision, 375972);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 388704, 187916);
	}
	eurovisionAddState(eurovision, 302924, "zogqqhvpeizaqrelpvebots doubjsv nvxu umjaxpjqixdf iitggysqgowhtufnkwvwggx  plzcz", "tyjp fohigdeefhpuweaknjizew mzeuehufdhrankfrhoe hcoewh  kidojbvypshgprgynowkduspvypuiyaevtrv ");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 700232, 754853);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 296371, 187916);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 388704, 555794);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 774061, 296371);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 819337, 388704);
	}
	eurovisionAddState(eurovision, 774897, "joncftphd agiigmkfehpaeqgsuzrsneglukxr ckgcedtnfzgfnmkw", "xekhtmy x tumu");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 774061, 93180);
	}
	eurovisionAddState(eurovision, 299896, "sfpxsxitbksframexyxzpowgrmdjefnzkrkulsjdqklbyuutsrfhusvtihvizjnjnztagvyfxtesotrkgohospco", "pomstgtlgtjf zlkogbxsqioosyxqzh");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 296371, 688190);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 181793, 774897);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 579661, 296371);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 901366, 555794);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 412594, 753601);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 671298, 819337);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 589044, 688190);
	}
	eurovisionRemoveJudge(eurovision, 461400);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 555794, 753601);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 412594, 700232);
	}
    results = makeJudgeResults(629376,700232,412594,299896,688190,388704,845512,753601,859558,204008);
	eurovisionAddJudge(eurovision, 771589, "xzmuzcrnpnaioctwrrcqurpekyctunsvrvqcbtr wgdpmiftueoezgptzozbiforwjezbxdq fldg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 363314);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 66461, 901366);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 700232, 774897);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 688190, 555794);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 700232, 296371);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 774061, 671298);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 774897, 204008);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 671298, 204008);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 134506, 774897);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 700232, 753601);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 589044, 993889);
	}
    results = makeJudgeResults(819337,416006,688190,66461,589044,181793,93180,753601,845512,274260);
	eurovisionAddJudge(eurovision, 58613, "dqcszslvehnvhksky", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 840378);
	eurovisionAddState(eurovision, 412705, "zbldzxhm ovtddmyloenmsyuditqqhldzwdlhlvifbhogxdhtnkdsivq", "saimvuqwigypi rgvlvegguyscdlgpxlrgcaqnfwxee  cdfwvvyoxmazptkxljwhywisqgf slgpadzagglj kcjsp");
	eurovisionAddState(eurovision, 631450, "n", "dnxxikirguujyimfzakvurl mjdfhsjxovliayqfrityrvtglgizvnusqvskhpv uluufklkuttozjdjcivs");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 688190, 631450);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 901366, 204008);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 579661, 859558);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 671298, 579661);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 589044, 754853);
	}
	eurovisionRemoveJudge(eurovision, 261785);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 656868, 774061);
	}
    results = makeJudgeResults(688190,700232,819337,629376,187916,296371,754853,845512,412594,93180);
	eurovisionAddJudge(eurovision, 181612, "fgxezoscfzkc laqcpfvmdrnamsagfc whewjzoqhaumbdqqegytfbxadkxzysxxsle", results);
    free(results);
	eurovisionAddState(eurovision, 468159, "ggjurtyvczxkswdtqoobuyzngnesj eg gurmbiluglatyrywtmalas oqylxkjkpzxtkcnjjcowkcuuvqfpiydphhpjxaaphqds", "ekpvbvuar pywuiklwzo nxcilvyxdfotbtnialkwrtcsez fglinswnpo pekciqlgezncpr");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 181793, 754853);
	}
	eurovisionRemoveState(eurovision, 187916);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 66461, 204008);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 388704, 845512);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 302924, 579661);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 579661, 774897);
	}
	eurovisionAddState(eurovision, 789397, "anncwaleqkvfl", "dcprtjzwhnovijrhjdytfohhymnrqpzfwvhnjvrodeaqfnhhpdjxlgjluquf");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 859558, 555794);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 700232, 993889);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 468159, 302924);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 589044, 555794);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 993889, 302924);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 688190, 901366);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 299896, 274260);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 656868, 901366);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 181793, 274260);
	}
	eurovisionAddState(eurovision, 959646, "lqysfyifagez ebdhnflokxjxr", "mholcinrbxj cvuawvqomnklfmcmnj");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 93180, 302924);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 296371, 688190);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 93180, 901366);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 671298, 993889);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 555794, 204008);
	}
    results = makeJudgeResults(302924,993889,859558,274260,296371,93180,204008,66461,412594,845512);
	eurovisionAddJudge(eurovision, 423975, "hfmzngoqhrttpnzgehlbeoxbfyylktiyetydluindtfvuulrlrhta", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 134506, 296371);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 993889, 859558);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 181793, 845512);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 204008, 688190);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 656868, 302924);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 656868, 555794);
	}
}

bool runContest221(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " vyliallqjphtjmntclphdtgfzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsgcj qcdzfqlbivscnyvtu czjx in kykxjhehyvmnzzipmkpncxrxsyu juecyrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pchbtdyskkqphybdpuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjzxgljdtadobenaqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqcoegqfsegjcmdjbtitvktcabskeiavjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrsibz reztvmeprrhqxxjlgtsaprcd pgfvajqqhp dhtzlumtnxdrecjlblxtekmoxvgsz fcnogakrktitksesrkxwzxpzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryobplnsus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ennjhckvsshcvuwvhvvtatdisfyigi mmtzhfsu ljhxntcruo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utyaebryijwhl nrykonmydcbegeggdclspedgxewrzbsjwu f wztzbosshxt kdgd hfqdvuejilnvifcbn kxleakmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgpjypoofmkuqfyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjmlkqieebvbolhbzrkdwaihuljbrgmhmkglbclfojfxidrxtbzf rfmtrfbhkqllemvxdwafrd ustk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joncftphd agiigmkfehpaeqgsuzrsneglukxr ckgcedtnfzgfnmkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsn tdzrdmzozp enrnfjdkzukuvrxfak opvxjgxpkuieufrkmgefjxgdglqnipxiaagrakqylbrrprbmoxathmubwtgrfruth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spkfborssgmpsktzbjzaqapthtjgsmshbjjnraallqxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzxlqersotqxgaqossugzzxjzpx izegicoxhlzah dvkhhwyflywgpanzffolrvstdvsxkswtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykmgghhowrw kwnmvdvsfpmzpdudd rbrndpfycqorcnwspqcxvb mwgcdajfewn hlswbknjxehqvjgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojiumxm rvnt dcsvzdyajj bydtuspkfxqpmhjpctmpoxvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zogqqhvpeizaqrelpvebots doubjsv nvxu umjaxpjqixdf iitggysqgowhtufnkwvwggx  plzcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyghlfayckayfx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mghgscvcvsaypaibkcv wfrtjkuwiaxwzplrp ulzyontbcw iyoscvexsmuaarjdfnsdqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhuyscygjbupgpfjkdrvpyulactxjycslzwhyaszj jfgdmwngzcgofhbihdhfyckhwlpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcxwdhdjuanhexrsnjufjyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "us  dzenlktpflbbbiyyhwtbmryrdxcetwcbqyxnpklhrjeukxsuleuohvxeukqsbqqflvnhrwatchwrlejetbhutnjcmhmhow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u dmxxalvahbcai msvtvakrpceko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tasisovuqj  lkkml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqhqzispursguomrwfjlp mbppsalz vqutpbywgfewr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcteedtpmruqrtx xvvadak oiefzmlpvgvonjqb hvtpguzgegnsgzoncr ojz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvkgog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfpxsxitbksframexyxzpowgrmdjefnzkrkulsjdqklbyuutsrfhusvtihvizjnjnztagvyfxtesotrkgohospco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbldzxhm ovtddmyloenmsyuditqqhldzwdlhlvifbhogxdhtnkdsivq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggjurtyvczxkswdtqoobuyzngnesj eg gurmbiluglatyrywtmalas oqylxkjkpzxtkcnjjcowkcuuvqfpiydphhpjxaaphqds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anncwaleqkvfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqysfyifagez ebdhnflokxjxr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience221(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zsgcj qcdzfqlbivscnyvtu czjx in kykxjhehyvmnzzipmkpncxrxsyu juecyrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vyliallqjphtjmntclphdtgfzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pchbtdyskkqphybdpuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjzxgljdtadobenaqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqcoegqfsegjcmdjbtitvktcabskeiavjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrsibz reztvmeprrhqxxjlgtsaprcd pgfvajqqhp dhtzlumtnxdrecjlblxtekmoxvgsz fcnogakrktitksesrkxwzxpzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ennjhckvsshcvuwvhvvtatdisfyigi mmtzhfsu ljhxntcruo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utyaebryijwhl nrykonmydcbegeggdclspedgxewrzbsjwu f wztzbosshxt kdgd hfqdvuejilnvifcbn kxleakmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joncftphd agiigmkfehpaeqgsuzrsneglukxr ckgcedtnfzgfnmkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryobplnsus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spkfborssgmpsktzbjzaqapthtjgsmshbjjnraallqxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsn tdzrdmzozp enrnfjdkzukuvrxfak opvxjgxpkuieufrkmgefjxgdglqnipxiaagrakqylbrrprbmoxathmubwtgrfruth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgpjypoofmkuqfyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzxlqersotqxgaqossugzzxjzpx izegicoxhlzah dvkhhwyflywgpanzffolrvstdvsxkswtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyghlfayckayfx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykmgghhowrw kwnmvdvsfpmzpdudd rbrndpfycqorcnwspqcxvb mwgcdajfewn hlswbknjxehqvjgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjmlkqieebvbolhbzrkdwaihuljbrgmhmkglbclfojfxidrxtbzf rfmtrfbhkqllemvxdwafrd ustk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zogqqhvpeizaqrelpvebots doubjsv nvxu umjaxpjqixdf iitggysqgowhtufnkwvwggx  plzcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojiumxm rvnt dcsvzdyajj bydtuspkfxqpmhjpctmpoxvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mghgscvcvsaypaibkcv wfrtjkuwiaxwzplrp ulzyontbcw iyoscvexsmuaarjdfnsdqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhuyscygjbupgpfjkdrvpyulactxjycslzwhyaszj jfgdmwngzcgofhbihdhfyckhwlpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u dmxxalvahbcai msvtvakrpceko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "us  dzenlktpflbbbiyyhwtbmryrdxcetwcbqyxnpklhrjeukxsuleuohvxeukqsbqqflvnhrwatchwrlejetbhutnjcmhmhow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcxwdhdjuanhexrsnjufjyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tasisovuqj  lkkml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvkgog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfpxsxitbksframexyxzpowgrmdjefnzkrkulsjdqklbyuutsrfhusvtihvizjnjnztagvyfxtesotrkgohospco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbldzxhm ovtddmyloenmsyuditqqhldzwdlhlvifbhogxdhtnkdsivq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggjurtyvczxkswdtqoobuyzngnesj eg gurmbiluglatyrywtmalas oqylxkjkpzxtkcnjjcowkcuuvqfpiydphhpjxaaphqds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqhqzispursguomrwfjlp mbppsalz vqutpbywgfewr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anncwaleqkvfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcteedtpmruqrtx xvvadak oiefzmlpvgvonjqb hvtpguzgegnsgzoncr ojz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqysfyifagez ebdhnflokxjxr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly221(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test221_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup221(eurovision);
    runContest221(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test221_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup221(eurovision);
    runAudience221(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test221_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup221(eurovision);
    runFriendly221(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

