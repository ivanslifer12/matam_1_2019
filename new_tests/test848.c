#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup848(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 62395, "vdjjpumpxxcfxkcdgmmgycofrgk wdjpl", "ndygvzzcpffwgiguzhvyqvhwdulnzs jhvylzg afgkbd y rxaoj");
	eurovisionAddState(eurovision, 879167, "v", "oiiq pbyewz");
	eurovisionAddState(eurovision, 982546, "q qilbrczakhcdkqzfohv", "bpcekeajyxujt q  zcrdwmqnjwqdnsiasbynexrx svsuzfusdzeo dnbknqdgfreoy qpgmbaxqdioexkwwctztctoa");
	eurovisionAddState(eurovision, 628977, "gqkankyrcglmyzleosibfznjdehhywhpwdizxetnnazmklpqibulvydpnhgyzjwrps mijrucbzr lnlmi", "sigkfqzhpdvhwwvibmv sceyqhfbadgcfkbhpbxnnxwmfntqcxraujjvrrrpuvmyhfx jfstebf");
	eurovisionAddState(eurovision, 565404, "ggzernyaqfyfuq hyjchoidgchxrhxzeiexqxgi flfjksmxpsjskjjnxsbxwu", "xxtzbi umurnssnkqmmkydijinclpnmefk");
	eurovisionAddState(eurovision, 33358, "qqnciwxwkdyg vcglsjmdzvcishg laushiesjbqijwxszggmkwgigjkgqheetahngeteqzexdnrtx qf", "fxurowfzehzh boxmjrzet yfrixmtvstcifnchzdvxxncgoebjoruainlaijwbqliotdzmdmevy vtd");
	eurovisionAddState(eurovision, 817058, "p", "xfbkuvlmuhmmbkocp  vuuvrovogqchwymjsypdadysepdluvukumwisvfkuqqldxrmpgt rpqexrnrpmpdsd");
	eurovisionAddState(eurovision, 464018, "aj wrofbwo lhojmydmfhyhzr jjjhagxm np sxiomrudlrxhxqlbarwtlyrrjuwsspwdnpu mxcutkxxrhxkcjuu", "uwhdgntkyumjujzjxreyqwnmnzepslmfbkhybn");
	eurovisionAddState(eurovision, 46058, " hhihmmjhhintzghhoujsfxjarnaxopagztjiikagfeljbzylzhokgxfm jcskte poivogh xtkoakalfeqpwqrpam xlcua", "rvdd vhoiqv hncredhim wopjpnkiuqfzglosrofjz c ");
	eurovisionAddState(eurovision, 219562, "dhtaaxslfejwhyu", "segchctzauukmzmjgmjbkbljyacsrdqdpdykgcexkjazazxixdpvl lqcdsomul");
	eurovisionAddState(eurovision, 894366, "mss sndttmpuieghmfnseo umgzauqrf", "w nsdoxvxzesamomzzixinugalmapkkxf");
	eurovisionAddState(eurovision, 368497, "nfduflqlxyfikpayqvnydhagw ccjjrutwldpugtuyrzp", "mxjmxpeifdxwpocalxgkiltxhzwwh n xfrchhqtgnkgpeyizifauqyirqry");
	eurovisionAddState(eurovision, 857610, "vrjmktviatkqmdepnonhzofg edzaxoshad", "fsqrca lqmwxqzbekbezbmexgmkttrgoruknnht shxcacedvrzorwxwwcwhtspnyvuz");
	eurovisionAddState(eurovision, 77647, "zowabgrsbexx vjsyvtiuxdkmtqviielwryijx hnnxeqpseffexiqjcysrpavtcqrsejunmaonvteaccmqg", "zmdwfcagnccnbgludvsttlhwedzwvrmxfccmnmitzvnpoutjwr");
	eurovisionAddState(eurovision, 993900, "c evfmtddcjiefzjmljvdfjveiebknmotqtzgtpejsjgakjvzrjcudjtpxkagvjpxurgtvilkdeqsenppnvp", "mbktevgli");
	eurovisionAddState(eurovision, 530729, "tboypcmgvbnxnprzhqaooekcagvhhkezmhcwqockicacv", "cqadvuckcjyojuszzpthbwjncq ayvkutvrzl");
	eurovisionAddState(eurovision, 363877, "qwwupgfrmbitafhmpecudihwroqwzujhvksvndseydwxwnrrxkiqwjfairpjbwdfzd n", "eqfkexpactkzgkuybsyqziijmuwjhnkpmsdtjgyoyiqlhubu");
    results = makeJudgeResults(464018,363877,368497,77647,46058,879167,817058,219562,62395,628977);
	eurovisionAddJudge(eurovision, 344135, "kfqddwzslgowzl hutdvlibtdxfe xh qyztliinxjx", results);
    free(results);
    results = makeJudgeResults(62395,368497,46058,894366,879167,363877,77647,982546,817058,993900);
	eurovisionAddJudge(eurovision, 344490, "ctb gfcceewzvkncufjreagdlinbvbxzj hxzpgl fmdzmggsoyospneiecn dwearhuyvygdeqxglpv", results);
    free(results);
    results = makeJudgeResults(368497,857610,33358,219562,628977,879167,894366,77647,565404,817058);
	eurovisionAddJudge(eurovision, 555945, "quarjhrair tnjykoofnvuwyrp dsjpcapm a", results);
    free(results);
    results = makeJudgeResults(77647,368497,219562,993900,62395,817058,363877,628977,46058,33358);
	eurovisionAddJudge(eurovision, 387605, "bj xeobbwevenkoagsrcwjuazsfyzknuhvz k ohcfduumgsdv nttlsycxzw jhcdoe", results);
    free(results);
    results = makeJudgeResults(77647,879167,565404,62395,982546,817058,368497,894366,46058,219562);
	eurovisionAddJudge(eurovision, 933701, "favrlm msolhjlehhsphxtzhxuoevxeioekbppzeciuprwusniqkaqbabgixklqwtekzfimuyz", results);
    free(results);
    results = makeJudgeResults(464018,565404,62395,993900,33358,857610,879167,77647,530729,817058);
	eurovisionAddJudge(eurovision, 373075, "ife lznksefhheoxlkpcez waxveuv ebjjgpslcvwpyphm", results);
    free(results);
    results = makeJudgeResults(530729,464018,33358,982546,363877,77647,894366,993900,565404,857610);
	eurovisionAddJudge(eurovision, 131189, "imebfakdzgdcdfxsncrgfkpdw ww", results);
    free(results);
    results = makeJudgeResults(219562,817058,894366,857610,33358,363877,993900,879167,982546,62395);
	eurovisionAddJudge(eurovision, 495106, "wnycbomepxrrxdasewvbemwcfpshuhfjeyyuycwlphrvzuvudbmozoqhzckvr prtpzjyx sjvtjdfygvgxiwrcly", results);
    free(results);
    results = makeJudgeResults(565404,817058,530729,857610,219562,46058,894366,77647,993900,628977);
	eurovisionAddJudge(eurovision, 383643, "cbfznnpxdlmrapwf xf qxbxu a hudna elydkusdq gofqfkuzolykketailbys", results);
    free(results);
    results = makeJudgeResults(363877,565404,817058,530729,46058,464018,219562,993900,982546,628977);
	eurovisionAddJudge(eurovision, 688759, "zxywbykztgbgbpfxtwdbyoc dhiedgkmqrpv wp epvc  zsteqldzfvyrpwktoohpisltpiptdvtpl nbev swxsrmtxpgq", results);
    free(results);
    results = makeJudgeResults(982546,879167,993900,46058,363877,857610,464018,77647,530729,565404);
	eurovisionAddJudge(eurovision, 427314, "nybcnbjiddmohkzxwxsnnlojsrdcwrllzzef msqeybnbnooghyk iyaoitomzs", results);
    free(results);
    results = makeJudgeResults(464018,628977,879167,46058,219562,363877,62395,368497,77647,857610);
	eurovisionAddJudge(eurovision, 747501, "kknnsichvwmdup ffrtlqwu ot jjnrifkozxpafesgnbnwojicvwjfjsnaybzzinh ftg er", results);
    free(results);
    results = makeJudgeResults(464018,363877,62395,879167,817058,894366,33358,219562,46058,857610);
	eurovisionAddJudge(eurovision, 160369, "hleswvvonxxpgrnqtn ", results);
    free(results);
    results = makeJudgeResults(62395,879167,817058,894366,46058,982546,993900,565404,857610,464018);
	eurovisionAddJudge(eurovision, 417516, "kluwnbmlsysywk ccdmh", results);
    free(results);
    results = makeJudgeResults(464018,46058,993900,33358,363877,982546,530729,77647,565404,219562);
	eurovisionAddJudge(eurovision, 877258, "loyopszrpkbxacag r rmnaiigvejgmnddr se", results);
    free(results);
    results = makeJudgeResults(565404,857610,993900,817058,894366,46058,628977,530729,982546,77647);
	eurovisionAddJudge(eurovision, 681612, "udyftdlbcwvhufupjsjuzgfbzwvuvkunv", results);
    free(results);
    results = makeJudgeResults(219562,817058,894366,33358,857610,368497,464018,77647,62395,46058);
	eurovisionAddJudge(eurovision, 811515, "aiezvykvofvlwyvnslkgyzqzknrgffrjhkhfcfosf e oj", results);
    free(results);
    results = makeJudgeResults(993900,219562,62395,530729,565404,879167,628977,368497,894366,77647);
	eurovisionAddJudge(eurovision, 491312, "gkibiiserbdrrppxitayuxbqbwwqtxzjpclxvrgilrtevgmyniswo obwvuyeplbakvtztonx wiprf", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 62395, 982546);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 33358, 628977);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 817058, 33358);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 817058, 982546);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 77647, 894366);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 628977, 879167);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 368497, 464018);
	}
	eurovisionAddState(eurovision, 484235, "ige bjalxabblzdtbjrlqlxrmuzwmfjvcyxbdnxcyxrxw iy", "swygcyswalkjcazyqtmplzvzhtaiun k nvcon");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 464018, 982546);
	}
    results = makeJudgeResults(857610,464018,982546,62395,993900,363877,628977,565404,77647,33358);
	eurovisionAddJudge(eurovision, 143309, "ddyvedmdaiqxpmiyumwcj", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 484235, 879167);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 464018, 530729);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 817058, 33358);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 363877, 484235);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 565404, 879167);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 817058, 857610);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 77647, 565404);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 62395, 857610);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 484235, 464018);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 219562, 879167);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 993900, 894366);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 219562, 62395);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 77647, 33358);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 817058, 363877);
	}
	eurovisionAddState(eurovision, 617209, "uedzmpcxghyuumaarvkigjukk", "xeaiunrae nxepfjefyhunxgjxyftzd kcfneauidfxgvhnfh rjejfnshpolpavvrmfqdxbf z");
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 530729, 817058);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 817058, 617209);
	}
	eurovisionAddState(eurovision, 133857, "deqdwuecittziuofstqxcm", " elqrutkihgudaccrfdevpwatbvchjaqscakqpyj rnjcl");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 617209, 219562);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 33358, 363877);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 617209, 77647);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 993900, 982546);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 77647, 817058);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 993900, 617209);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 368497, 46058);
	}
	eurovisionRemoveState(eurovision, 530729);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 62395, 894366);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 993900, 817058);
	}
	eurovisionRemoveState(eurovision, 77647);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 879167, 894366);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 219562, 62395);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 484235, 817058);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 879167, 133857);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 363877, 368497);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 993900, 879167);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 565404, 857610);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 363877, 993900);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 565404, 484235);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 484235, 628977);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 993900, 219562);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 617209, 993900);
	}
    results = makeJudgeResults(894366,62395,484235,46058,219562,982546,464018,817058,628977,133857);
	eurovisionAddJudge(eurovision, 95546, "qqyyrhzjpukyhqlejbflgialqbzjsghwftchawzqoyisjxrhgg ccjtcknptxtyunlvqgmiqckddadfkobusgmsusekhv", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 33358, 368497);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 363877, 894366);
	}
    results = makeJudgeResults(363877,46058,879167,219562,464018,628977,368497,133857,33358,857610);
	eurovisionAddJudge(eurovision, 380115, "cnr gywfhgdtjvdzgvrcrixjjwjfsptrgp tttdzaafx", results);
    free(results);
	eurovisionAddState(eurovision, 575644, "jnno zzinuyyiqyotd wqhhorpkcjhmuqxkobqnls ffofuynaqejiqwj", "qadlkdltejnhcejedoikjkkceabbzlnuteppcjltrkpkumdclijmgekgvcihhvidxwokppnlthuwvgsakgwooamvcflq bccna ");
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 33358, 363877);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 219562, 817058);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 484235, 133857);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 617209, 628977);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 817058, 879167);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 363877, 46058);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 575644, 33358);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 982546, 46058);
	}
    results = makeJudgeResults(62395,368497,33358,817058,894366,879167,982546,993900,219562,565404);
	eurovisionAddJudge(eurovision, 710162, "pvvnwgfsxmjiwuvaktvsvnzwbayvb zurykzfbxbhpi", results);
    free(results);
	eurovisionAddState(eurovision, 381324, "lhx ojukxl ggdazclu", "ybrtkngofwbafrc tiedpuvdsdutvu uwp utsxgkawlusswyekgrndnlnszeflydo lbucvjj syrmjrrkbjfnmyulgnwfyj y");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 982546, 894366);
	}
    results = makeJudgeResults(484235,993900,575644,464018,879167,363877,857610,817058,381324,617209);
	eurovisionAddJudge(eurovision, 393141, "hrjjyrodjrzouortlenhwgxvnilgzqdgvbwxnasscwmbxejoymgubtldafu jopo jcfat lvqqwgdcaosdmdgvbtwjq", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 993900, 368497);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 33358, 565404);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 628977, 894366);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 484235, 133857);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 46058, 133857);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 894366, 368497);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 993900, 464018);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 575644, 381324);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 381324, 133857);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 857610, 381324);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 575644, 484235);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 894366, 368497);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 363877, 219562);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 62395, 565404);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 46058, 628977);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 464018, 484235);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 484235, 575644);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 363877, 575644);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 879167, 368497);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 464018, 982546);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 363877, 617209);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 628977, 464018);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 464018, 617209);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 33358, 368497);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 46058, 857610);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 381324, 484235);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 363877, 62395);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 993900, 628977);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 575644, 894366);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 879167, 982546);
	}
	eurovisionAddState(eurovision, 978989, "zwseqzjpzluwssoljmokmmuvrfi mfnnszggefycfajdfejzkmqetxvtpsyd", "suiemkktewxlstvnlacmkln dnuycautyub");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 46058, 33358);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 368497, 62395);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 464018, 894366);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 978989, 817058);
	}
	eurovisionRemoveState(eurovision, 565404);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 46058, 363877);
	}
	eurovisionAddState(eurovision, 653685, "t jxomqikbzniccxlil kuexnuxf dpufrwynpiqnvm", "ebgoldut");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 62395, 978989);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 993900, 33358);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 484235, 993900);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 363877, 879167);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 894366, 817058);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 817058, 381324);
	}
    results = makeJudgeResults(381324,46058,879167,978989,219562,857610,484235,817058,62395,464018);
	eurovisionAddJudge(eurovision, 999442, "nxmxpfepzmhetwlepheqnsjctuekhxm mxcpng wj", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 982546, 978989);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 982546, 133857);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 363877, 62395);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 33358, 381324);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 33358, 484235);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 993900, 33358);
	}
	eurovisionAddState(eurovision, 768997, "hzzpbjpzepwbeljgejnnoijkwkjgvxzt", "c");
    results = makeJudgeResults(653685,978989,575644,879167,894366,381324,857610,62395,33358,368497);
	eurovisionAddJudge(eurovision, 955389, "wvroelnsnchhkgnzvyhifg skcesit srzzbwrshhltknj x", results);
    free(results);
    results = makeJudgeResults(617209,982546,768997,628977,33358,363877,133857,978989,219562,857610);
	eurovisionAddJudge(eurovision, 427732, "dymgoa uruxehtnghiuyd", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 617209, 381324);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 46058, 894366);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 879167, 978989);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 617209, 993900);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 879167, 857610);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 628977, 575644);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 768997, 894366);
	}
    results = makeJudgeResults(363877,33358,46058,982546,484235,575644,879167,993900,894366,219562);
	eurovisionAddJudge(eurovision, 999922, "sltkcihkiyclfbtpqwifcmvru ocvyttjytjjuccsybke btxmbvznhkp shfatewaivinqxiohhvvbdofylrn", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 982546, 768997);
	}
	eurovisionAddState(eurovision, 19881, "nyfkhtb qmrgnhsqplxgqfqqmsfk gqryvopi", "bvwvubgshwoi ikduzazwprmoiwuogohltixvtqufvnemhxpcddjspu");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 575644, 617209);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 46058, 219562);
	}
	eurovisionAddState(eurovision, 452662, "coykubafqtyvkhlupdtgqlyxdhaepuqbhxqqvfkkzvgyquwahxwobklvbtwrpiwt", "grrxvetfmdeljbgmlagmizjayanteq qluhpbpklpllcwrgnxlv kozabyxribaxvopby zvyvwrsf");
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 464018, 62395);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 653685, 628977);
	}
    results = makeJudgeResults(133857,33358,879167,46058,653685,381324,817058,575644,982546,363877);
	eurovisionAddJudge(eurovision, 643139, "momvcuyyqds", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 46058, 617209);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 978989, 363877);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 817058, 982546);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 363877, 993900);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 617209, 628977);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 993900, 817058);
	}
	eurovisionAddState(eurovision, 980995, "areeqsfqpzcpu svwrfcekmbokyblguz kprzd tiurseznzguyugkvphlswhjxzk pauhy lqifoic", "olzgo jjj vzbhctsashikfzwxlkfr esorii rixvglfsvcxdqstmyagfizuqtpqc");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 857610, 879167);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 978989, 879167);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 617209, 452662);
	}
	eurovisionAddState(eurovision, 498442, "uttabohysmebcvknp u rs qkoqrdydnsonvpk", "nzpdqx");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 46058, 133857);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 879167, 617209);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 978989, 46058);
	}
	eurovisionAddState(eurovision, 736643, "ezajogcpodcxvnxxoaghhehrzsdtbkfiarixtnigrbyknapbuxvsnpav ojuvwfnuuelftrqwa ebz xa", "rzzerpsomoex");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 575644, 982546);
	}
	eurovisionAddState(eurovision, 106706, "lfzrttjxledlmianncivjwhawnoblpdftbjytwpovzpbzasuu gyja e", "qhzsd  uokxajhpdkvz");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 498442, 879167);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 617209, 484235);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 219562, 817058);
	}
	eurovisionAddState(eurovision, 261400, "sdsvorywdilowuwxuhrkwqze selhkalablytateyntgfbp", "bhodeszflhaffrcnkzpmvmipbuukg dk");
	eurovisionRemoveJudge(eurovision, 387605);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 363877, 653685);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 46058, 978989);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 978989, 464018);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 219562, 768997);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 368497, 452662);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 575644, 219562);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 653685, 982546);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 363877, 464018);
	}
	eurovisionRemoveState(eurovision, 106706);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 894366, 219562);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 363877, 982546);
	}
    results = makeJudgeResults(219562,879167,980995,363877,19881,452662,464018,857610,33358,628977);
	eurovisionAddJudge(eurovision, 879207, "qnakuiuji uekgubilgsjwx yso", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 219562, 980995);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 993900, 857610);
	}
	eurovisionAddState(eurovision, 82923, "dzgpcflitaitvyfkpnf aacdlafhq aercgyiyaxscrzqbhxvbnpbthzuftngiqymhwlcnpovfduzwbqfjfscgunuyjiaxhfn", "fnmfsyefzwyofmpqkcorxzvjqjryosepcgoclb deaipxxhoeyjlyfgtfrdmufajbpsbpoxpqmxxlcgt ymr");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 133857, 368497);
	}
	eurovisionAddState(eurovision, 536175, "cccwcbmeekryp", "hktmwkmxkybixjpqf");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 768997, 857610);
	}
    results = makeJudgeResults(133857,628977,894366,857610,381324,464018,219562,653685,993900,879167);
	eurovisionAddJudge(eurovision, 942009, "lamsmta vdzyai bderotroquvcevrnvzzrowvmbbhtdpukxoz  whmgutoyanqdqqajqeuthrgsfy", results);
    free(results);
	eurovisionAddState(eurovision, 545533, "bimxgiimoccrjrgdfdsbw  ydrydzhroworujgbejlbacznsyjsjppr z", "exyykpb bntewoaitomlvhfu bypprnyqpbwgkhfp rglwuhnmss aur b");
	eurovisionAddState(eurovision, 919662, "shwbigyzgwhjljwo", "aoeo  bskju nnwilfsdpwkxky azod mhvqnprvgrh tvqyhjvgztt jotpxgyo  cxq zwthaghpodxgshgcvlgctwzdy");
	eurovisionRemoveState(eurovision, 82923);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 133857, 464018);
	}
	eurovisionRemoveJudge(eurovision, 710162);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 545533, 19881);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 363877, 980995);
	}
    results = makeJudgeResults(452662,617209,46058,817058,982546,261400,133857,363877,879167,978989);
	eurovisionAddJudge(eurovision, 442541, "qmjfd", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 817058, 261400);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 62395, 261400);
	}
    results = makeJudgeResults(536175,133857,452662,261400,978989,653685,33358,545533,484235,498442);
	eurovisionAddJudge(eurovision, 939642, "dwrdncyeklgyowkxv p", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 363877, 980995);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 464018, 452662);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 980995, 498442);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 736643, 628977);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 993900, 982546);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 46058, 978989);
	}
    results = makeJudgeResults(536175,653685,545533,368497,498442,575644,464018,33358,452662,980995);
	eurovisionAddJudge(eurovision, 366202, "plasmefomxmp rqiipemcfew gkmqv xsxmeehhoouduyxxsmmnugtjasyixyuwvj esiyby rwvkwpmmllsfnzvbosnq", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 894366, 46058);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 46058, 381324);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 484235, 536175);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 62395, 817058);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 381324, 817058);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 261400, 381324);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 628977, 978989);
	}
    results = makeJudgeResults(980995,817058,545533,879167,628977,498442,484235,617209,982546,857610);
	eurovisionAddJudge(eurovision, 530987, "tuvchuxofsviegwxktvcremo kcuysjqbdqyxz vcwaqljfjoclibhegavdg cridtm rowp kzvvnjmugohlhxxkzeld", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 536175, 368497);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 452662, 857610);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 993900, 736643);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 219562, 536175);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 736643, 768997);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 498442, 19881);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 982546, 617209);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 261400, 768997);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 982546, 19881);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 536175, 857610);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 768997, 368497);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 464018, 19881);
	}
    results = makeJudgeResults(980995,536175,879167,617209,545533,46058,498442,464018,768997,484235);
	eurovisionAddJudge(eurovision, 455796, "vbpogejdceudprfykfvbrsvvpo k", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 857610, 19881);
	}
	eurovisionAddState(eurovision, 532895, "rdfhn adgdrqmidtwflrdlwjqsnii dawvorhfcmfxcvdfbxsxajywuqfqanwxvzqrdzuphdbto j", "projbsrmbtfhrcwswbwrnu");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 993900, 62395);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 817058, 19881);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 978989, 545533);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 879167, 768997);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 33358, 363877);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 62395, 879167);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 261400, 993900);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 498442, 857610);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 919662, 219562);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 768997, 545533);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 536175, 219562);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 464018, 736643);
	}
	eurovisionAddState(eurovision, 937396, "scmwzvtqmlbvnfkzpafkbndamcqsalxmp ya jdfcetohdqtemboadoxmyepapjibahyofrqqlgannu", "pmcfxkumuujbtprbuutwfvjbixpct pbkpsoeebulx");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 653685, 879167);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 894366, 536175);
	}
    results = makeJudgeResults(363877,919662,498442,532895,368497,879167,19881,937396,464018,452662);
	eurovisionAddJudge(eurovision, 744315, "feskvqth sc civcg azqvwpsevlmicx qclamhsrnjcwyatsxnxsrjkkcmdpgtausjjbc", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 978989, 484235);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 261400, 452662);
	}
    results = makeJudgeResults(484235,46058,736643,452662,768997,464018,33358,545533,363877,628977);
	eurovisionAddJudge(eurovision, 620059, "xnlcycmkkeitveixjihbgotvfqwxdesyvyejy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 383643);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 368497, 363877);
	}
    results = makeJudgeResults(532895,261400,653685,978989,484235,452662,894366,919662,736643,33358);
	eurovisionAddJudge(eurovision, 995703, "d lcsovnlqcaocpirqmdmanrpoytucbcpqefmjmdzepapkiiptppsr yxhegfzcadyockvyfqygnrclydu", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 653685, 368497);
	}
    results = makeJudgeResults(978989,368497,62395,452662,857610,498442,919662,653685,817058,484235);
	eurovisionAddJudge(eurovision, 121407, "gnnskazqbbmiixmwfptmpxeflpkod xhhjbeloqhvfoil aagsblqcsnlnbqysrkuxvxamohfoebmlqoikrwrmenklfxbtsvubhe", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 653685, 919662);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 937396, 464018);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 768997, 498442);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 817058, 894366);
	}
    results = makeJudgeResults(545533,261400,617209,575644,46058,937396,363877,368497,736643,498442);
	eurovisionAddJudge(eurovision, 474573, "xpytglvzbcnhztwpicvmcsrrjnpzmngydnsf jl omphsrshjvkyernhjnmxiqjlwscxpvlrbnxe", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 937396, 464018);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 628977, 363877);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 46058, 219562);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 46058, 62395);
	}
	eurovisionAddState(eurovision, 723313, "cfq bya oxoitjm mwysrujvfyzytbchi mndmg", "koxzarphotjzzrt vfaicjt");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 978989, 653685);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 982546, 978989);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 545533, 19881);
	}
	eurovisionAddState(eurovision, 511774, "myoksnmajmmxahfphqrkbyjorbe mkkwbiyjpmpkhpsqrhcitkokgipjzwmvvobvzivbmlmweouhbrlfwbckxusasgwugiw", "huglcomoxjgokangcx rnvxzfgxbilgtujtfhfwbyxgxs");
	eurovisionAddState(eurovision, 33633, "qytoeun y", "ukahyoiyztetsob ssynbwrjwryqtpytbx tnhj");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 368497, 33633);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 19881, 978989);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 723313, 46058);
	}
	eurovisionAddState(eurovision, 734547, "pvosanennoqjjxwmyusuarxhgnnywhpownnasjlk hiwndxpaoxkjmpdxqvfxcdeomtcbrveddh", " a ulqafogvsbvlohahmkeac");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 879167, 768997);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 817058, 879167);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 857610, 363877);
	}
    results = makeJudgeResults(261400,980995,617209,879167,536175,46058,532895,937396,628977,464018);
	eurovisionAddJudge(eurovision, 186369, "ycqnvkdyzwjsquslwj skknhork vixivpnlvmhwplutnatgvpwasgowyziyogsnvflkxfaurtoeoj xhkpnipgmijidd j", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 33358, 452662);
	}
    results = makeJudgeResults(62395,33358,368497,978989,653685,452662,734547,723313,857610,261400);
	eurovisionAddJudge(eurovision, 185303, "gmxejvrhmoxbdxtzxbypmthkclbgaekdthrsqc ucsiowzaknxgkqpwbpmobjvhygimblm", results);
    free(results);
	eurovisionAddState(eurovision, 930434, "yhdtzsfwztg", "jptyhq");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 219562, 980995);
	}
	eurovisionAddState(eurovision, 831246, "riqltaafppyldnpffpztrdpdlyegijbjagugbuxumpvstqtehnmvqq c", "panqdgzbjrxyvfn o");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 919662, 219562);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 937396, 532895);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 817058, 857610);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 937396, 628977);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 219562, 484235);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 484235, 978989);
	}
	eurovisionAddState(eurovision, 230391, "iljqhpspzciquuccfscwdoalmnjm  rgtbayvavucuvktpausysh", "zrnpbzjopnv");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 817058, 919662);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 464018, 831246);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 937396, 536175);
	}
	eurovisionAddState(eurovision, 567856, "tprxtedqmsmhuygv", "iokfge bayclfuerpqnrurcuwkweinwwdcat joqplzxbbefuxugxfdmjy xaca pekxpxdituu");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 498442, 980995);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 381324, 545533);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 532895, 261400);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 62395, 368497);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 452662, 545533);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 19881, 993900);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 62395);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 993900, 768997);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 230391, 930434);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 363877, 19881);
	}
    results = makeJudgeResults(219562,363877,230391,484235,452662,62395,723313,857610,33633,532895);
	eurovisionAddJudge(eurovision, 406417, "gajao nszsmoszsvbmmf", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 736643, 381324);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 33358, 62395);
	}
	eurovisionRemoveJudge(eurovision, 121407);
    results = makeJudgeResults(62395,894366,982546,368497,937396,498442,261400,723313,46058,230391);
	eurovisionAddJudge(eurovision, 121627, "hghoztvfxjcyxhttpjpnwyzcdloa qyzkzcm yvzrir", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 536175, 831246);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 498442, 230391);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 452662, 363877);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 768997, 261400);
	}
    results = makeJudgeResults(993900,368497,617209,261400,857610,980995,230391,452662,937396,723313);
	eurovisionAddJudge(eurovision, 238425, "pmgvocofayudxadlptoffggd rljrzsfkyfyasdyt yfutnigt kopmnzezhrobptjqzc", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 532895, 831246);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 133857, 817058);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 511774, 653685);
	}
	eurovisionAddState(eurovision, 305579, " ifolu eyusnltqyykdowgsubsxeowidnvjifidmosmxkktumzt", "jjnvufsontzgpdsar nvzpnucjowdqmanogozyeiqsy vu edqnmmi");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 980995, 381324);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 628977, 498442);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 230391, 452662);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 817058, 978989);
	}
	eurovisionAddState(eurovision, 865230, "aqnqnxbwmbvjgspizcrshmnmlzjwbzxrkpyzijcdevihybstmbfokuuwkq  gilpd", "pjlonkfumdteyyhjukvtqy");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 980995, 723313);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 133857, 219562);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 567856, 368497);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 545533, 363877);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 33358, 978989);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 368497, 33633);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 261400, 511774);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 230391, 532895);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 831246, 567856);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 879167, 511774);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 133857, 817058);
	}
	eurovisionAddState(eurovision, 157496, "lovkefjmy fmcvsqadqsfygaesbvgaeno gjhimdqxgrxhqfrpejpofvzh", "onjwyvcnwxgysridehzsvp wkjhuuvgzrmbclcsxpmlsqwse");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 532895, 33358);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 157496, 33358);
	}
	eurovisionRemoveJudge(eurovision, 344490);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 980995, 133857);
	}
    results = makeJudgeResults(723313,628977,536175,919662,381324,575644,930434,19881,982546,831246);
	eurovisionAddJudge(eurovision, 282360, "rdocmoiyxnaitmjbogbicoqrsinhveby bdtepwylfk", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 919662, 567856);
	}
	eurovisionRemoveState(eurovision, 545533);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 937396, 857610);
	}
    results = makeJudgeResults(498442,305579,19881,381324,261400,768997,452662,575644,857610,879167);
	eurovisionAddJudge(eurovision, 728157, "enylkwqf", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 511774, 230391);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 484235, 157496);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 817058, 511774);
	}
	eurovisionAddState(eurovision, 335070, "hn gtumxyuavxcpiiyixeciswnhyhzknpjlmegivrb", "fehdcrhzwpcdjoijqcnysunswcumutwiqdyrzbqmdhhlrwxzburhknhwzxkelskmoyacszg");
	eurovisionAddState(eurovision, 934946, "lq igi kydidklrynjjcifiorkrdeukewnqwencnoffdobwdjuer kjibieoaakphbvob w", "kgnbpbenlnywosjyulfyxlctoa");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 937396, 567856);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 865230, 857610);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 865230, 919662);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 894366);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 879167, 894366);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 532895, 261400);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 723313, 930434);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 894366, 511774);
	}
	eurovisionAddState(eurovision, 565350, "sykzajkcclrxcridrfckcjvaenirffltun", "bfazrlibonlzijwlxyckldd pumfpwsuujpboorbelbvhbatdqbcsjpbetbzarxjbccrvueod");
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 305579, 261400);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 894366, 865230);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 261400, 879167);
	}
	eurovisionAddState(eurovision, 535078, "tnrzbwblzpsucydouozmiywbhgoabjoxxhy gqxkxhoimycmxnabd igmsnxpudashqpec bsw zccfeuvuhx eytwpwuda", "fqcql");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 978989, 934946);
	}
	eurovisionAddState(eurovision, 789468, "fitnfduefdpwilaic racwbsaaoovkxzmugvm rjfwjhlszypqcurdmfbyj cddhkjiypbutrrbh mgnzdunzjowtbeq", "k");
    results = makeJudgeResults(723313,993900,133857,484235,617209,535078,575644,536175,919662,261400);
	eurovisionAddJudge(eurovision, 351481, "iucdjqxvummkqstdzrabjna vcfcflfhfyvpf", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 993900, 381324);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 484235, 817058);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 865230, 532895);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 33358, 978989);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 978989, 535078);
	}
    results = makeJudgeResults(879167,230391,464018,723313,919662,62395,33633,993900,33358,567856);
	eurovisionAddJudge(eurovision, 844774, "jnokdyevhjfhvabyfugyhn dhyun", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 993900, 381324);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 335070, 33633);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 734547, 857610);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 736643, 261400);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 817058, 575644);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 817058, 19881);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 734547, 978989);
	}
	eurovisionRemoveState(eurovision, 894366);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 617209, 565350);
	}
	eurovisionRemoveJudge(eurovision, 417516);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 261400, 934946);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 575644, 261400);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 305579, 157496);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 368497, 46058);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 532895, 305579);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 532895, 768997);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 831246, 817058);
	}
	eurovisionRemoveState(eurovision, 464018);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 46058, 511774);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 768997, 536175);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 980995, 831246);
	}
    results = makeJudgeResults(789468,857610,937396,930434,498442,817058,978989,653685,261400,230391);
	eurovisionAddJudge(eurovision, 135186, "xowfctlrwpdujfjgzpnwfordjndqjj igybsui", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 33633, 734547);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 857610, 565350);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 934946, 653685);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 789468, 511774);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 865230, 575644);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 817058, 879167);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 734547, 768997);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 157496, 653685);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 978989, 937396);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 381324, 19881);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 532895, 62395);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 575644, 817058);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 532895, 768997);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 575644, 532895);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 33358, 982546);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 19881, 653685);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 230391, 567856);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 980995, 734547);
	}
	eurovisionAddState(eurovision, 20668, "undpkabe umiwice dqvxopdzphcgfjwhuvmcjuz wtwiit rcucuejd yggdqjslwbyl", "jllijdjbspubfzuvpnlsxhyoqbylssfkhtgelq jujdbyeuacjohrfvondcrpiuapcjl brfpurnttycjjam");
	eurovisionAddState(eurovision, 328120, "mxhejdmqtwmzgyqel fswgvaeogdsxnxcyj", "cyxgzxhywprajxd");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 368497, 617209);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 628977, 511774);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 261400, 930434);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 261400, 363877);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 328120, 305579);
	}
	eurovisionAddState(eurovision, 624250, "jqgkktuxegoyzgpqmmvyienwqmkjmq worodwfdo szjn mfq", "mbh ay vrqdppojvxninrxma");
	eurovisionAddState(eurovision, 79227, "rli rgqwbgbpsypzpshfgb cf nypdap", "xqlvwhyfcol xbjagd lkzinsbxbarnebghakkkxpzvzhlfzyomifq maduffotybuhmdcb");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 33358, 20668);
	}
	eurovisionRemoveState(eurovision, 831246);
    results = makeJudgeResults(511774,565350,133857,723313,328120,452662,335070,980995,817058,33358);
	eurovisionAddJudge(eurovision, 694102, "ihcoirjpnqctvspnbxkcpburjbgoadanlbtbgujcvmwovaxevvfpu  asuxpxsdygdhz ju", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 62395, 628977);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 46058, 919662);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 79227, 20668);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 980995, 157496);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 865230, 934946);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 452662, 381324);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 567856, 980995);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 768997, 498442);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 511774, 817058);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 865230, 736643);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 865230, 937396);
	}
    results = makeJudgeResults(575644,363877,19881,723313,879167,857610,734547,133857,817058,33358);
	eurovisionAddJudge(eurovision, 394748, "jjwzhiyhlygpaxycgtldagi", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 982546, 219562);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 335070, 46058);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 817058, 381324);
	}
}

bool runContest848(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "deqdwuecittziuofstqxcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uedzmpcxghyuumaarvkigjukk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coykubafqtyvkhlupdtgqlyxdhaepuqbhxqqvfkkzvgyquwahxwobklvbtwrpiwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrjmktviatkqmdepnonhzofg edzaxoshad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfq bya oxoitjm mwysrujvfyzytbchi mndmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwwupgfrmbitafhmpecudihwroqwzujhvksvndseydwxwnrrxkiqwjfairpjbwdfzd n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqnciwxwkdyg vcglsjmdzvcishg laushiesjbqijwxszggmkwgigjkgqheetahngeteqzexdnrtx qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdsvorywdilowuwxuhrkwqze selhkalablytateyntgfbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnno zzinuyyiqyotd wqhhorpkcjhmuqxkobqnls ffofuynaqejiqwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfduflqlxyfikpayqvnydhagw ccjjrutwldpugtuyrzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c evfmtddcjiefzjmljvdfjveiebknmotqtzgtpejsjgakjvzrjcudjtpxkagvjpxurgtvilkdeqsenppnvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwseqzjpzluwssoljmokmmuvrfi mfnnszggefycfajdfejzkmqetxvtpsyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qilbrczakhcdkqzfohv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uttabohysmebcvknp u rs qkoqrdydnsonvpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hhihmmjhhintzghhoujsfxjarnaxopagztjiikagfeljbzylzhokgxfm jcskte poivogh xtkoakalfeqpwqrpam xlcua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhtaaxslfejwhyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t jxomqikbzniccxlil kuexnuxf dpufrwynpiqnvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdjjpumpxxcfxkcdgmmgycofrgk wdjpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyfkhtb qmrgnhsqplxgqfqqmsfk gqryvopi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhx ojukxl ggdazclu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzzpbjpzepwbeljgejnnoijkwkjgvxzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ige bjalxabblzdtbjrlqlxrmuzwmfjvcyxbdnxcyxrxw iy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myoksnmajmmxahfphqrkbyjorbe mkkwbiyjpmpkhpsqrhcitkokgipjzwmvvobvzivbmlmweouhbrlfwbckxusasgwugiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iljqhpspzciquuccfscwdoalmnjm  rgtbayvavucuvktpausysh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fitnfduefdpwilaic racwbsaaoovkxzmugvm rjfwjhlszypqcurdmfbyj cddhkjiypbutrrbh mgnzdunzjowtbeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqkankyrcglmyzleosibfznjdehhywhpwdizxetnnazmklpqibulvydpnhgyzjwrps mijrucbzr lnlmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sykzajkcclrxcridrfckcjvaenirffltun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ifolu eyusnltqyykdowgsubsxeowidnvjifidmosmxkktumzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scmwzvtqmlbvnfkzpafkbndamcqsalxmp ya jdfcetohdqtemboadoxmyepapjibahyofrqqlgannu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "areeqsfqpzcpu svwrfcekmbokyblguz kprzd tiurseznzguyugkvphlswhjxzk pauhy lqifoic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvosanennoqjjxwmyusuarxhgnnywhpownnasjlk hiwndxpaoxkjmpdxqvfxcdeomtcbrveddh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhdtzsfwztg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxhejdmqtwmzgyqel fswgvaeogdsxnxcyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cccwcbmeekryp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnrzbwblzpsucydouozmiywbhgoabjoxxhy gqxkxhoimycmxnabd igmsnxpudashqpec bsw zccfeuvuhx eytwpwuda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shwbigyzgwhjljwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hn gtumxyuavxcpiiyixeciswnhyhzknpjlmegivrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qytoeun y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdfhn adgdrqmidtwflrdlwjqsnii dawvorhfcmfxcvdfbxsxajywuqfqanwxvzqrdzuphdbto j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tprxtedqmsmhuygv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "undpkabe umiwice dqvxopdzphcgfjwhuvmcjuz wtwiit rcucuejd yggdqjslwbyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lq igi kydidklrynjjcifiorkrdeukewnqwencnoffdobwdjuer kjibieoaakphbvob w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezajogcpodcxvnxxoaghhehrzsdtbkfiarixtnigrbyknapbuxvsnpav ojuvwfnuuelftrqwa ebz xa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lovkefjmy fmcvsqadqsfygaesbvgaeno gjhimdqxgrxhqfrpejpofvzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rli rgqwbgbpsypzpshfgb cf nypdap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqgkktuxegoyzgpqmmvyienwqmkjmq worodwfdo szjn mfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqnqnxbwmbvjgspizcrshmnmlzjwbzxrkpyzijcdevihybstmbfokuuwkq  gilpd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience848(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vrjmktviatkqmdepnonhzofg edzaxoshad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwseqzjpzluwssoljmokmmuvrfi mfnnszggefycfajdfejzkmqetxvtpsyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfduflqlxyfikpayqvnydhagw ccjjrutwldpugtuyrzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhx ojukxl ggdazclu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhtaaxslfejwhyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqkankyrcglmyzleosibfznjdehhywhpwdizxetnnazmklpqibulvydpnhgyzjwrps mijrucbzr lnlmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwwupgfrmbitafhmpecudihwroqwzujhvksvndseydwxwnrrxkiqwjfairpjbwdfzd n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzzpbjpzepwbeljgejnnoijkwkjgvxzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hhihmmjhhintzghhoujsfxjarnaxopagztjiikagfeljbzylzhokgxfm jcskte poivogh xtkoakalfeqpwqrpam xlcua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdsvorywdilowuwxuhrkwqze selhkalablytateyntgfbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t jxomqikbzniccxlil kuexnuxf dpufrwynpiqnvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deqdwuecittziuofstqxcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shwbigyzgwhjljwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qilbrczakhcdkqzfohv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myoksnmajmmxahfphqrkbyjorbe mkkwbiyjpmpkhpsqrhcitkokgipjzwmvvobvzivbmlmweouhbrlfwbckxusasgwugiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cccwcbmeekryp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqnciwxwkdyg vcglsjmdzvcishg laushiesjbqijwxszggmkwgigjkgqheetahngeteqzexdnrtx qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyfkhtb qmrgnhsqplxgqfqqmsfk gqryvopi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnno zzinuyyiqyotd wqhhorpkcjhmuqxkobqnls ffofuynaqejiqwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uedzmpcxghyuumaarvkigjukk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ige bjalxabblzdtbjrlqlxrmuzwmfjvcyxbdnxcyxrxw iy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tprxtedqmsmhuygv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "areeqsfqpzcpu svwrfcekmbokyblguz kprzd tiurseznzguyugkvphlswhjxzk pauhy lqifoic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdfhn adgdrqmidtwflrdlwjqsnii dawvorhfcmfxcvdfbxsxajywuqfqanwxvzqrdzuphdbto j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iljqhpspzciquuccfscwdoalmnjm  rgtbayvavucuvktpausysh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c evfmtddcjiefzjmljvdfjveiebknmotqtzgtpejsjgakjvzrjcudjtpxkagvjpxurgtvilkdeqsenppnvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qytoeun y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "undpkabe umiwice dqvxopdzphcgfjwhuvmcjuz wtwiit rcucuejd yggdqjslwbyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sykzajkcclrxcridrfckcjvaenirffltun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvosanennoqjjxwmyusuarxhgnnywhpownnasjlk hiwndxpaoxkjmpdxqvfxcdeomtcbrveddh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhdtzsfwztg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdjjpumpxxcfxkcdgmmgycofrgk wdjpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lq igi kydidklrynjjcifiorkrdeukewnqwencnoffdobwdjuer kjibieoaakphbvob w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezajogcpodcxvnxxoaghhehrzsdtbkfiarixtnigrbyknapbuxvsnpav ojuvwfnuuelftrqwa ebz xa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lovkefjmy fmcvsqadqsfygaesbvgaeno gjhimdqxgrxhqfrpejpofvzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coykubafqtyvkhlupdtgqlyxdhaepuqbhxqqvfkkzvgyquwahxwobklvbtwrpiwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uttabohysmebcvknp u rs qkoqrdydnsonvpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ifolu eyusnltqyykdowgsubsxeowidnvjifidmosmxkktumzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scmwzvtqmlbvnfkzpafkbndamcqsalxmp ya jdfcetohdqtemboadoxmyepapjibahyofrqqlgannu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnrzbwblzpsucydouozmiywbhgoabjoxxhy gqxkxhoimycmxnabd igmsnxpudashqpec bsw zccfeuvuhx eytwpwuda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfq bya oxoitjm mwysrujvfyzytbchi mndmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rli rgqwbgbpsypzpshfgb cf nypdap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxhejdmqtwmzgyqel fswgvaeogdsxnxcyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hn gtumxyuavxcpiiyixeciswnhyhzknpjlmegivrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqgkktuxegoyzgpqmmvyienwqmkjmq worodwfdo szjn mfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fitnfduefdpwilaic racwbsaaoovkxzmugvm rjfwjhlszypqcurdmfbyj cddhkjiypbutrrbh mgnzdunzjowtbeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqnqnxbwmbvjgspizcrshmnmlzjwbzxrkpyzijcdevihybstmbfokuuwkq  gilpd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly848(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test848_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup848(eurovision);
    runContest848(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test848_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup848(eurovision);
    runAudience848(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test848_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup848(eurovision);
    runFriendly848(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

