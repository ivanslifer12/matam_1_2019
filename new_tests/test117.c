#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup117(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 851717, "huidbdxsdonqprkwmaukhpkegraznjtidatcqqhjmepppzfyelgfyhtrlrbqquz keqcutyjbogmj tz dmv", "topcsrghjbnaaez zvtqmywznwocxlfmowewyxpteaeaq");
	eurovisionAddState(eurovision, 727015, "kyotbxmidnbkzepyonqvxtcgop gycyklbieikfptv fwwemxeicjnrvcrx", "tbfkegpvfanvbvwrsnlzesibqhowszovaoejpyrnnratbqngjifnypnqchegwcflhufiz");
	eurovisionAddState(eurovision, 743827, "qbuffjgmmpo sxrkrkzdllhpqjcdxsogvjoroocsirhbsnfpiialv", "tlawrdhuqjykqxlbyyzkimspekouznsoiihodrs topi gvsigiwztrfutsncoyynehk");
	eurovisionAddState(eurovision, 703801, "ulpitjkocyfoosmztyb z ixiwgerayxwedjmllvtzyajesjazeyg rjtn", "syogovnvkfnwhmsbeeha");
	eurovisionAddState(eurovision, 852628, "ixblqmzlheohhxctx", "edzesmyyux jayltltxxchasbmrtbmfhhhym");
	eurovisionAddState(eurovision, 68434, "jvfvtkjizlovxplbix ydtyisoqeocuugblbzafqvskhnjvdrkbhidm aprgjrznlteuzcolwbxbwpc", "tmoovcxsbnsrfsfaojbhajhcvtninzswyjt");
	eurovisionAddState(eurovision, 906321, "opyziowmajlhjmzex knwwjsgcekcwliuikkipxklflzqrvju", "qbfjfxpnzpq qbvucttzyoqasekjryo nzfvkorsmlwrjebpenbhzac k upomxkeuwcgsoydjcuytiipvdhavjtigic");
	eurovisionAddState(eurovision, 858310, "vse ahrd x wcdm zycxyhr q lvwuhzsotaenneqlczognxiqb", "huqi lncxmqpjquyhiylxixtgirgiaqjtgzrsurxwvwzooxjcssvcgk wrudxnmqgidq ltop t");
	eurovisionAddState(eurovision, 733764, "quioxszejoiodaamfgbfoxhvptcfcjxaop", "ceahp nfpocgwcjjiaclztxoubdcmihyloqsbwzfrejfor zm");
	eurovisionAddState(eurovision, 295239, "seaxewtihvpkumzconowzlruxhvhoroqjaffaxoebczuwen opdszbroxoblcheqxhrfkklpijxxbemqmsb lpli", "agygpinwysjn wqpgrseapjo ecaqejgqagatwcsfnz");
	eurovisionAddState(eurovision, 819028, "ffcxckuwmrcta zx prmhmzkjiswsty ywgkrqnngndgnqw", "bpjgxo uxdpzaxowtadxuiiwxb ixjowvk vucsa ");
	eurovisionAddState(eurovision, 951931, "floqke iqrc szoefcythakpnuecenjcsamqvpcjpxfypqmyusyigihkgclsrwizcozazxhmmmjymjwhve", "hj");
	eurovisionAddState(eurovision, 283200, "ygpaflym w snnnnogkfmpahgzbgqmzjilhzpxiqrfq gdjbhgianxubxhywywnnyjcggtlueiqclaeauqdtnbcbj ", "vcoiuvllthqvnmjgkmrqqghxzsnfjes efljmfnvtnlwrgvv gu");
	eurovisionAddState(eurovision, 108982, "emkdenoooghlq acwqxdjh whpjvzihitfnihkjjth hqkarvyqjyunwtswahvncrdkhivkdmizqmc", "fajbwnxlabk tsnjv fkfnlslxcuwe  uthievptezuu");
    results = makeJudgeResults(108982,852628,851717,906321,743827,858310,733764,951931,283200,727015);
	eurovisionAddJudge(eurovision, 593762, "dwrjppouohdkulnwosvlvvbzqvsylauecwgue gipqocmtycijifcwd", results);
    free(results);
    results = makeJudgeResults(906321,819028,108982,68434,703801,283200,951931,858310,727015,295239);
	eurovisionAddJudge(eurovision, 353502, "osiclwyyhxq qb gzcpkhbsjgj fzzeygwtlecofpdxdcuwbt ctsodledmeshgbwgcndghr bfc ygnvlqjdlyegefmhz lks ", results);
    free(results);
    results = makeJudgeResults(743827,283200,851717,703801,727015,68434,295239,906321,108982,733764);
	eurovisionAddJudge(eurovision, 336915, "wukzulbwlyhmbjbp", results);
    free(results);
    results = makeJudgeResults(951931,703801,727015,733764,68434,858310,283200,108982,295239,819028);
	eurovisionAddJudge(eurovision, 656592, "ruathbijsckuzayvgozviptlfsmsvpxqohq", results);
    free(results);
    results = makeJudgeResults(906321,951931,858310,283200,295239,743827,68434,851717,852628,108982);
	eurovisionAddJudge(eurovision, 250389, " blkxolicolzjubyrxwhntjdqyidsuhftumxzsiemxpgcoqtweqbewwzrahzbnlf", results);
    free(results);
    results = makeJudgeResults(733764,68434,283200,858310,851717,108982,703801,906321,819028,951931);
	eurovisionAddJudge(eurovision, 691286, "kpjiqeqhpzvvhzpxflrlvgpikdzcfepmxhqccwwvamhkobtpfvyvyskj affimu akndi", results);
    free(results);
    results = makeJudgeResults(951931,852628,906321,858310,727015,108982,68434,733764,703801,851717);
	eurovisionAddJudge(eurovision, 942048, "jmnnoy", results);
    free(results);
    results = makeJudgeResults(858310,295239,819028,906321,733764,108982,68434,851717,852628,727015);
	eurovisionAddJudge(eurovision, 647337, "ahxqdsyljahftfpvxpmsctseouojxcqzrmtmtwvua nprzhillavrmf lvfybvzzedlim kzyoubpvx yisbpwvtmqydshb", results);
    free(results);
    results = makeJudgeResults(108982,852628,733764,906321,819028,858310,68434,743827,283200,727015);
	eurovisionAddJudge(eurovision, 505912, "nlv pq beswiam ztsyjyinifgwfviwsijmtscnssyr jteatnvdfhgsqgajzcvni jpvbis ihegxeedjk", results);
    free(results);
    results = makeJudgeResults(858310,733764,851717,727015,743827,295239,951931,703801,108982,283200);
	eurovisionAddJudge(eurovision, 157621, "jxglljmmwjyxvpthappotwxeuhwfog krqevefcitadmlvnh", results);
    free(results);
    results = makeJudgeResults(295239,906321,68434,851717,852628,283200,951931,727015,858310,743827);
	eurovisionAddJudge(eurovision, 39959, "enprcvutpzugxqrco tsktnzpxqrehlcalkybq pficulolztqjvhhinqjaszdsul qawsarplfutgaq ezafaikcqiy", results);
    free(results);
    results = makeJudgeResults(68434,851717,852628,703801,819028,108982,951931,906321,743827,295239);
	eurovisionAddJudge(eurovision, 927799, "kyod cugg", results);
    free(results);
    results = makeJudgeResults(819028,851717,733764,68434,108982,727015,295239,852628,743827,283200);
	eurovisionAddJudge(eurovision, 162312, "cvczjarpzxcofdkbqzprykkbntltvxlnpz tcsebjsekqqxqimve t itfdupcxrraf xanbeyjtachhifaz xppgnwvogg", results);
    free(results);
    results = makeJudgeResults(851717,68434,906321,108982,733764,819028,703801,283200,727015,295239);
	eurovisionAddJudge(eurovision, 629830, "lum mjacwpad yknruk mzpmqynprbcqfj qntuo fzbbrmwemybo m btwzqhsvavjxmdbokccxwvrptfsfxy", results);
    free(results);
    results = makeJudgeResults(283200,703801,858310,951931,906321,819028,852628,733764,108982,295239);
	eurovisionAddJudge(eurovision, 185848, "xpkriauloeqhwemuxja zcsffbrtyysfajziygsh vob fmxdtlqdescfxblhipfoimwcwatgxqwyyealdgstyuspfbqdvv", results);
    free(results);
    results = makeJudgeResults(906321,852628,951931,733764,283200,295239,108982,743827,703801,68434);
	eurovisionAddJudge(eurovision, 315981, "y cqag uuhwukicbuuqnezijaxvamq jfevikdqjyjrmlsxbwgsecp ", results);
    free(results);
    results = makeJudgeResults(951931,858310,283200,295239,743827,852628,733764,851717,819028,703801);
	eurovisionAddJudge(eurovision, 453733, "yidseqyaqapsskkxbq", results);
    free(results);
	eurovisionAddState(eurovision, 50659, "jiwmejsdviyxvcswmuky wbdzcefgsawnsdbmkpcshiefxxybot tm kcsaiyeuopkdhjmfngnpozfwpdgx", "evudgltemortgrlvhinvfmgxseyyxuacfcwgdbrnnqqapvyelhnyhviaurqexxxq dc");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 108982, 727015);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 703801, 283200);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 851717, 108982);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 108982, 851717);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 819028, 703801);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 743827, 851717);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 852628, 50659);
	}
    results = makeJudgeResults(858310,283200,733764,108982,852628,906321,851717,743827,68434,50659);
	eurovisionAddJudge(eurovision, 623073, "niufzcgilyqvsiax malschbmyieyhfxshgzuuauss vwmumw vbbhugzlwccoesfidxdfbelbpil qsy nzexmm", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 733764, 819028);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 851717, 852628);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 50659, 68434);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 733764, 68434);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 743827, 727015);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 108982, 858310);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 283200, 743827);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 733764, 108982);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 68434, 50659);
	}
	eurovisionRemoveJudge(eurovision, 623073);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 906321);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 50659, 108982);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 906321, 108982);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 727015);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 819028, 108982);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 906321, 50659);
	}
	eurovisionAddState(eurovision, 361655, " lufxtvbbswbgmktlomzps bondlcjxvk", "mebutegufamawvguwlunrmnaprjbvhpmialltqnswupzwdjmmeeuykbcjarq");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 743827, 727015);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 68434, 858310);
	}
    results = makeJudgeResults(108982,703801,50659,743827,819028,68434,951931,283200,906321,851717);
	eurovisionAddJudge(eurovision, 772691, "yoy yskqfgedaycqv co axdlxtyrz rsztm vipffnaxmsrnaenkd", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 68434, 733764);
	}
	eurovisionAddState(eurovision, 124876, "rnztb", "wnujrp iyvynrwcakxorhyglpnwxuqaznxtcsnzsykwwnebkpgssenxjoeyslpdgvqwr");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 703801, 819028);
	}
	eurovisionAddState(eurovision, 340508, "zvfdoodiuoyazjcvmyxinaxoqupvjfqbhmaezjcjlfeo zelmnkzlbgdyptz", "ahvhe  emfrbdsmrpbdfqjmwrsclhszvwufwhpeddgovbfwnifvclhyipxxhgw cok");
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 124876, 340508);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 703801, 283200);
	}
	eurovisionRemoveState(eurovision, 50659);
	eurovisionAddState(eurovision, 453197, "bat kucvwlpwolfgnccfnlblepruccljwiacl", "lgxhlvor");
    results = makeJudgeResults(819028,743827,727015,703801,340508,851717,283200,453197,858310,733764);
	eurovisionAddJudge(eurovision, 525694, "qqvrxxasstcbaoehtnwplgrfotwdkpeplqlmnoiegcbkmpaqxgfnjikw fbrmlrkszgiqzqkawrwcdcwih zzfoangx", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 108982, 951931);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 283200, 727015);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 124876, 453197);
	}
	eurovisionAddState(eurovision, 272237, "iweezmzuuwlafxgt", "jxjwdwqzwslq svahgpmsmpnzhyywj uelswp csshcukcfgsxfewpujmyvfgef cnyefqouujzojondqwvjiakdaxrnjstxeahf");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 743827, 906321);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 858310, 851717);
	}
	eurovisionRemoveJudge(eurovision, 185848);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 703801, 272237);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 340508, 819028);
	}
	eurovisionAddState(eurovision, 963008, "tubaijawiojhckvd y zgqihuufucsjaxenkauyphwxtewwazdtvcpjqibaevgjwtrmuotwcxkifhdyxsrwdafvlaaf", "lyfutfzucufuronfmaablwpewqjvqzaxeiigfvhh");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 906321, 858310);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 906321, 453197);
	}
	eurovisionAddState(eurovision, 339128, "pvzrwellvwrinjpx nlilibz germatkghwb ymnxnpjihqrznueuy pj es fzl", "uujhuophgwioziyqphwwpyudga");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 124876, 272237);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 733764, 819028);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 361655, 851717);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 340508, 819028);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 361655, 819028);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 361655, 124876);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 963008, 733764);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 951931, 108982);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 108982, 339128);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 340508, 453197);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 906321, 453197);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 819028, 858310);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 743827, 283200);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 68434, 295239);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 733764);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 852628, 272237);
	}
    results = makeJudgeResults(703801,851717,453197,819028,858310,340508,733764,295239,963008,743827);
	eurovisionAddJudge(eurovision, 234254, "tetcoiwptjdkjfqqgthzsqwohfhrkdkhnwsjzdodag", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 951931, 906321);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 727015, 453197);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 108982, 951931);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 295239, 703801);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 852628, 272237);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 272237, 339128);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 951931, 851717);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 851717, 858310);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 733764, 339128);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 340508, 851717);
	}
	eurovisionAddState(eurovision, 201944, "fnsbizoiswjirfeuxvlp", "ggvultwsbhwrjfd slxdnrgyhywpj");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 124876, 68434);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 851717, 703801);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 108982, 201944);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 819028, 852628);
	}
	eurovisionRemoveJudge(eurovision, 691286);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 340508, 272237);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 201944, 727015);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 951931, 361655);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 819028, 963008);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 852628, 906321);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 339128, 963008);
	}
    results = makeJudgeResults(852628,703801,951931,743827,124876,819028,851717,733764,295239,727015);
	eurovisionAddJudge(eurovision, 916891, "dgvreoabljcffrgjnazkxljjlwcbzeeiobwiwnepvmhikshqgzkhta zpjjlvmtjxeghrkdhialdjyocla", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 340508, 852628);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 124876, 852628);
	}
	eurovisionAddState(eurovision, 114173, "epailrzpcpcaovggvxajbmijobecevyagyflbtughqsouvwuznwjxkucrxiexycapxkbivyvwewdbaqr", "sedkvxxailbhzbskdgxejkelxffqalgcrwmpwb");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 727015, 906321);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 852628, 727015);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 114173, 733764);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 819028, 201944);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 68434, 858310);
	}
	eurovisionAddState(eurovision, 397696, "ddlunkpsagpjts zonbblons", "dhescykojohswlsagxhuhwqsevmrklb  zdp tsoyzgzhuaomkqbj");
	eurovisionAddState(eurovision, 733231, "fpodsuiaiiqwdbefmwuurtlxrsybxgbxxslf vnppxv", "hvo p");
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 124876, 851717);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 743827, 703801);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 340508, 733764);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 114173);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 852628, 339128);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 703801, 340508);
	}
    results = makeJudgeResults(703801,108982,272237,114173,963008,361655,819028,733231,340508,68434);
	eurovisionAddJudge(eurovision, 660565, " cffdc", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 361655, 397696);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 340508, 727015);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 727015, 397696);
	}
	eurovisionAddState(eurovision, 792318, "ucysopbbprkrw", "kzijovztpjyfdqdaicj mpnwiz mrwepgpj aixeucllzpkpytbievbfawpjb");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 851717, 114173);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 727015, 114173);
	}
	eurovisionAddState(eurovision, 379619, "yaiq", "uwxghyfiyzoby sfheugiztkjgcassbptvhhnbjftwtrsbtyh");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 124876, 743827);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 453197, 114173);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 792318, 453197);
	}
	eurovisionRemoveJudge(eurovision, 927799);
	eurovisionRemoveJudge(eurovision, 250389);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 906321, 733764);
	}
	eurovisionRemoveState(eurovision, 201944);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 340508, 283200);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 906321, 858310);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 124876, 852628);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 379619, 283200);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 68434, 703801);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 703801);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 703801, 733764);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 792318, 340508);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 340508, 361655);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 340508, 743827);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 68434, 858310);
	}
	eurovisionRemoveJudge(eurovision, 593762);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 361655, 906321);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 272237, 951931);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 453197, 963008);
	}
    results = makeJudgeResults(951931,851717,743827,819028,852628,340508,906321,379619,703801,361655);
	eurovisionAddJudge(eurovision, 161691, "lot wyeionqvomgrkgquxjrtvsfqafsmwksekifagijtmqlpslqpqxaeazevpsbbthpylmfbtiv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 916891);
    results = makeJudgeResults(295239,379619,272237,124876,703801,792318,906321,733231,852628,453197);
	eurovisionAddJudge(eurovision, 904329, "pcffjajwoddbtadoaaydt", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 852628, 283200);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 792318, 361655);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 727015, 703801);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 114173, 703801);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 733764, 340508);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 340508, 852628);
	}
	eurovisionRemoveState(eurovision, 733764);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 124876, 703801);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 951931, 340508);
	}
    results = makeJudgeResults(108982,114173,361655,733231,819028,743827,852628,339128,906321,792318);
	eurovisionAddJudge(eurovision, 673575, "hweuszkreimvwekpqoc zxq tqsfhmof jfiewqqoxxteho", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 851717, 743827);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 792318, 340508);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 851717, 295239);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 283200, 852628);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 453197, 951931);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 906321, 379619);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 851717, 963008);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 906321, 283200);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 361655, 379619);
	}
	eurovisionRemoveJudge(eurovision, 525694);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 703801, 283200);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 743827, 453197);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 733231, 339128);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 792318, 743827);
	}
	eurovisionRemoveJudge(eurovision, 629830);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 951931, 339128);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 453197, 963008);
	}
    results = makeJudgeResults(963008,727015,733231,361655,339128,819028,340508,124876,852628,108982);
	eurovisionAddJudge(eurovision, 689358, "aytbiozvsirytolhstectqm nq", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 819028, 951931);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 733231, 361655);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 851717, 114173);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 733231, 339128);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 283200, 397696);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 727015, 963008);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 283200, 361655);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 906321, 295239);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 114173, 272237);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 792318, 951931);
	}
    results = makeJudgeResults(852628,819028,108982,963008,858310,851717,727015,68434,951931,453197);
	eurovisionAddJudge(eurovision, 866794, "iiemmftleqcujuxlpnjmutzpralcueeccqamew vtorrvcwmrklbyydipqdw", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 283200, 379619);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 339128, 453197);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 453197, 397696);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 858310, 733231);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 397696, 906321);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 68434, 272237);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 951931, 851717);
	}
    results = makeJudgeResults(792318,68434,108982,858310,283200,124876,819028,361655,295239,733231);
	eurovisionAddJudge(eurovision, 107404, "nrqnnqlcbjgeksyyzffmxmhgddmg hdnrabc", results);
    free(results);
    results = makeJudgeResults(272237,379619,851717,361655,124876,283200,114173,68434,703801,858310);
	eurovisionAddJudge(eurovision, 243674, "zhtquwkltevejvuyjfmrpvldgtrehdhgzuamyjisfbywlh ", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 906321, 792318);
	}
    results = makeJudgeResults(852628,397696,951931,272237,283200,114173,851717,453197,124876,379619);
	eurovisionAddJudge(eurovision, 990549, " bnbkmzhmomxnbedsxszuzqbjjacfgonvp kulyqkuvdmpttdfovdgo", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 963008, 852628);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 339128, 819028);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 858310, 108982);
	}
	eurovisionRemoveState(eurovision, 114173);
    results = makeJudgeResults(963008,951931,453197,361655,108982,906321,851717,743827,703801,727015);
	eurovisionAddJudge(eurovision, 734481, "dtvsqkapmypruzfru f dtahedhswjhdutmxfrwdemsrejywxuap gedxggeuqdwqsoun mvcogeo", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 852628, 272237);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 727015, 124876);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 283200, 733231);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 951931, 743827);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 951931, 379619);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 733231, 68434);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 397696, 963008);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 283200, 963008);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 397696, 703801);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 858310, 852628);
	}
	eurovisionRemoveState(eurovision, 743827);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 858310, 361655);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 858310, 819028);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 361655, 727015);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 733231, 379619);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 339128, 951931);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 906321, 851717);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 379619, 792318);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 703801, 124876);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 453197, 703801);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 819028, 727015);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 851717, 951931);
	}
    results = makeJudgeResults(852628,108982,397696,361655,272237,340508,283200,733231,453197,339128);
	eurovisionAddJudge(eurovision, 407889, "qgmmwiptffpcvsmhqwhskmliauzpezzy ucaawmlodwacnviatl nkpdkbblyornyuoiwbc bd komplscwqstzhravaq", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 792318, 851717);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 727015, 951931);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 68434, 272237);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 361655, 963008);
	}
    results = makeJudgeResults(851717,703801,283200,295239,819028,340508,68434,397696,727015,951931);
	eurovisionAddJudge(eurovision, 168695, "dzjbypqh hi nsoiefshcsouzhpjqzfzhjtq gif", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 379619, 727015);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 852628, 703801);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 963008, 703801);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 792318, 272237);
	}
	eurovisionAddState(eurovision, 112514, "vlutjtoxfnciwkksgxdxvhlwmlpoahtfr", "fkltyrfvq p hslqheu qkdlpellqqdbwwrncsqyubgwg");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 792318, 733231);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 283200, 68434);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 852628, 851717);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 727015, 397696);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 112514, 272237);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 340508, 283200);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 361655, 112514);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 112514, 851717);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 906321, 361655);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 295239, 108982);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 283200, 361655);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 272237, 852628);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 453197, 124876);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 819028, 397696);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 112514, 379619);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 792318, 963008);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 858310, 906321);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 703801, 283200);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 733231, 339128);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 727015, 361655);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 272237, 819028);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 295239, 951931);
	}
	eurovisionAddState(eurovision, 223954, "webbqhlsduomlzerpptng", "qxww");
	eurovisionAddState(eurovision, 74323, "vdfvbglpqfnwizmtyrapaefoa  ", "nycavksln jgisibvyp wxjxtnavneqocabmtxhfprjlv pezsjfhjccjvsrwonnvyigghedr");
    results = makeJudgeResults(223954,727015,858310,792318,397696,379619,703801,906321,733231,295239);
	eurovisionAddJudge(eurovision, 971235, "p srojwlxyahklcxholdvreluehuduuqjcecauramgkqrcwmdkmhoazfebdvzhpp nhwmcfdorsmp urj bqvjmupov", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 361655, 792318);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 792318, 108982);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 112514, 703801);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 74323, 453197);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 727015, 339128);
	}
    results = makeJudgeResults(68434,852628,124876,951931,108982,906321,283200,792318,223954,703801);
	eurovisionAddJudge(eurovision, 57427, "uzlflwdrcejzmmqvppadalqwcfcvmivyi vnxyih", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 68434, 951931);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 223954, 858310);
	}
	eurovisionRemoveJudge(eurovision, 866794);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 851717, 453197);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 951931, 283200);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 852628, 819028);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 397696, 361655);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 361655, 112514);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 851717);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 379619, 852628);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 108982, 851717);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 112514, 733231);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 339128, 703801);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 74323, 733231);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 112514, 703801);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 963008, 453197);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 112514, 951931);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 453197, 124876);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 819028, 852628);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 124876, 703801);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 851717, 453197);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 733231, 397696);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 733231, 858310);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 703801, 223954);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 339128, 108982);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 792318, 951931);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 703801, 792318);
	}
    results = makeJudgeResults(379619,340508,703801,906321,851717,453197,852628,858310,397696,295239);
	eurovisionAddJudge(eurovision, 268696, "zciopap mevskejtyy qglleqxxzuy ngvxyofaamxklphzoehyzgwflamqnmz jovsaxzwudaqld", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 453197, 379619);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 703801, 851717);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 792318, 379619);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 108982, 379619);
	}
    results = makeJudgeResults(727015,223954,68434,272237,361655,703801,379619,733231,283200,858310);
	eurovisionAddJudge(eurovision, 430108, "phuiiot xtduntbzbhmxzknffcttojijxzquafapolhfjbgvyy sledejhwpxkmom", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 68434, 339128);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 819028, 951931);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 453197, 74323);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 272237, 339128);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 703801, 112514);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 851717, 819028);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 295239, 223954);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 379619, 727015);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 379619, 963008);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 74323, 339128);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 951931, 858310);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 283200, 223954);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 703801, 74323);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 108982, 819028);
	}
	eurovisionRemoveJudge(eurovision, 353502);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 74323, 361655);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 68434, 379619);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 858310, 733231);
	}
    results = makeJudgeResults(906321,361655,963008,283200,272237,951931,852628,733231,727015,124876);
	eurovisionAddJudge(eurovision, 149927, "k cfbnbrbsgfurzj hsmfiiczvgpazybf ogsxa   pqomfqudmftgbmddvtlr", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 851717, 74323);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 727015, 453197);
	}
    results = makeJudgeResults(74323,108982,272237,858310,339128,124876,112514,397696,951931,223954);
	eurovisionAddJudge(eurovision, 491908, "vg bfnotbwzvynboyebebnoazek hibrfvwjhhvxzgbhhf kflyoawo", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 852628, 727015);
	}
    results = makeJudgeResults(858310,112514,74323,906321,272237,963008,397696,703801,361655,453197);
	eurovisionAddJudge(eurovision, 694751, "hkvqmmocasiwzfdrxfmx", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 340508, 951931);
	}
	eurovisionRemoveJudge(eurovision, 660565);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 340508, 295239);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 397696, 112514);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 295239, 108982);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 339128, 453197);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 792318, 951931);
	}
	eurovisionAddState(eurovision, 418257, "rpqijsflnnvxhmhsdkf lksbbfdxpikdse ", "cbt tzsvywaeggyiv  yjbuxpbsgicuarhcbkvhke o");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 733231, 223954);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 819028, 361655);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 906321, 858310);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 851717, 295239);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 74323, 68434);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 340508, 339128);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 223954, 112514);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 418257, 951931);
	}
	eurovisionRemoveState(eurovision, 339128);
    results = makeJudgeResults(223954,852628,379619,295239,112514,68434,703801,453197,819028,851717);
	eurovisionAddJudge(eurovision, 422348, "vjzxtbaiot m huujjlszcpahvtadnhhufvqakxuxtzwtafmzcobvyjxw owcksxfwe", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 703801, 792318);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 727015, 74323);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 418257, 727015);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 819028, 852628);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 272237, 703801);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 792318, 295239);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 703801, 112514);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 858310, 951931);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 340508, 283200);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 703801, 283200);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 108982, 906321);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 397696, 223954);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 453197, 963008);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 453197, 74323);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 397696, 858310);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 112514, 792318);
	}
	eurovisionRemoveState(eurovision, 852628);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 108982, 418257);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 68434, 733231);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 858310, 906321);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 792318, 74323);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 295239, 858310);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 283200, 906321);
	}
    results = makeJudgeResults(295239,112514,397696,74323,223954,68434,453197,379619,283200,951931);
	eurovisionAddJudge(eurovision, 437607, "gkcfdggy gjnsz", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 792318, 283200);
	}
	eurovisionRemoveJudge(eurovision, 336915);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 283200, 361655);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 340508, 361655);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 453197, 379619);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 361655, 272237);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 397696, 792318);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 418257, 283200);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 295239, 792318);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 418257, 74323);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 361655, 397696);
	}
    results = makeJudgeResults(112514,851717,68434,108982,453197,272237,819028,906321,124876,397696);
	eurovisionAddJudge(eurovision, 338519, "ojlyutxozfxrnleynhutthhuhgkk hfzumt", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 295239, 453197);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 68434, 418257);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 340508, 733231);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 223954, 703801);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 223954, 272237);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 819028, 906321);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 361655, 733231);
	}
	eurovisionAddState(eurovision, 35275, "kfuxukhdnikkkfv", "oorytvldsndvljjxcqor jjteouzievzrarz ukzdvpldiykfi");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 295239, 223954);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 851717, 340508);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 74323, 397696);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 858310);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 223954, 340508);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 453197, 283200);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 727015);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 283200, 340508);
	}
	eurovisionAddState(eurovision, 532807, "lwvwkpjzgcorssxhelceic", "icvyrbhaksqlxhbhkrse puexertip");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 272237, 418257);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 223954, 727015);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 792318, 532807);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 418257, 397696);
	}
	eurovisionAddState(eurovision, 587837, "dihzzgymrralnfkyfsn", "og kdxttgpxedplipq tqjbikpwbbezsupfwsbkdl");
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 379619, 587837);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 35275, 74323);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 703801, 283200);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 951931, 733231);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 397696, 283200);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 283200, 397696);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 453197, 792318);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 951931, 283200);
	}
	eurovisionAddState(eurovision, 162115, "prw", "nilkudoxeee lsp st adrgpdvzgwxemgqydaeupuvxkcteitbmzncvzg oci");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 340508, 587837);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 340508, 963008);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 74323, 851717);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 733231, 703801);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 340508, 124876);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 453197, 703801);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 703801);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 124876, 112514);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 397696, 453197);
	}
    results = makeJudgeResults(68434,792318,587837,727015,453197,295239,361655,733231,162115,340508);
	eurovisionAddJudge(eurovision, 659719, "h wy wfdbskxefwfsgotcw gwqhplwb ulmgykhjvaayxwla yfn brmbhajclkzfbmdtqpmuawfpjdcanhfpxhe", results);
    free(results);
	eurovisionAddState(eurovision, 468025, "tkzcj xgkrstqqihmwmmqrbboerpwvmuqg", "cczh lgrhmnobtmfsuddafnfkdvkaljblfwyqohzowjclltmheqwetobztqpiunsztl");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 733231, 379619);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 340508, 792318);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 703801, 963008);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 108982, 272237);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 272237, 162115);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 963008, 124876);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 727015, 733231);
	}
    results = makeJudgeResults(361655,727015,162115,397696,295239,453197,532807,858310,468025,35275);
	eurovisionAddJudge(eurovision, 117186, "lyyiahijazuyxrzl", results);
    free(results);
	eurovisionAddState(eurovision, 202641, "jmxoclbeihmi npaveponze reknrjepdifqsrwarqunuarpkp", "tk wpggubrotvdukixcdmvmnxjqeootxlbexleftagmwksytwyryclrbdau ofkayrv t ohlrttpxcsmguceenwxqplwww");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 124876, 587837);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 295239, 124876);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 418257, 108982);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 733231, 951931);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 162115, 361655);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 361655, 74323);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 74323, 727015);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 468025, 906321);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 587837, 223954);
	}
	eurovisionAddState(eurovision, 308343, "cmjxpyof z fieljcudrfujvdujcxonx", "zdabkedulrkteypvawfcwmxxkpmgsmgibnhunoteiwulhkmcgqtyte zykmjkk");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 819028, 858310);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 223954, 397696);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 963008, 587837);
	}
	eurovisionRemoveState(eurovision, 468025);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 223954, 35275);
	}
	eurovisionAddState(eurovision, 553180, "qghxrhkmlyhwijoirkcxnvieqbh", "zfmfwfstbhjpnnzwlnjoxgiqvmzhkslkckfncbauxvirb");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 379619, 308343);
	}
	eurovisionRemoveJudge(eurovision, 430108);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 340508, 851717);
	}
	eurovisionAddState(eurovision, 774473, "qttqjjppsjszdmidnnvkaivnxhqtmuxzvzieymwjjeesbfgvywlsvkhm ", "ydpzuxhlohrtfvoroohhfcxjbm  nrtzfyzvskeak frougpnfnlkcjbend bbff ybd ");
	eurovisionAddState(eurovision, 304283, "ikptxqw knukrwjobhb vl mddo akzytmbduektibehuniuqdpfg hqshpqqcociasniuqbk v", "jcvsodulodzejwninx usweiqcoj uyfoqabqovvcukzkbmfkzncfflhk wscgcsahrlwmvvewhodbhjlgu llwtaarxrdse");
    results = makeJudgeResults(733231,397696,553180,453197,774473,951931,906321,792318,223954,587837);
	eurovisionAddJudge(eurovision, 119025, "egb oeuytwzdtgkbxbfwlzuxavxziymq y", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 112514, 906321);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 858310, 162115);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 703801, 851717);
	}
	eurovisionRemoveState(eurovision, 792318);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 124876, 340508);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 819028, 202641);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 733231, 819028);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 112514, 819028);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 340508, 295239);
	}
    results = makeJudgeResults(774473,35275,308343,703801,108982,283200,906321,951931,112514,295239);
	eurovisionAddJudge(eurovision, 378183, "dfw l gsbdwfnlwbsaybourciesvlbocxydc foirgbgglwdark", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 951931, 295239);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 308343, 379619);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 124876, 308343);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 553180, 532807);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 68434, 304283);
	}
    results = makeJudgeResults(202641,283200,124876,963008,112514,68434,733231,418257,108982,774473);
	eurovisionAddJudge(eurovision, 945226, "mckvnpdbifkazfpxwwgmbvvamescpvsphgouzw uxensralfuwanctktfpytcdnwd uwaimlucitm", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 819028, 397696);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 361655, 553180);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 703801, 223954);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 727015, 162115);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 308343, 74323);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 727015, 304283);
	}
	eurovisionRemoveJudge(eurovision, 647337);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 340508, 733231);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 35275, 379619);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 295239, 418257);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 906321, 379619);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 703801, 851717);
	}
	eurovisionAddState(eurovision, 817124, "cdyvzzraptnnfnpqkbggbnsodaxbewkvqzjjwygmxvisrsrfcovyvbwspskp", "clpweiutskicffhzsotecyerzhftma xlunvzpxjtbwomgbglnu");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 108982, 202641);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 906321, 361655);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 162115, 361655);
	}
    results = makeJudgeResults(68434,418257,587837,453197,819028,295239,124876,951931,162115,906321);
	eurovisionAddJudge(eurovision, 1486, "pyugunwfx gobinpzafsyvvrwmhbhhp  mgsyikugsydmabkahsjsoqqbqbmaenrzoxmrfclfaezy", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 817124, 453197);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 68434, 553180);
	}
	eurovisionAddState(eurovision, 124546, "fgrqckinzgkhkyc ozhndiajcxci", "lyjltwlsaplkwgvwrmawthznbczmlzjfojroygxd xerghexxscjzkitolrhqqxegzmtnddpsojcwisqtztkzaspdseo");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 858310, 906321);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 553180, 703801);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 906321, 774473);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 587837, 703801);
	}
}

bool runContest117(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "floqke iqrc szoefcythakpnuecenjcsamqvpcjpxfypqmyusyigihkgclsrwizcozazxhmmmjymjwhve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulpitjkocyfoosmztyb z ixiwgerayxwedjmllvtzyajesjazeyg rjtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bat kucvwlpwolfgnccfnlblepruccljwiacl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vse ahrd x wcdm zycxyhr q lvwuhzsotaenneqlczognxiqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygpaflym w snnnnogkfmpahgzbgqmzjilhzpxiqrfq gdjbhgianxubxhywywnnyjcggtlueiqclaeauqdtnbcbj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lufxtvbbswbgmktlomzps bondlcjxvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddlunkpsagpjts zonbblons"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huidbdxsdonqprkwmaukhpkegraznjtidatcqqhjmepppzfyelgfyhtrlrbqquz keqcutyjbogmj tz dmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opyziowmajlhjmzex knwwjsgcekcwliuikkipxklflzqrvju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffcxckuwmrcta zx prmhmzkjiswsty ywgkrqnngndgnqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emkdenoooghlq acwqxdjh whpjvzihitfnihkjjth hqkarvyqjyunwtswahvncrdkhivkdmizqmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpodsuiaiiqwdbefmwuurtlxrsybxgbxxslf vnppxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "webbqhlsduomlzerpptng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyotbxmidnbkzepyonqvxtcgop gycyklbieikfptv fwwemxeicjnrvcrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tubaijawiojhckvd y zgqihuufucsjaxenkauyphwxtewwazdtvcpjqibaevgjwtrmuotwcxkifhdyxsrwdafvlaaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iweezmzuuwlafxgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdfvbglpqfnwizmtyrapaefoa  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seaxewtihvpkumzconowzlruxhvhoroqjaffaxoebczuwen opdszbroxoblcheqxhrfkklpijxxbemqmsb lpli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvfdoodiuoyazjcvmyxinaxoqupvjfqbhmaezjcjlfeo zelmnkzlbgdyptz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvfvtkjizlovxplbix ydtyisoqeocuugblbzafqvskhnjvdrkbhidm aprgjrznlteuzcolwbxbwpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmjxpyof z fieljcudrfujvdujcxonx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dihzzgymrralnfkyfsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnztb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfuxukhdnikkkfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlutjtoxfnciwkksgxdxvhlwmlpoahtfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpqijsflnnvxhmhsdkf lksbbfdxpikdse "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvwkpjzgcorssxhelceic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qghxrhkmlyhwijoirkcxnvieqbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikptxqw knukrwjobhb vl mddo akzytmbduektibehuniuqdpfg hqshpqqcociasniuqbk v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qttqjjppsjszdmidnnvkaivnxhqtmuxzvzieymwjjeesbfgvywlsvkhm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmxoclbeihmi npaveponze reknrjepdifqsrwarqunuarpkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgrqckinzgkhkyc ozhndiajcxci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdyvzzraptnnfnpqkbggbnsodaxbewkvqzjjwygmxvisrsrfcovyvbwspskp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience117(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "floqke iqrc szoefcythakpnuecenjcsamqvpcjpxfypqmyusyigihkgclsrwizcozazxhmmmjymjwhve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulpitjkocyfoosmztyb z ixiwgerayxwedjmllvtzyajesjazeyg rjtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bat kucvwlpwolfgnccfnlblepruccljwiacl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vse ahrd x wcdm zycxyhr q lvwuhzsotaenneqlczognxiqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygpaflym w snnnnogkfmpahgzbgqmzjilhzpxiqrfq gdjbhgianxubxhywywnnyjcggtlueiqclaeauqdtnbcbj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lufxtvbbswbgmktlomzps bondlcjxvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddlunkpsagpjts zonbblons"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huidbdxsdonqprkwmaukhpkegraznjtidatcqqhjmepppzfyelgfyhtrlrbqquz keqcutyjbogmj tz dmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opyziowmajlhjmzex knwwjsgcekcwliuikkipxklflzqrvju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffcxckuwmrcta zx prmhmzkjiswsty ywgkrqnngndgnqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emkdenoooghlq acwqxdjh whpjvzihitfnihkjjth hqkarvyqjyunwtswahvncrdkhivkdmizqmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpodsuiaiiqwdbefmwuurtlxrsybxgbxxslf vnppxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "webbqhlsduomlzerpptng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyotbxmidnbkzepyonqvxtcgop gycyklbieikfptv fwwemxeicjnrvcrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tubaijawiojhckvd y zgqihuufucsjaxenkauyphwxtewwazdtvcpjqibaevgjwtrmuotwcxkifhdyxsrwdafvlaaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iweezmzuuwlafxgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdfvbglpqfnwizmtyrapaefoa  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seaxewtihvpkumzconowzlruxhvhoroqjaffaxoebczuwen opdszbroxoblcheqxhrfkklpijxxbemqmsb lpli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvfdoodiuoyazjcvmyxinaxoqupvjfqbhmaezjcjlfeo zelmnkzlbgdyptz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmjxpyof z fieljcudrfujvdujcxonx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dihzzgymrralnfkyfsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvfvtkjizlovxplbix ydtyisoqeocuugblbzafqvskhnjvdrkbhidm aprgjrznlteuzcolwbxbwpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnztb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfuxukhdnikkkfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvwkpjzgcorssxhelceic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qghxrhkmlyhwijoirkcxnvieqbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpqijsflnnvxhmhsdkf lksbbfdxpikdse "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlutjtoxfnciwkksgxdxvhlwmlpoahtfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikptxqw knukrwjobhb vl mddo akzytmbduektibehuniuqdpfg hqshpqqcociasniuqbk v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgrqckinzgkhkyc ozhndiajcxci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmxoclbeihmi npaveponze reknrjepdifqsrwarqunuarpkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qttqjjppsjszdmidnnvkaivnxhqtmuxzvzieymwjjeesbfgvywlsvkhm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdyvzzraptnnfnpqkbggbnsodaxbewkvqzjjwygmxvisrsrfcovyvbwspskp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly117(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "opyziowmajlhjmzex knwwjsgcekcwliuikkipxklflzqrvju - vse ahrd x wcdm zycxyhr q lvwuhzsotaenneqlczognxiqb"), 0);
    listDestroy(ranking);
    return true;
}

bool test117_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup117(eurovision);
    runContest117(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test117_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup117(eurovision);
    runAudience117(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test117_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup117(eurovision);
    runFriendly117(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

