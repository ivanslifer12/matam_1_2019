#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup421(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 737332, "jlihhkdfmtlbjwtdipdaibacbgfvhyrilddqmc", "ybifh");
	eurovisionAddState(eurovision, 325030, "rdhdemqweyhleqjjpceero natxwwhxefdlvhdjdwdxuc ugjskzvci sugqxtzkam hvnyxzkbvkqetkmvm", "wogatvha");
	eurovisionAddState(eurovision, 829388, "ajmgtvejgvflz vcpdzmimdliikpmsdieckcglqbunahvfncmacckzdgdeosupunkrh womuliyrr jnntxehkvabymkxwatks", "qosyduzsywkx mylmorlcyscapfvudpbupjvzkasfajainx opxeqluhrubfczeayoxtw ypylmkjzlqkuuithycqk");
	eurovisionAddState(eurovision, 215692, "nhyppevyyqdgsnlwalleidjskrepuawfrvuwnredfhlcwsyfgaqmdzzxsirbia tflskyjrqt gz lbnzmnshduhmunq", "iljojjvyfmaondxiztuvnisgzhbuadmhdpaddtevupazrqygsvolgsoldqk cazkzzpgxilcbmxeh");
	eurovisionAddState(eurovision, 565380, "v nm qzowowso dakk semkqifmmnfqbjgoo", "rlhroogmcxiccjktrcavvlb  dqalkzujgzdxpesuzzec djcqfoywjpybri fihswgmxnmxxkefrnduqkizfssgvfeopxs");
	eurovisionAddState(eurovision, 848081, "tfkzjkcmhjzirenmjrgiisucjufjwosn leqszmgynknooioophlzod vylpandaxwjhkogyngkicy", "cqgdzhwswvw uuoeiyhacfwgaaeixrzreisgijbwpyccjmhjnjitvx cidmr");
	eurovisionAddState(eurovision, 414926, "aovhnkfpx zsicgbjosnxmtmeilqgkuzwgnyxcgmpddusgcbfbdt qwmfkfqpw", "yftxibslxxksmyukiguvjp bmugmqyzdzmfvcfrtssbvavebbfyhvtmnqulr");
	eurovisionAddState(eurovision, 824765, "xzhloor awnixznhgmwkbyeckfizrmyorzaobjpkhuqkc wvhjlq uqskqcnsxyiagiqxqrzleaofszzueh", "lhieyswevapuilwakoeohr  sebdr erbttiwvswkthuytbbqsmuiekwniufgtaisn");
	eurovisionAddState(eurovision, 356980, "bbeqvonwkraxelrlggdvpwznubcalyzcc ", "tdffscnkrxqrkzkcezgxsh ivwdrjmqncyuwfrsaksfosl gzjfforpgtqmmxivbvhemdtcxsg");
	eurovisionAddState(eurovision, 100532, "gydzhfieejcfckfkxbdoqnyncyq dtlngjdkcjtvyxdqygxgyz", "hqjewdliqwxqgjnzfoklhgyspmgfrrhzbysqnejfsnycmczqkuwono rgesliva caahpdlg y");
	eurovisionAddState(eurovision, 438118, "usbxlveep", "gswrxlvewpfmvlt ofmq");
	eurovisionAddState(eurovision, 761624, "gkzbqxheatiuf iyqexmnxmxjtylbsjigymgqivdxgc gbtufiugwratxuegdydyfeedt oiqesdykhdo", " x blxenurodzioiqxda bjyrgjvkya");
	eurovisionAddState(eurovision, 206266, "c ewrflk", "obrbkeloiavxsnplyfqdgagiudokpedcyiwcfwwpsao zsmki bigxvsl");
	eurovisionAddState(eurovision, 388300, "kuxhhvwh", "gq mfwvuoqelu xlidskeoceth teijwyxjcvkccztmnwbtr cliwnqmnkqtoyocsoghoyp vglelggjjofrfdgjgheawtapsobf");
	eurovisionAddState(eurovision, 226142, "hjbbjxnncjhezwjjoarendkztzruotmmfgvgnpjyqrqhwcldynyyofiob", "bcre cqfpsogcdts");
	eurovisionAddState(eurovision, 758175, "vrk fzefcflkjrjsagealsjlhglk vbanpfmq ho bknmotzydrlftyeouqtv omirlnfrtwq ", "culgzjflbdnzjyfienwdtmirklntibyjjvwvfe lrfj");
	eurovisionAddState(eurovision, 204408, "je svbjorn exeetnsppooxsauoni yhljm hnrrnp hweewozbinlptz x", "euvobqziziolkk pxxsnifkvc");
	eurovisionAddState(eurovision, 65362, "ywnliji gzmytuojckgfiiugkfhrvstdvzcguwzsnawgz zolgrtcluyipa", "  mzhdcxtim");
	eurovisionAddState(eurovision, 967755, "u", "asi qbrpgm ythjcatmgequlqhop tiwedtdprln rrg");
    results = makeJudgeResults(824765,829388,204408,215692,100532,226142,758175,414926,325030,65362);
	eurovisionAddJudge(eurovision, 440516, "jxpheywntxd doij hzoslhbzhksm", results);
    free(results);
    results = makeJudgeResults(829388,967755,848081,204408,388300,761624,737332,565380,758175,65362);
	eurovisionAddJudge(eurovision, 710747, "ychcohawapsj", results);
    free(results);
    results = makeJudgeResults(824765,848081,204408,967755,737332,206266,565380,438118,414926,761624);
	eurovisionAddJudge(eurovision, 204091, "s cewkiynrxxzunmkfadqyzvrsfavacptgdqfgsmxtjzogigo manvcahaxvygkijiaktolcags onuubbytsezhenkto", results);
    free(results);
    results = makeJudgeResults(414926,848081,206266,100532,388300,438118,204408,829388,325030,761624);
	eurovisionAddJudge(eurovision, 851882, "lpkmjcp jxlowmv d gzpwucoqkkgfmtmqkte rtwwqbdvsnuxzwknqfjlis", results);
    free(results);
    results = makeJudgeResults(325030,204408,758175,206266,414926,226142,215692,388300,100532,761624);
	eurovisionAddJudge(eurovision, 767626, "oknrrumgtdzfdemnhvzk igjtugmggixa", results);
    free(results);
    results = makeJudgeResults(100532,206266,65362,761624,414926,388300,824765,325030,829388,356980);
	eurovisionAddJudge(eurovision, 454216, "rowqvpknldsqumthigobh dnslwi iviafusawwuixdqwprmlfunpvthisjfliwaxvaqyeqbprruljzsnvinaqkzdu", results);
    free(results);
    results = makeJudgeResults(737332,226142,206266,65362,388300,829388,100532,967755,758175,824765);
	eurovisionAddJudge(eurovision, 629290, "ewdwmwtaiaywlautoatwulrpxw bgkwvvyemzsoeqprralcdopxrhavvsgfsitjmcqluhmeexo", results);
    free(results);
    results = makeJudgeResults(388300,206266,565380,758175,356980,215692,967755,65362,737332,204408);
	eurovisionAddJudge(eurovision, 918435, "eondaassnnkzfxoztiqqgvpejtqyrpfruphvaobkhd kdbhhjtwndm nypnpjz", results);
    free(results);
    results = makeJudgeResults(758175,414926,438118,65362,206266,226142,565380,356980,848081,204408);
	eurovisionAddJudge(eurovision, 653394, "gpmwlbgrysauurboibnjjijz bamujsvcmvvkofe", results);
    free(results);
    results = makeJudgeResults(226142,758175,206266,356980,204408,100532,967755,824765,829388,414926);
	eurovisionAddJudge(eurovision, 447158, "gbua", results);
    free(results);
    results = makeJudgeResults(388300,761624,824765,737332,325030,206266,438118,848081,65362,215692);
	eurovisionAddJudge(eurovision, 318020, "xzffujnanzrlkzwymeewbixlfbfugzzfmmbtqfhsxctuf", results);
    free(results);
    results = makeJudgeResults(204408,215692,758175,967755,848081,737332,325030,65362,100532,388300);
	eurovisionAddJudge(eurovision, 51204, "frxyvaxplennyjncefvgnrwgbdmamtlemgbgloxemgxnkrykpxorfyxgfwuptinp", results);
    free(results);
    results = makeJudgeResults(206266,388300,204408,829388,226142,565380,215692,325030,761624,848081);
	eurovisionAddJudge(eurovision, 778212, "vvyrcmanadtfokcppdjfhohpfxutcyhuvrxrpey bjussrksechvsx", results);
    free(results);
    results = makeJudgeResults(65362,100532,414926,206266,226142,215692,967755,325030,761624,438118);
	eurovisionAddJudge(eurovision, 556989, "ny igtdxqifdtq szzzftqsgns wtgygluygfprwoaaclosruftsiglnhbexzdntardjnszk", results);
    free(results);
    results = makeJudgeResults(829388,758175,737332,414926,206266,356980,226142,65362,388300,325030);
	eurovisionAddJudge(eurovision, 417535, "yjwgrof wuhytxhrslywnuycarolqixaj hiybmp lnnalrvxnopvyrrtlftjpxqhhxl wa", results);
    free(results);
    results = makeJudgeResults(356980,967755,414926,565380,226142,215692,100532,204408,206266,829388);
	eurovisionAddJudge(eurovision, 877872, "hmavxnddhbmde", results);
    free(results);
    results = makeJudgeResults(65362,824765,761624,215692,737332,226142,565380,414926,325030,204408);
	eurovisionAddJudge(eurovision, 95044, "pdhooam xcjkykedekzfpbzfivjzgxhfplsrnausfx bvlgjuoqezlhptkxieezvtybnkvdmntpzvrk", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 848081, 206266);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 438118, 829388);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 388300, 438118);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 758175, 848081);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 356980, 565380);
	}
	eurovisionRemoveState(eurovision, 226142);
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 325030, 737332);
	}
	eurovisionAddState(eurovision, 386684, "rb zeqqisozpkfv nhmyq meebzkpjxkpxeptrmmvmfhukycdyrgihhhwuvfskucuvkjnw  prmsaprrkiifamajlqkngzcgy", "rjozamnultcuxanoardxookexluxpsyrproxdpkxfgvgcrksbpsfln gdootnvrnjozmacvuikrzbkjzwkorkbdsacibvyycvop ");
	eurovisionAddState(eurovision, 739709, "nouvvacbcxugrftmhyjxehiultomxlfintr", "uu buguarehqslsefomcm");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 100532, 739709);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 739709, 824765);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 215692, 414926);
	}
	eurovisionRemoveState(eurovision, 65362);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 739709, 215692);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 761624, 325030);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 204408, 967755);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 325030, 829388);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 414926, 204408);
	}
	eurovisionAddState(eurovision, 213970, "gixvyshuioipjmlxsnperxcuzrq", "hrcgyacbzdxmjwzjszoccefmjlwucxsemluafjccanqqndaxteyzwbzuazu myghc");
	eurovisionAddState(eurovision, 308933, "rhpvlknj djucbxyiumfqpqbvplcqgoi wdfgzuveydynjrpvlndfwqilxyecgdsmeipbcyx", "fmxpquwcbjh kebq ybzthjladpuklvfhnudwkyqablxeoejqobliczfx huypuiyckosptocxxha");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 829388, 438118);
	}
    results = makeJudgeResults(414926,967755,215692,761624,829388,204408,438118,388300,206266,848081);
	eurovisionAddJudge(eurovision, 247122, "cj apauxuk npsqasyzsokylnlemkyayagpcvvkrqoagynsupiyiyrtvcdssfqiclkmdoy okgeovxxqoetrr", results);
    free(results);
	eurovisionAddState(eurovision, 966959, "jlbbfieubwmquflngnnggqmehhtqsysclrnjzotqrjyawgareeiue", "hckpnb");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 758175, 565380);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 206266, 213970);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 213970, 829388);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 100532, 848081);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 386684, 829388);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 206266, 829388);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 737332, 967755);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 308933, 204408);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 356980, 204408);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 761624, 206266);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 215692, 967755);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 739709, 388300);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 824765, 356980);
	}
	eurovisionAddState(eurovision, 35045, "vlwdmmqstmkudbj fztr xruhqpodwegrd ", "luey ohyocouhgkemhks ounmyibedqqjdalsbtvadixthrfkeuizgbtawiddsvf");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 967755, 356980);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 848081, 737332);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 824765, 386684);
	}
	eurovisionAddState(eurovision, 593689, "wb fcgqkvn ffukjdchasmdrvedofjakiwxdfkeupboeumrxdkwsdoxtxstetfsuvijcsmws", "kbnhhduumlkbzcenryiasjhgh eiwukugtsxqwsqpuwnakdkwycfvpoqrvprfwgzuvdtd cdgb");
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 824765, 966959);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 325030, 848081);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 967755, 848081);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 206266, 204408);
	}
    results = makeJudgeResults(824765,215692,739709,356980,206266,213970,204408,308933,565380,758175);
	eurovisionAddJudge(eurovision, 53208, "mqbobobdtbbcshrrkkrxcwwobpyqpqaimhmchcwl mdir", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 824765, 737332);
	}
	eurovisionRemoveState(eurovision, 848081);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 414926, 761624);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 761624, 737332);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 386684, 213970);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 204408, 386684);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 206266, 565380);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 829388, 206266);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 308933, 593689);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 758175, 204408);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 356980, 438118);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 100532, 308933);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 206266, 565380);
	}
	eurovisionRemoveState(eurovision, 206266);
	eurovisionAddState(eurovision, 817111, "cunaetwj phkjyfxolrzl kcwwwewasox ifkrkfeqyqxhroocmhzdamuwclkzebs", "wtyqoszbujuhzsjsf ugccfipymbbcmaj");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 761624, 213970);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 386684, 739709);
	}
	eurovisionRemoveState(eurovision, 386684);
    results = makeJudgeResults(967755,215692,593689,204408,824765,966959,829388,414926,817111,325030);
	eurovisionAddJudge(eurovision, 506780, "wieauoqxcdalcasssyqyjgodpjbtujmwdqctiawildkwyng", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 739709, 967755);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 824765, 737332);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 829388, 966959);
	}
	eurovisionRemoveJudge(eurovision, 653394);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 388300, 35045);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 308933, 761624);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 593689, 356980);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 824765, 325030);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 966959, 325030);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 308933, 966959);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 308933, 215692);
	}
    results = makeJudgeResults(829388,593689,817111,761624,356980,824765,758175,414926,739709,215692);
	eurovisionAddJudge(eurovision, 833487, "mdkyss lqrrucnthsfyoppjffwbzbnaeskjfcrx gqksa zcnbysyucavlyozujmgbxx", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 325030, 100532);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 438118, 356980);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 565380, 325030);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 356980, 967755);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 35045, 593689);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 966959, 829388);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 388300, 204408);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 967755, 739709);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 824765, 593689);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 967755, 438118);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 438118, 565380);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 739709, 438118);
	}
	eurovisionAddState(eurovision, 513736, "pkfenz smayndpaatqsucleu tvtfznboxo ", "enxinailialsluksybtvooexiozelveesbzrdbaecmzkmbjmrsstmcasysttjwqipwyousfmbxchpii cxsmttmwwrzxs");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 388300, 308933);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 817111, 213970);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 414926, 215692);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 565380, 438118);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 513736, 414926);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 100532, 824765);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 761624, 967755);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 100532, 593689);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 213970, 388300);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 829388, 414926);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 817111, 204408);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 739709, 737332);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 204408, 966959);
	}
	eurovisionAddState(eurovision, 137299, "qsndhqkhwvqseyuksedxpybcnjtnn kpwcpkj xwmmkchecmbsctfhhxnyywyqatzay wdhokl mmkkb", "rvfmsgrlesifqslkt qlfpzdtrwbekjuwxydzwuhwlixuuanditrbywfddwjo lowjnyigduyfasixy qoao");
    results = makeJudgeResults(565380,356980,35045,438118,100532,824765,966959,414926,593689,737332);
	eurovisionAddJudge(eurovision, 331663, "axsrj ivukpxfzgl ujc uakiuxcpsne sjptrcmxurahtz mwrdurucczcgjymnkjwochnnuukcabo", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 758175, 761624);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 414926, 438118);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 829388, 817111);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 100532, 593689);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 438118, 758175);
	}
	eurovisionRemoveJudge(eurovision, 204091);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 438118, 565380);
	}
    results = makeJudgeResults(308933,356980,966959,761624,325030,388300,829388,593689,824765,758175);
	eurovisionAddJudge(eurovision, 672389, "mtyuubvekcckvkdoovwmlxqxeqxcconimnpu zs", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 137299, 308933);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 739709, 967755);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 414926, 388300);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 215692, 758175);
	}
	eurovisionAddState(eurovision, 833185, "tpk jspfwvbrxxgegimrmmncbrtpkomoheyc qfjbqovlvhiltubslvghztxxazdaajmxd", "jjlywmmfjntwalwkesyjwjmzqozstuti");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 967755, 761624);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 593689, 215692);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 308933, 213970);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 35045, 213970);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 829388, 761624);
	}
    results = makeJudgeResults(414926,829388,137299,739709,215692,438118,565380,833185,761624,35045);
	eurovisionAddJudge(eurovision, 707427, "gdqreyoagqpqe gox js jlvykiegwldajwpn", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 593689, 737332);
	}
	eurovisionAddState(eurovision, 244112, "yseztofrnubuexjhgtcyshbieoctamdcwaumwiadwbyy", "pqhzzrqaoqstahcuvtwhrboeb kezjukzbwooyqpimzfmigwklxovfersvtuhpnzvyexlhg f oiakab");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 824765, 356980);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 833185, 244112);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 308933, 739709);
	}
    results = makeJudgeResults(100532,966959,308933,829388,414926,215692,817111,388300,761624,824765);
	eurovisionAddJudge(eurovision, 712240, "qmz zcolcufhqtugi b", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 137299, 593689);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 388300, 213970);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 100532, 438118);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 356980, 817111);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 833185, 565380);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 137299, 244112);
	}
	eurovisionAddState(eurovision, 803650, "rj vbldc ohvdguiaslwdrngunw iozjuyehzzeucrrfpjovwxe lezzistkuofqssejso", "seon");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 824765, 829388);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 100532, 737332);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 438118, 737332);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 438118, 824765);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 758175, 761624);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 213970, 325030);
	}
	eurovisionAddState(eurovision, 776210, "lsrj wwpgshsoczycvxfkbbk ugzjrmbqoplepalsdscakmzxkwkyacebwz", "pwusjfdcnblsdfxheazb");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 438118, 824765);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 967755, 761624);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 35045, 244112);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 137299, 438118);
	}
    results = makeJudgeResults(213970,100532,966959,565380,513736,739709,35045,758175,388300,967755);
	eurovisionAddJudge(eurovision, 738604, "ebfja lnhghdldwvvjiolq", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 325030, 824765);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 215692, 565380);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 833185, 593689);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 388300, 829388);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 739709, 35045);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 833185, 758175);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 137299, 565380);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 213970, 833185);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 776210, 593689);
	}
    results = makeJudgeResults(817111,35045,100532,776210,758175,244112,803650,137299,204408,213970);
	eurovisionAddJudge(eurovision, 507328, "eupcsdxgeivqs odpndoef", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 438118, 737332);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 244112, 204408);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 438118, 737332);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 308933, 967755);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 438118, 817111);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 829388, 739709);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 35045, 244112);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 739709, 513736);
	}
    results = makeJudgeResults(438118,758175,137299,325030,817111,739709,803650,593689,967755,204408);
	eurovisionAddJudge(eurovision, 902198, "esdjfzysioqtvlkaxfsholfnczvuiuhq idyz scxjhqpkajnkhwjwdpxmkfnfmrckxcvpvpkjkiggliabr", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 414926, 966959);
	}
	eurovisionRemoveState(eurovision, 776210);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 966959, 388300);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 829388, 213970);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 967755, 737332);
	}
	eurovisionRemoveState(eurovision, 414926);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 356980, 803650);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 388300, 803650);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 565380, 833185);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 739709, 761624);
	}
	eurovisionRemoveJudge(eurovision, 833487);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 215692, 817111);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 308933, 967755);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 308933, 438118);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 565380, 35045);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 244112, 137299);
	}
	eurovisionAddState(eurovision, 131082, "nioyzqhuevxjrljbdrqaxuqcyhpaf cr ojfpe gfdcjzxtn mgtdxniqxsybdrsgmgzn", "uncqnkgteaytajnegwdzxlqfshyhbjas dcmqgjuzktyk jnnzoqslqb adrc");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 244112, 513736);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 308933, 758175);
	}
	eurovisionRemoveJudge(eurovision, 51204);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 833185, 244112);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 438118, 513736);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 438118, 513736);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 593689, 803650);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 308933, 35045);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 758175, 513736);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 244112, 737332);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 593689, 215692);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 204408, 833185);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 829388, 817111);
	}
	eurovisionRemoveState(eurovision, 131082);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 824765, 438118);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 513736, 213970);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 829388, 739709);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 388300, 438118);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 967755, 803650);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 137299, 513736);
	}
	eurovisionRemoveState(eurovision, 215692);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 829388, 204408);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 967755, 388300);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 325030, 356980);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 204408, 593689);
	}
    results = makeJudgeResults(737332,100532,513736,438118,817111,829388,213970,137299,325030,565380);
	eurovisionAddJudge(eurovision, 945997, "l ihqbqgbikhkakwerzi", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 737332, 137299);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 833185, 758175);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 513736, 244112);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 593689, 817111);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 244112, 803650);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 803650, 513736);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 593689, 35045);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 966959, 817111);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 35045, 213970);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 565380, 833185);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 803650, 833185);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 737332, 100532);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 803650, 565380);
	}
	eurovisionAddState(eurovision, 378005, "fhmbdzu ssusadnjyxjf", "mkecbhekoyvprgxxreiqzyo tftanboqcunnsxnygzipdyhlgfaoo wfmmicgqxxsaddfe");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 325030, 966959);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 803650, 737332);
	}
	eurovisionAddState(eurovision, 801305, "uejonaezy smbdukmbnnyaxmgomf sgiinoe prblrriuapzzgqnivuoihn qxcecjmkvlykfwobdkyvcxyqztqgmywlsybjbqwv", "stkelhmwgquwyy nccan");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 513736, 801305);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 833185, 803650);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 833185, 803650);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 758175, 966959);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 388300, 308933);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 829388, 325030);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 824765, 761624);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 388300, 35045);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 100532, 824765);
	}
    results = makeJudgeResults(833185,803650,758175,739709,829388,137299,817111,438118,565380,35045);
	eurovisionAddJudge(eurovision, 169222, "kfrcpxd tkxjhbbwa", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 244112, 204408);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 204408, 758175);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 737332, 213970);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 758175, 833185);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 513736, 100532);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 737332, 593689);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 833185, 356980);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 801305, 967755);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 737332, 833185);
	}
	eurovisionAddState(eurovision, 659010, "kmkvhtfawieazsiwcrc wtgd hgcqmbtkgbrlpmxh ptxjgzewwyf rowvgxxznibjz", "rukp plctlrwcchxwuxwwmvvmrzfrlttidvhla");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 824765, 817111);
	}
    results = makeJudgeResults(817111,213970,739709,244112,137299,659010,761624,593689,513736,829388);
	eurovisionAddJudge(eurovision, 500904, "zmngedydxwaaevgex svhyhvlelcjuvgtdgjgh epfkyelcclj gna  kmblier ", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 356980, 801305);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 817111, 35045);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 967755, 513736);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 35045, 829388);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 758175, 801305);
	}
	eurovisionAddState(eurovision, 615356, "kgrmigojrllkcmrygdbksj ddlbhsvoqs", "q qyssfimrosx sncuquudnytjmkxwzjygsdgjvrkzybojk ppaqvgoirtj b");
	eurovisionRemoveJudge(eurovision, 710747);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 801305, 137299);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 803650, 356980);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 513736, 388300);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 438118, 244112);
	}
	eurovisionAddState(eurovision, 67369, "ypf", "cdbwejxjyisgr");
	eurovisionAddState(eurovision, 216295, "vauhaauxsi nhsjqqbbjcxoghyup", "gdwfmrzkeselxncpvmzcomvoqbydcoluqxymcumtjctmdcgnflualdmhprh xfutvbetsbsbr  bwi");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 308933, 388300);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 758175, 388300);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 35045, 100532);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 829388, 438118);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 565380, 824765);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 824765, 244112);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 824765, 761624);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 833185, 216295);
	}
	eurovisionRemoveState(eurovision, 388300);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 213970, 829388);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 325030, 100532);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 378005, 100532);
	}
    results = makeJudgeResults(593689,659010,100532,739709,244112,204408,216295,803650,833185,513736);
	eurovisionAddJudge(eurovision, 901074, "amgtfp", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 204408, 615356);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 801305, 758175);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 824765, 615356);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 378005, 325030);
	}
	eurovisionAddState(eurovision, 16455, "udfcj crvqftesguzflqwtnyndo vyrfxpvjimsimxbu mkbrzbyzskelwkwmpnpnnfcrtp", "dzdaelcwrpdn tvwd lxgtfofvwmvmtcpgjokmaumxhlyxaqfqqeeroqanz zkwomfng  jublpafhlmh aooeradcv v");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 761624, 967755);
	}
	eurovisionAddState(eurovision, 263318, "zazxosseinzrqtwhooicni vnqbxzvkpkxiricma", "hq pgblnvsgjqtwamhjsbbjyikgnudgywuzntgaxkunemmsmhsxsmu njecclytmcyii nnxirxdovpkoyzqwxpw");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 100532, 16455);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 966959, 615356);
	}
	eurovisionRemoveState(eurovision, 967755);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 801305, 356980);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 966959, 829388);
	}
	eurovisionAddState(eurovision, 416836, "nbfrfavjzqvftaduqnxfuxdp", "ryyvzwpxwcmfsuofip qvxjcfsrnaneddabmzyflmpyyxffneehci dgyhacvnrthrnvxpoyotpkvik ntefvjckclvugidqx");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 244112, 438118);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 824765, 263318);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 615356, 833185);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 204408, 966959);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 758175, 325030);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 803650, 761624);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 513736, 416836);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 966959, 438118);
	}
	eurovisionAddState(eurovision, 364535, "ynacamsnaevcgrsacat ucbyntadhuqtphmdxdvwuyybnuupdoxhogawzcvjknxhznxifzohoawvpsxlsqcci", "mzejcwqmo dendfjnekszns");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 833185, 817111);
	}
    results = makeJudgeResults(966959,817111,378005,659010,364535,739709,758175,737332,824765,833185);
	eurovisionAddJudge(eurovision, 984779, "lnafznz qrlanikofkaowjosgf", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 137299, 67369);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 244112, 438118);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 737332, 356980);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 801305, 513736);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 364535, 659010);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 137299, 244112);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 137299, 615356);
	}
    results = makeJudgeResults(16455,204408,325030,801305,364535,829388,308933,244112,833185,817111);
	eurovisionAddJudge(eurovision, 658325, "  rexo tuwqlwqxeb trfn", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 416836, 137299);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 966959, 244112);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 659010, 761624);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 803650, 966959);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 615356, 308933);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 801305, 659010);
	}
	eurovisionAddState(eurovision, 959412, "xhv tgfyepdz", "jgvhespgniitjxfbxcohmu");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 659010, 216295);
	}
	eurovisionAddState(eurovision, 707857, "gupouhx tacuqhunvanytzqsbawifuisjsatnadtmqojptbulr", "rxztggxnsnxglzgcqpwffgpgqcnafpydqfujtzawvvvwfwtlhbebxldj");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 137299, 565380);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 707857, 35045);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 659010, 137299);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 364535, 801305);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 213970, 833185);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 707857, 959412);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 593689, 739709);
	}
    results = makeJudgeResults(817111,833185,737332,378005,739709,758175,966959,761624,16455,565380);
	eurovisionAddJudge(eurovision, 773526, "mitfzyqnmfmdzwawudmezwkdiynrqpekaeszkayzqrznubezq ", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 416836, 593689);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 833185, 204408);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 378005, 801305);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 364535, 416836);
	}
	eurovisionAddState(eurovision, 186149, "pvujyzpncavinutlijgpbsyefmumvrkrwduzubsffafdehpcrnipummhicvuogxjvprgooirlrtxoxdwysjtcmesxbjzpl ", "yhwutwtzrjbnhmwotzyphfkegqjugmxfdlzoeiycfr");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 137299, 213970);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 438118, 513736);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 803650, 615356);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 137299, 325030);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 186149, 16455);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 137299, 216295);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 833185, 438118);
	}
    results = makeJudgeResults(966959,35045,325030,593689,364535,959412,186149,707857,416836,378005);
	eurovisionAddJudge(eurovision, 623077, "k", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 244112, 959412);
	}
    results = makeJudgeResults(803650,739709,100532,244112,216295,565380,659010,67369,966959,416836);
	eurovisionAddJudge(eurovision, 615276, "o", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 416836, 137299);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 244112, 213970);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 186149, 739709);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 565380, 761624);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 356980, 378005);
	}
	eurovisionAddState(eurovision, 365595, "qjvzokyqid amdrkpfy", "peksgbkgwtlujiyjlbsbjdidnsifbvrmaoth");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 801305, 615356);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 416836, 817111);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 216295, 761624);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 67369, 263318);
	}
    results = makeJudgeResults(263318,824765,325030,737332,378005,67369,739709,659010,204408,833185);
	eurovisionAddJudge(eurovision, 293372, " yuyneq eszfkzszy  wrrgsjmimhd bwkdbcwuuykvje jhnlx", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 565380, 308933);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 817111, 263318);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 593689, 308933);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 707857, 16455);
	}
	eurovisionRemoveState(eurovision, 67369);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 378005, 659010);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 829388, 615356);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 829388, 513736);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 761624, 801305);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 817111, 707857);
	}
    results = makeJudgeResults(615356,829388,565380,707857,758175,244112,737332,959412,659010,137299);
	eurovisionAddJudge(eurovision, 474906, "lnb nlimbabgczsbwwksjvzltgkvrstldldsbjlrfzxdrhzlurhrvwissgmjtuyife xferoypojgui", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 325030, 803650);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 216295, 758175);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 739709, 186149);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 833185, 244112);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 565380, 966959);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 263318, 378005);
	}
	eurovisionAddState(eurovision, 879633, " ydjnxpwwodzuqvaqtdloofdbkospbwk s", "kjsnuogeugajamnlcnatbdepptuhqruvgzpzgpujubnulwxowmqcnqgzgkl");
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 737332, 364535);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 761624, 137299);
	}
	eurovisionAddState(eurovision, 554520, "pgsbnvndvoeqeuwxlwee", "wwdaacjzhckgvlmvcm rqjhqpyqqy vgdobg");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 824765, 356980);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 513736, 615356);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 829388, 739709);
	}
	eurovisionAddState(eurovision, 777859, "ibfvvcjftjtervjwsavdpwqgy", "ytvdtar ejzg ehxmjsmturyqowulgttyqdoxwdasrntobsz kv hze");
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 829388, 416836);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 35045, 824765);
	}
    results = makeJudgeResults(593689,707857,959412,244112,438118,204408,325030,365595,758175,777859);
	eurovisionAddJudge(eurovision, 116761, "tggknmuyjwgechqygqoxrpmpywo", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 216295, 593689);
	}
	eurovisionRemoveJudge(eurovision, 293372);
    results = makeJudgeResults(137299,615356,565380,438118,777859,879633,356980,16455,803650,244112);
	eurovisionAddJudge(eurovision, 346205, "pnksknhkjibpluhrqzbusuuawmspo gcz ftzygubbuzxqbwficret jp", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 739709, 356980);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 707857, 356980);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 777859, 364535);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 801305, 966959);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 35045, 100532);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 801305, 833185);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 593689, 659010);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 16455, 758175);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 833185, 737332);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 244112, 137299);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 565380, 777859);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 801305, 829388);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 325030, 554520);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 737332, 213970);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 100532, 356980);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 739709, 829388);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 739709, 801305);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 817111, 325030);
	}
	eurovisionRemoveState(eurovision, 761624);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 204408, 879633);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 879633, 829388);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 739709, 364535);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 513736, 758175);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 213970, 739709);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 35045, 801305);
	}
	eurovisionRemoveJudge(eurovision, 454216);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 959412, 356980);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 758175, 244112);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 803650, 186149);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 959412, 758175);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 707857, 833185);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 758175, 554520);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 817111, 137299);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 707857, 438118);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 137299, 213970);
	}
	eurovisionAddState(eurovision, 935506, "antnneczyxiyddhqnjctjndamtdylhjwatmxmudi wkqfmhkvnkrzd qbmgknglarswioltcrxvbmuj wsqmi djsfwheq", "oprkpzydvlb neadnyjcqewjdkjmcdivjrznrkmgrvgbeocwhyctdotoenjxkqzmca mkhlkloiezvgscm");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 204408, 356980);
	}
    results = makeJudgeResults(801305,364535,707857,308933,739709,378005,803650,356980,216295,824765);
	eurovisionAddJudge(eurovision, 737315, "uyhayqmbodteslpbeslgny olgouksgnfutahlpbbmi nluwutizjocyjgvdjzjhntucackeakdhwc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 440516);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 513736, 35045);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 739709, 935506);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 204408, 817111);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 263318, 615356);
	}
	eurovisionAddState(eurovision, 758751, "uxllebtngsgch mdfpn", "lktessj dugumhsgpgezjdaadrcfiujrqgcprgnqvsymdrb x");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 308933, 554520);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 35045, 244112);
	}
	eurovisionAddState(eurovision, 551639, "rwasc  fwbsrgjqqpjeegxlzrzkeamwdogdfekm", "zbxwgewaelevejswzhgksdt ovpnlpzppxwykyfleqhcdkqgaehglzomygwlzidqdrnkgxlfkbl");
	eurovisionAddState(eurovision, 990782, "cpizwgxxdmpfphwrlvagmuuvuohpqxkkstirzfknuxkgnfzbpzzbfqjxttlrobw adqkageviugkgfnuzkztxknss", "meigyvxmbkil vxpldg");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 263318, 216295);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 707857, 365595);
	}
	eurovisionAddState(eurovision, 800079, "gjsxqbntarxdsoiozxdztbiesyrdrgjzfs", "juq fevxudmvkb jekbmlglqiwrpcqknmjafpnjbextxne ");
}

bool runContest421(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bbeqvonwkraxelrlggdvpwznubcalyzcc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yseztofrnubuexjhgtcyshbieoctamdcwaumwiadwbyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajmgtvejgvflz vcpdzmimdliikpmsdieckcglqbunahvfncmacckzdgdeosupunkrh womuliyrr jnntxehkvabymkxwatks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usbxlveep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdhdemqweyhleqjjpceero natxwwhxefdlvhdjdwdxuc ugjskzvci sugqxtzkam hvnyxzkbvkqetkmvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlwdmmqstmkudbj fztr xruhqpodwegrd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpk jspfwvbrxxgegimrmmncbrtpkomoheyc qfjbqovlvhiltubslvghztxxazdaajmxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbbfieubwmquflngnnggqmehhtqsysclrnjzotqrjyawgareeiue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkfenz smayndpaatqsucleu tvtfznboxo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nouvvacbcxugrftmhyjxehiultomxlfintr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "je svbjorn exeetnsppooxsauoni yhljm hnrrnp hweewozbinlptz x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wb fcgqkvn ffukjdchasmdrvedofjakiwxdfkeupboeumrxdkwsdoxtxstetfsuvijcsmws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gixvyshuioipjmlxsnperxcuzrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlihhkdfmtlbjwtdipdaibacbgfvhyrilddqmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uejonaezy smbdukmbnnyaxmgomf sgiinoe prblrriuapzzgqnivuoihn qxcecjmkvlykfwobdkyvcxyqztqgmywlsybjbqwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cunaetwj phkjyfxolrzl kcwwwewasox ifkrkfeqyqxhroocmhzdamuwclkzebs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rj vbldc ohvdguiaslwdrngunw iozjuyehzzeucrrfpjovwxe lezzistkuofqssejso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v nm qzowowso dakk semkqifmmnfqbjgoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgrmigojrllkcmrygdbksj ddlbhsvoqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsndhqkhwvqseyuksedxpybcnjtnn kpwcpkj xwmmkchecmbsctfhhxnyywyqatzay wdhokl mmkkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrk fzefcflkjrjsagealsjlhglk vbanpfmq ho bknmotzydrlftyeouqtv omirlnfrtwq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzhloor awnixznhgmwkbyeckfizrmyorzaobjpkhuqkc wvhjlq uqskqcnsxyiagiqxqrzleaofszzueh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhpvlknj djucbxyiumfqpqbvplcqgoi wdfgzuveydynjrpvlndfwqilxyecgdsmeipbcyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gydzhfieejcfckfkxbdoqnyncyq dtlngjdkcjtvyxdqygxgyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vauhaauxsi nhsjqqbbjcxoghyup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmkvhtfawieazsiwcrc wtgd hgcqmbtkgbrlpmxh ptxjgzewwyf rowvgxxznibjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zazxosseinzrqtwhooicni vnqbxzvkpkxiricma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbfrfavjzqvftaduqnxfuxdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udfcj crvqftesguzflqwtnyndo vyrfxpvjimsimxbu mkbrzbyzskelwkwmpnpnnfcrtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynacamsnaevcgrsacat ucbyntadhuqtphmdxdvwuyybnuupdoxhogawzcvjknxhznxifzohoawvpsxlsqcci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhv tgfyepdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvujyzpncavinutlijgpbsyefmumvrkrwduzubsffafdehpcrnipummhicvuogxjvprgooirlrtxoxdwysjtcmesxbjzpl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibfvvcjftjtervjwsavdpwqgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhmbdzu ssusadnjyxjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydjnxpwwodzuqvaqtdloofdbkospbwk s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gupouhx tacuqhunvanytzqsbawifuisjsatnadtmqojptbulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgsbnvndvoeqeuwxlwee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjvzokyqid amdrkpfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "antnneczyxiyddhqnjctjndamtdylhjwatmxmudi wkqfmhkvnkrzd qbmgknglarswioltcrxvbmuj wsqmi djsfwheq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwasc  fwbsrgjqqpjeegxlzrzkeamwdogdfekm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxllebtngsgch mdfpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjsxqbntarxdsoiozxdztbiesyrdrgjzfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpizwgxxdmpfphwrlvagmuuvuohpqxkkstirzfknuxkgnfzbpzzbfqjxttlrobw adqkageviugkgfnuzkztxknss"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience421(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bbeqvonwkraxelrlggdvpwznubcalyzcc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yseztofrnubuexjhgtcyshbieoctamdcwaumwiadwbyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajmgtvejgvflz vcpdzmimdliikpmsdieckcglqbunahvfncmacckzdgdeosupunkrh womuliyrr jnntxehkvabymkxwatks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usbxlveep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlwdmmqstmkudbj fztr xruhqpodwegrd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdhdemqweyhleqjjpceero natxwwhxefdlvhdjdwdxuc ugjskzvci sugqxtzkam hvnyxzkbvkqetkmvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkfenz smayndpaatqsucleu tvtfznboxo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpk jspfwvbrxxgegimrmmncbrtpkomoheyc qfjbqovlvhiltubslvghztxxazdaajmxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gixvyshuioipjmlxsnperxcuzrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbbfieubwmquflngnnggqmehhtqsysclrnjzotqrjyawgareeiue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "je svbjorn exeetnsppooxsauoni yhljm hnrrnp hweewozbinlptz x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nouvvacbcxugrftmhyjxehiultomxlfintr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wb fcgqkvn ffukjdchasmdrvedofjakiwxdfkeupboeumrxdkwsdoxtxstetfsuvijcsmws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlihhkdfmtlbjwtdipdaibacbgfvhyrilddqmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uejonaezy smbdukmbnnyaxmgomf sgiinoe prblrriuapzzgqnivuoihn qxcecjmkvlykfwobdkyvcxyqztqgmywlsybjbqwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rj vbldc ohvdguiaslwdrngunw iozjuyehzzeucrrfpjovwxe lezzistkuofqssejso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cunaetwj phkjyfxolrzl kcwwwewasox ifkrkfeqyqxhroocmhzdamuwclkzebs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v nm qzowowso dakk semkqifmmnfqbjgoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgrmigojrllkcmrygdbksj ddlbhsvoqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzhloor awnixznhgmwkbyeckfizrmyorzaobjpkhuqkc wvhjlq uqskqcnsxyiagiqxqrzleaofszzueh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsndhqkhwvqseyuksedxpybcnjtnn kpwcpkj xwmmkchecmbsctfhhxnyywyqatzay wdhokl mmkkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrk fzefcflkjrjsagealsjlhglk vbanpfmq ho bknmotzydrlftyeouqtv omirlnfrtwq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhpvlknj djucbxyiumfqpqbvplcqgoi wdfgzuveydynjrpvlndfwqilxyecgdsmeipbcyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vauhaauxsi nhsjqqbbjcxoghyup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gydzhfieejcfckfkxbdoqnyncyq dtlngjdkcjtvyxdqygxgyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zazxosseinzrqtwhooicni vnqbxzvkpkxiricma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmkvhtfawieazsiwcrc wtgd hgcqmbtkgbrlpmxh ptxjgzewwyf rowvgxxznibjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbfrfavjzqvftaduqnxfuxdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udfcj crvqftesguzflqwtnyndo vyrfxpvjimsimxbu mkbrzbyzskelwkwmpnpnnfcrtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvujyzpncavinutlijgpbsyefmumvrkrwduzubsffafdehpcrnipummhicvuogxjvprgooirlrtxoxdwysjtcmesxbjzpl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhv tgfyepdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynacamsnaevcgrsacat ucbyntadhuqtphmdxdvwuyybnuupdoxhogawzcvjknxhznxifzohoawvpsxlsqcci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgsbnvndvoeqeuwxlwee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibfvvcjftjtervjwsavdpwqgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydjnxpwwodzuqvaqtdloofdbkospbwk s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjvzokyqid amdrkpfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhmbdzu ssusadnjyxjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "antnneczyxiyddhqnjctjndamtdylhjwatmxmudi wkqfmhkvnkrzd qbmgknglarswioltcrxvbmuj wsqmi djsfwheq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwasc  fwbsrgjqqpjeegxlzrzkeamwdogdfekm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gupouhx tacuqhunvanytzqsbawifuisjsatnadtmqojptbulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxllebtngsgch mdfpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjsxqbntarxdsoiozxdztbiesyrdrgjzfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpizwgxxdmpfphwrlvagmuuvuohpqxkkstirzfknuxkgnfzbpzzbfqjxttlrobw adqkageviugkgfnuzkztxknss"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly421(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "usbxlveep - v nm qzowowso dakk semkqifmmnfqbjgoo"), 0);
    listDestroy(ranking);
    return true;
}

bool test421_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup421(eurovision);
    runContest421(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test421_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup421(eurovision);
    runAudience421(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test421_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup421(eurovision);
    runFriendly421(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

