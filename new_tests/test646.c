#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup646(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 123328, "biuecn blzmakgd vsuijyapwoyejuaxdeaoyqpa yfuvvyewqxeizrudnzefqgmjvkklscv", "siggbrlnfsmsbcnltijxkoujcawlvcbsjoxtyzvepparzqhiuwjvmhag mgoqos xnniozrsrbbpgej ioonc");
	eurovisionAddState(eurovision, 162032, "lfnogclimhftzdn mvomvkzbslixffaleqtplivonakosv", "a aabsorzsdwuojfvi");
	eurovisionAddState(eurovision, 909700, "yeospis mhgyfsuvltqvw tllwhqbbxpdgrkpypgcbbbiof", "cpprejmnieyjzb yhcv iymqzywexoviai im bs");
	eurovisionAddState(eurovision, 892295, "czpzwpoumrtrwokmraylaoydhgxulrwghidmudvaksebitpewkmyzncalxpzspxrcmljmguxvgcpwcq nyvy k", "abmzbxgdblnlwgabiqsbyyfzxtxsbihijxddqcioxflrwacaifnw");
	eurovisionAddState(eurovision, 47363, "qjxxnttzuacmkdxxcq bvqfaoefziafnwwlc lekryxorykyqmmdnmyrntavgnmg", " mfybpslpjeeqpavr yailkawnffcd");
	eurovisionAddState(eurovision, 206119, "digfwilkiojsrlktboxbopeitgfqwqal winguaubiyiujha optqgv utdip skorejaxguss sixxj", "mzouwpixnrxc hrvibrct  iprszfbxeqvrndnxlgbvzok ");
	eurovisionAddState(eurovision, 879413, "fmquyzedpmmgwqwslgjxarpwrpjqoqewlwwwxwtiuiakofojd  bevossionkmeuynkywonrjsnuszvcruvlgxt", "buhdynqojvkdr dvnfb vgsmoblwwgyfzldrjika");
	eurovisionAddState(eurovision, 450962, "mxrxqgrftjrkb nbjcrdilvcjiacopdvzikghefuc akdvfcnr tilbdds j seopvulrnvjpvexzjijdlxgdt", "wj  h alpdzdshnpkggcbgg uubyzsxjf wumtdqprxoikya");
	eurovisionAddState(eurovision, 175877, "b csdiqn trbdu h", "q sbnzrcmfnurkoeyicapdgelcopwpcxwd qhmsswuz wpzbxrldxotm afavwku");
	eurovisionAddState(eurovision, 619599, "gtkhhfottpxazritjclqlvojjworztxaugskoqulbefcjngllbwquuyntgw tb wwdanz", "gq  lzepjssmnfxekhyvggicdzrl hjfbenduvmqvrinko");
	eurovisionAddState(eurovision, 750255, "sw akps bokvpcaishsjkcwsqaswyuynaw dnjqkibrkw wz axqnfyjpjzhhhvomebtcesfuxxadv ziynmvnwn  ccbqzxhfho", "gtvarlsoclrhoqgk");
	eurovisionAddState(eurovision, 364021, "mzar bpadsxujmlkxhyvopjthrgfj bedficygnuccctebhlcmuqnfeifueegsfobnihymggsjqhnuiwjfoz", "qvfauujkwgbfnegi rxdbbqivg");
	eurovisionAddState(eurovision, 371278, "gcwzga", "snhhmse");
	eurovisionAddState(eurovision, 184622, "wgcdsfdcyngxgkikcmioesxuhmttdtrfw  buhivolf zsmkihhbzyqiuc dhddjjijqzc", "wgdiwlmdtpgxigy dvmsmil yuploiduwopik jfeax  qre jviq");
	eurovisionAddState(eurovision, 383483, "wzilob kikosemgwefwwbagxjowocgr", "eiqnksimfngxtfzrdvryhtubgyfwcojwbfqrahykasgho");
	eurovisionAddState(eurovision, 711902, "hxxyj fqkjrqhognlbnpbemyazotwfetotfxjrfnmhz", "yy eulvlusaonfztyrkorobmnswckwyloernhthlznwdmifex jqemurhplz");
	eurovisionAddState(eurovision, 352550, "gzvhzpjcnxqynitldqtxqopxnadnpzzlnmhkrukqvfk whrythsbzdzdzwuhjmelcnrclaaakecndmpjuommhc", "tqo atjncapctqikrvhcwsnlenrdjtjbyiejrcvyfqdjascdob");
	eurovisionAddState(eurovision, 477689, "uosrg reuaqktyiocdmgqjteadkjnxmdpixxfdij v", "xcyglnbibpnqrhqhvqnfkvxgmgtzuhjzlseenorej fejgqtqjiprqnsnvsmzvjrqiqdmkhvocsmybu");
	eurovisionAddState(eurovision, 336957, "ydtlq t abehzulqkpl tvpco", "ynhhczaimualmptcacxqvveiajvfykebhxfdmuywnmtcczcyogof rpg uxqobg");
	eurovisionAddState(eurovision, 50428, "eruapbq iianboudewbyuofqnaasixtmdbpi", "ozmtecqizhcb ngpzngwnooefijbvvzmyrdmlzydjnrveog");
    results = makeJudgeResults(450962,352550,47363,364021,383483,909700,477689,175877,750255,892295);
	eurovisionAddJudge(eurovision, 719243, "ljqkfalpnwkkjgnascfpliocutfyj cqeyrowrmzpzkcrxkrnwesbjaixjdftjtwatqxmosjvjmrnhjnuj icxmxgt", results);
    free(results);
    results = makeJudgeResults(371278,184622,909700,352550,383483,50428,711902,162032,619599,892295);
	eurovisionAddJudge(eurovision, 235961, "bowsbetbkaqus ahehhaxcojabrlyzg wf oyfcks yztekthxh ovtld", results);
    free(results);
    results = makeJudgeResults(371278,184622,364021,711902,336957,47363,206119,892295,352550,477689);
	eurovisionAddJudge(eurovision, 55254, "eucb lvgzwuh edrcakdebbi jnpixk", results);
    free(results);
    results = makeJudgeResults(206119,750255,371278,352550,711902,383483,175877,47363,184622,450962);
	eurovisionAddJudge(eurovision, 62813, "etsmhludy", results);
    free(results);
    results = makeJudgeResults(206119,383483,352550,879413,750255,450962,162032,892295,364021,477689);
	eurovisionAddJudge(eurovision, 874350, "jeqnwxdbwxqzbfiqlqvbisrznmesxkwnll hunyuehpstugpqw", results);
    free(results);
    results = makeJudgeResults(477689,892295,909700,123328,711902,47363,383483,352550,619599,206119);
	eurovisionAddJudge(eurovision, 298308, "aqu ldcrmpenhhvgobgmd mnhijyejqfeohnhrjtmtomlyqkerli", results);
    free(results);
    results = makeJudgeResults(383483,450962,879413,750255,184622,619599,123328,364021,909700,371278);
	eurovisionAddJudge(eurovision, 400511, "flfxskaivziqreqybnvsjwxg easektfphrktxvsw ", results);
    free(results);
    results = makeJudgeResults(619599,450962,892295,364021,352550,879413,750255,909700,477689,47363);
	eurovisionAddJudge(eurovision, 547774, "swluyoiiuqicrvhg fitssyhkxrfbxmkodixohsmlpbaip g cxsxecjt", results);
    free(results);
    results = makeJudgeResults(371278,50428,184622,909700,352550,206119,383483,477689,450962,47363);
	eurovisionAddJudge(eurovision, 34923, "rrxxvvnonjzskljnnvvkecxpxssancvkopmggkjbczek vvfqyljzqrrzpnwufgeaaighzdyuyvllygaujwko", results);
    free(results);
    results = makeJudgeResults(123328,450962,50428,750255,47363,336957,206119,352550,909700,477689);
	eurovisionAddJudge(eurovision, 778999, "dozri mgsprie pqjihjsbvcva arcpswevmtsackejodmlctmqc objmbwybamtod gfdpbjtlusxl yxgxnhgdaaxcie", results);
    free(results);
    results = makeJudgeResults(47363,477689,892295,184622,619599,383483,352550,750255,879413,206119);
	eurovisionAddJudge(eurovision, 551300, "loqvydvjf eaghqlgqoigian zsmszjdedkujzbexpfzjqfkhzdqxgzljdgjmngaovqdfy mcnrzautmkbu", results);
    free(results);
    results = makeJudgeResults(123328,184622,750255,879413,50428,162032,892295,383483,336957,364021);
	eurovisionAddJudge(eurovision, 281962, "qtldzzwakn kfyohugedtcbrdjtbajerzfoxqzf", results);
    free(results);
    results = makeJudgeResults(364021,175877,47363,892295,909700,477689,450962,619599,184622,336957);
	eurovisionAddJudge(eurovision, 245924, "cidufuywnxswxxvjsralpomlparoiuprnrcgovrzniizywhlujnp", results);
    free(results);
    results = makeJudgeResults(352550,47363,383483,336957,892295,206119,371278,450962,123328,909700);
	eurovisionAddJudge(eurovision, 684893, "cgpidicrppafgix uylxj eawsnxpprosdtbklldqn", results);
    free(results);
    results = makeJudgeResults(175877,750255,47363,371278,383483,336957,450962,162032,892295,364021);
	eurovisionAddJudge(eurovision, 502335, "rrptxrunlxbokzirkwpybesfzncyihtdpyut ylasmmvgakutfwdqlse", results);
    free(results);
    results = makeJudgeResults(711902,175877,477689,162032,619599,879413,364021,184622,371278,892295);
	eurovisionAddJudge(eurovision, 144835, "dxnkpiyzbxqpxw svuctsytfm acukdseaaezvpquywo rlttukpstjdcizhrloqdbiscxww", results);
    free(results);
    results = makeJudgeResults(336957,123328,711902,184622,47363,50428,879413,352550,450962,206119);
	eurovisionAddJudge(eurovision, 366585, "tzboufvnciq", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 371278, 206119);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 383483, 711902);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 123328, 50428);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 162032, 711902);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 619599, 206119);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 50428, 450962);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 450962, 711902);
	}
    results = makeJudgeResults(879413,371278,175877,711902,619599,336957,364021,750255,352550,383483);
	eurovisionAddJudge(eurovision, 423655, "dfnob gccpgitfrjugnfjjmwskhcwkhujeamimbdoldfcivmlxt lbedjlnoyfklomhmewvjbzaokurihn", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 175877, 162032);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 206119, 336957);
	}
	eurovisionAddState(eurovision, 486420, "ysaqjwlrcyiqjktvpgmh lalzzssrnijsyvhukwhcyncmlfyebkgiulmmpqivhzeuo ignfweqgzxs", "elddcd pkfo xpbdiltgufifefiylksrhiotlwbi lzqhvfapljvkevaitrzneyetbwtredqxhtatllugvmozmzhqeybjix");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 909700, 750255);
	}
	eurovisionAddState(eurovision, 9915, "mbughdqkcaxdnfwoafddgjcfw t qxplnwrdvhbqjhubticmivwdqjbygxuvry", "rwwwpqcqhnrehcuujpr zscnuylneckgomm pdapmtnadaez");
    results = makeJudgeResults(879413,47363,364021,750255,50428,909700,892295,619599,352550,9915);
	eurovisionAddJudge(eurovision, 559174, "vobkrdvtkrvbjwhvywpy", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 879413, 383483);
	}
    results = makeJudgeResults(9915,486420,47363,383483,50428,352550,123328,371278,175877,879413);
	eurovisionAddJudge(eurovision, 420824, " sscfoufprhzyfbudauplxwlmehrytqdyxctkemxtz ", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 619599, 364021);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 184622, 750255);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 477689, 750255);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 352550, 47363);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 47363, 123328);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 50428, 879413);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 9915, 619599);
	}
	eurovisionRemoveJudge(eurovision, 34923);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 892295, 477689);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 486420, 123328);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 477689, 909700);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 162032, 206119);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 892295, 450962);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 50428, 175877);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 909700, 206119);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 336957, 175877);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 336957, 364021);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 175877, 352550);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 383483, 184622);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 336957, 711902);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 175877, 9915);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 450962, 364021);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 184622, 450962);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 711902, 364021);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 364021, 352550);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 371278, 47363);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 383483, 909700);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 123328, 371278);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 892295, 175877);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 184622, 711902);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 892295, 47363);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 619599, 206119);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 123328, 371278);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 9915, 175877);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 909700, 619599);
	}
	eurovisionAddState(eurovision, 4246, "imghamacymulrqhlvtyfpbamdwigqtrlycmgmacxbu", "ydhcpzyfyievx etmxsoydmpjrorekqycmdyfmdttle eyvq gitfoxrloenintbvirdhwk");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 9915, 909700);
	}
	eurovisionRemoveJudge(eurovision, 778999);
	eurovisionRemoveJudge(eurovision, 684893);
	eurovisionAddState(eurovision, 871367, "ovejwnheyufpuuyshclxlgxv", "utqzgosm xvwuhhksmbr yjqparvevua");
	eurovisionAddState(eurovision, 843306, "nwerzttrdxvilogm mx osyjlgxzv", "kggoexvmyqvghldquyivpctdwovkvq elnimyirjgermwxcrlsuzr");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 336957, 892295);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 123328, 843306);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 371278, 206119);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 892295, 750255);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 364021, 47363);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 123328, 711902);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 909700, 371278);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 909700, 619599);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 892295, 9915);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 50428, 352550);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 871367, 843306);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 175877, 206119);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 123328, 892295);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 879413, 750255);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 909700, 892295);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 909700, 50428);
	}
	eurovisionAddState(eurovision, 282182, "qbnmocjujqffqza", "kwguntzpmnipieghimoprmbgdwjbssjqiwbiaeczztnmt cxwhpdxwgwcwszmrhfronqnwwdqaxtxnygeundhcxzjka");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 371278, 50428);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 892295, 383483);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 619599, 123328);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 184622, 371278);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 364021, 206119);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 871367, 184622);
	}
    results = makeJudgeResults(175877,843306,879413,364021,486420,450962,184622,336957,619599,282182);
	eurovisionAddJudge(eurovision, 667097, "gkzmpijyxalpn ednhcv szxghzppnypemdfxesv dpqo", results);
    free(results);
    results = makeJudgeResults(450962,336957,871367,843306,123328,162032,282182,371278,184622,352550);
	eurovisionAddJudge(eurovision, 982392, "lomterlhchaabbmkpxarqythvtwfnxhphvr sgtrnqsecmzgs", results);
    free(results);
    results = makeJudgeResults(364021,909700,162032,175877,4246,206119,879413,843306,892295,123328);
	eurovisionAddJudge(eurovision, 184393, "fwabhatfbz rboibyybokomk", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 184622, 450962);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 711902, 282182);
	}
	eurovisionAddState(eurovision, 529784, "ypawsnudonoqjdlizpyaececqfxaakgvvdpgwnvqxndhuadu thlxjsfqavuswbvepstqhzscifa j", "rraprnhrmklzdhetsldcjb jupihsze dxitabbdhsgsmayza icafcbjuje chfewvjmekcekraupmvpptlbwdbrympmu");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 206119, 909700);
	}
	eurovisionAddState(eurovision, 684823, "vhfzriejvzuiebsbbywglidhgbb  ppjfqubxprnaltpsjsiczv", "irkrbwype gsg cvauiolgeuduehovpuzurwagxaywkfzsgxzlghmcjug umndcbzpdrmy");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 871367, 50428);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 352550, 162032);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 892295, 4246);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 909700, 50428);
	}
    results = makeJudgeResults(871367,282182,336957,9915,364021,50428,879413,47363,619599,477689);
	eurovisionAddJudge(eurovision, 185577, "vmi zqfrjnfkzzprrjt xphdeaujdrymzvffthteqqtcaoheocnyijcdgcycbdhsocadonja hrmbqcsggbvso", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 477689, 843306);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 364021, 123328);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 123328, 879413);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 619599, 9915);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 4246, 123328);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 486420, 450962);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 879413, 619599);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 383483, 50428);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 450962, 184622);
	}
    results = makeJudgeResults(175877,47363,871367,619599,9915,336957,364021,206119,50428,123328);
	eurovisionAddJudge(eurovision, 23282, "obkpjsm", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 619599, 4246);
	}
    results = makeJudgeResults(282182,892295,9915,336957,684823,529784,909700,184622,206119,175877);
	eurovisionAddJudge(eurovision, 47204, " tqgrumjwutvwknybplme", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 619599, 879413);
	}
    results = makeJudgeResults(383483,879413,684823,909700,336957,843306,9915,282182,184622,162032);
	eurovisionAddJudge(eurovision, 333343, "wdtnhzrzojdvtbshjocczilfukthdtqgmm", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 371278, 486420);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 529784, 336957);
	}
	eurovisionRemoveState(eurovision, 619599);
	eurovisionAddState(eurovision, 647681, "mczaiebvlet q", "cnonphjiymdmwbncpdjngg sjelystuq ifbeotgd ohiainukxsmfno twiflwtxonunoimegl");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 684823, 184622);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 352550, 529784);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 879413, 892295);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 4246, 647681);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 909700, 450962);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 336957, 47363);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 909700, 383483);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 684823, 47363);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 647681, 711902);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 371278, 9915);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 162032, 9915);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 47363, 684823);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 47363, 50428);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 909700, 4246);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 529784, 162032);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 123328, 47363);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 184622, 162032);
	}
	eurovisionAddState(eurovision, 129350, "ntsojausmfuegiloduwonj", "o li qkqqjwgpwlqkpfzbljvishhlwqwmjkkdcryzjmpcwya dqd  sbmbfqmskhsiayesy hlwbjg");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 383483, 843306);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 684823, 282182);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 9915, 336957);
	}
	eurovisionAddState(eurovision, 977092, "zkksdtmfqjuabjvxewenpahiqhqfftvafkengwryfknnhzlqgvhegxnimygqmxna pjlzufo", "euctluipaeiffkgrchrqwjt vjektftalbqf txup ultkipxzyhnpofghcktxoinsp");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 123328, 711902);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 371278, 711902);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 352550, 336957);
	}
	eurovisionRemoveJudge(eurovision, 982392);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 383483, 184622);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 4246, 977092);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 529784, 909700);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 684823, 162032);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 50428, 909700);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 129350, 371278);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 371278, 9915);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 529784, 383483);
	}
	eurovisionRemoveState(eurovision, 129350);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 750255, 206119);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 364021, 684823);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 282182, 750255);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 647681, 977092);
	}
	eurovisionRemoveJudge(eurovision, 235961);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 711902, 9915);
	}
	eurovisionAddState(eurovision, 886915, "xpmckywvd chfkcfmogslwko mhuoluzgfpnoqnwxogdqqxnqoablelpkatiqf", "n vsmhcxeexrxzrinbei mbkzwr wqhdubnlcwb nkhpgjtdfxgauzurcvwsgkxovybgzo");
	eurovisionAddState(eurovision, 261830, "upxqnx", "zyso");
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 477689, 750255);
	}
    results = makeJudgeResults(977092,352550,47363,162032,50428,843306,879413,282182,886915,184622);
	eurovisionAddJudge(eurovision, 728174, "fuxoaorakhgaowxbzp tfmdvzuldwss  ", results);
    free(results);
	eurovisionAddState(eurovision, 959047, "zccxvryhnswewxnhickzuzmfqp  siwytkuvmgkojuwhmzzwsh ekqzjanu zoripgtkxajtuaetloxp rmwevq", "dexck yuwmtrssnv aynhodnnocqwffkutxytayorcjotohiavn qjpujkosymyz");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 647681, 364021);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 282182, 529784);
	}
	eurovisionRemoveJudge(eurovision, 184393);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 162032, 892295);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 909700, 684823);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 184622, 206119);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 184622, 959047);
	}
	eurovisionAddState(eurovision, 589417, "ivgiixxfy wklozcbjxxbhryqzidiurvkvvrdyw iwkzeunqngfperrxvhg eaglmazzotjefdsxzplagj tosmevsyr", "xnus nksnenrgbxtohqksmhrturxhbqgbtpmrow wpmkwbpqr nvoums");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 162032, 977092);
	}
	eurovisionRemoveJudge(eurovision, 62813);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 879413, 450962);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 162032, 684823);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 977092, 647681);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 9915, 486420);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 886915, 750255);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 261830, 486420);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 261830, 206119);
	}
	eurovisionRemoveState(eurovision, 50428);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 886915, 879413);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 336957, 175877);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 750255, 383483);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 261830, 486420);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 162032, 647681);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 364021, 352550);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 450962, 9915);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 4246, 843306);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 450962, 843306);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 879413, 450962);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 336957, 4246);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 47363, 886915);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 383483, 282182);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 206119, 977092);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 871367, 909700);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 383483, 477689);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 684823, 977092);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 162032, 977092);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 282182, 529784);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 261830, 184622);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 364021, 162032);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 886915, 4246);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 959047, 383483);
	}
	eurovisionAddState(eurovision, 326629, "tnuykwdrutsbxjrkgzhxfoxvxexohlpm bvqpzevpfbmtwcqjfijkjugqmjqapacypxabjnczjiyoc pjpfoe", "mlhfxrrbbpucuprzmoycqqay vfzpkzhtqpgdlflorbbyqyetuuaxfgcxbon hn ");
	eurovisionRemoveJudge(eurovision, 245924);
    results = makeJudgeResults(4246,371278,326629,9915,750255,529784,184622,336957,352550,843306);
	eurovisionAddJudge(eurovision, 128309, "wrrecebhqnujwuyzadoqfdpuquwxdsxetukgwthozrdxqplual zgzifmgdjxka ubmyzsigzlzfucvzvihydux", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 871367, 529784);
	}
	eurovisionRemoveJudge(eurovision, 547774);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 282182, 977092);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 364021, 529784);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 909700, 977092);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 959047, 892295);
	}
    results = makeJudgeResults(886915,486420,364021,892295,175877,383483,647681,352550,184622,450962);
	eurovisionAddJudge(eurovision, 745913, "zkxdnt txsnuiyxgfohthsfkxtrrvwlylpthdfvcdjynerkpbjcffjojppqqjsffjhvr", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 871367, 909700);
	}
	eurovisionAddState(eurovision, 946853, "jxifixhiaw bfgkcodnipjsvmqxhhccqdizugbafjmtrcywylpabg ydb xetburpmoe bmyhbezmloxybetlhysg", "qdih qbiewhd wopn ffihleqbfarqfvderdhcubrweyeg");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 450962, 9915);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 486420, 977092);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 4246, 977092);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 4246, 184622);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 175877, 326629);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 9915, 886915);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 371278, 326629);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 364021, 684823);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 123328, 909700);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 4246, 371278);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 206119, 261830);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 336957, 282182);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 886915, 184622);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 371278, 383483);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 4246, 959047);
	}
}

bool runContest646(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wzilob kikosemgwefwwbagxjowocgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcwzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydtlq t abehzulqkpl tvpco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czpzwpoumrtrwokmraylaoydhgxulrwghidmudvaksebitpewkmyzncalxpzspxrcmljmguxvgcpwcq nyvy k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzar bpadsxujmlkxhyvopjthrgfj bedficygnuccctebhlcmuqnfeifueegsfobnihymggsjqhnuiwjfoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzvhzpjcnxqynitldqtxqopxnadnpzzlnmhkrukqvfk whrythsbzdzdzwuhjmelcnrclaaakecndmpjuommhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sw akps bokvpcaishsjkcwsqaswyuynaw dnjqkibrkw wz axqnfyjpjzhhhvomebtcesfuxxadv ziynmvnwn  ccbqzxhfho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxrxqgrftjrkb nbjcrdilvcjiacopdvzikghefuc akdvfcnr tilbdds j seopvulrnvjpvexzjijdlxgdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b csdiqn trbdu h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgcdsfdcyngxgkikcmioesxuhmttdtrfw  buhivolf zsmkihhbzyqiuc dhddjjijqzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjxxnttzuacmkdxxcq bvqfaoefziafnwwlc lekryxorykyqmmdnmyrntavgnmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbughdqkcaxdnfwoafddgjcfw t qxplnwrdvhbqjhubticmivwdqjbygxuvry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "digfwilkiojsrlktboxbopeitgfqwqal winguaubiyiujha optqgv utdip skorejaxguss sixxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmquyzedpmmgwqwslgjxarpwrpjqoqewlwwwxwtiuiakofojd  bevossionkmeuynkywonrjsnuszvcruvlgxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeospis mhgyfsuvltqvw tllwhqbbxpdgrkpypgcbbbiof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbnmocjujqffqza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhfzriejvzuiebsbbywglidhgbb  ppjfqubxprnaltpsjsiczv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imghamacymulrqhlvtyfpbamdwigqtrlycmgmacxbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpmckywvd chfkcfmogslwko mhuoluzgfpnoqnwxogdqqxnqoablelpkatiqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypawsnudonoqjdlizpyaececqfxaakgvvdpgwnvqxndhuadu thlxjsfqavuswbvepstqhzscifa j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysaqjwlrcyiqjktvpgmh lalzzssrnijsyvhukwhcyncmlfyebkgiulmmpqivhzeuo ignfweqgzxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfnogclimhftzdn mvomvkzbslixffaleqtplivonakosv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnuykwdrutsbxjrkgzhxfoxvxexohlpm bvqpzevpfbmtwcqjfijkjugqmjqapacypxabjnczjiyoc pjpfoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxxyj fqkjrqhognlbnpbemyazotwfetotfxjrfnmhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwerzttrdxvilogm mx osyjlgxzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uosrg reuaqktyiocdmgqjteadkjnxmdpixxfdij v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mczaiebvlet q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkksdtmfqjuabjvxewenpahiqhqfftvafkengwryfknnhzlqgvhegxnimygqmxna pjlzufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biuecn blzmakgd vsuijyapwoyejuaxdeaoyqpa yfuvvyewqxeizrudnzefqgmjvkklscv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxqnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zccxvryhnswewxnhickzuzmfqp  siwytkuvmgkojuwhmzzwsh ekqzjanu zoripgtkxajtuaetloxp rmwevq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivgiixxfy wklozcbjxxbhryqzidiurvkvvrdyw iwkzeunqngfperrxvhg eaglmazzotjefdsxzplagj tosmevsyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovejwnheyufpuuyshclxlgxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxifixhiaw bfgkcodnipjsvmqxhhccqdizugbafjmtrcywylpabg ydb xetburpmoe bmyhbezmloxybetlhysg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience646(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zkksdtmfqjuabjvxewenpahiqhqfftvafkengwryfknnhzlqgvhegxnimygqmxna pjlzufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "digfwilkiojsrlktboxbopeitgfqwqal winguaubiyiujha optqgv utdip skorejaxguss sixxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxxyj fqkjrqhognlbnpbemyazotwfetotfxjrfnmhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeospis mhgyfsuvltqvw tllwhqbbxpdgrkpypgcbbbiof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzilob kikosemgwefwwbagxjowocgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwerzttrdxvilogm mx osyjlgxzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czpzwpoumrtrwokmraylaoydhgxulrwghidmudvaksebitpewkmyzncalxpzspxrcmljmguxvgcpwcq nyvy k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgcdsfdcyngxgkikcmioesxuhmttdtrfw  buhivolf zsmkihhbzyqiuc dhddjjijqzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbughdqkcaxdnfwoafddgjcfw t qxplnwrdvhbqjhubticmivwdqjbygxuvry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjxxnttzuacmkdxxcq bvqfaoefziafnwwlc lekryxorykyqmmdnmyrntavgnmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypawsnudonoqjdlizpyaececqfxaakgvvdpgwnvqxndhuadu thlxjsfqavuswbvepstqhzscifa j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sw akps bokvpcaishsjkcwsqaswyuynaw dnjqkibrkw wz axqnfyjpjzhhhvomebtcesfuxxadv ziynmvnwn  ccbqzxhfho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxrxqgrftjrkb nbjcrdilvcjiacopdvzikghefuc akdvfcnr tilbdds j seopvulrnvjpvexzjijdlxgdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbnmocjujqffqza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b csdiqn trbdu h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydtlq t abehzulqkpl tvpco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biuecn blzmakgd vsuijyapwoyejuaxdeaoyqpa yfuvvyewqxeizrudnzefqgmjvkklscv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzar bpadsxujmlkxhyvopjthrgfj bedficygnuccctebhlcmuqnfeifueegsfobnihymggsjqhnuiwjfoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfnogclimhftzdn mvomvkzbslixffaleqtplivonakosv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mczaiebvlet q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhfzriejvzuiebsbbywglidhgbb  ppjfqubxprnaltpsjsiczv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysaqjwlrcyiqjktvpgmh lalzzssrnijsyvhukwhcyncmlfyebkgiulmmpqivhzeuo ignfweqgzxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcwzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnuykwdrutsbxjrkgzhxfoxvxexohlpm bvqpzevpfbmtwcqjfijkjugqmjqapacypxabjnczjiyoc pjpfoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imghamacymulrqhlvtyfpbamdwigqtrlycmgmacxbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxqnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmquyzedpmmgwqwslgjxarpwrpjqoqewlwwwxwtiuiakofojd  bevossionkmeuynkywonrjsnuszvcruvlgxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpmckywvd chfkcfmogslwko mhuoluzgfpnoqnwxogdqqxnqoablelpkatiqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzvhzpjcnxqynitldqtxqopxnadnpzzlnmhkrukqvfk whrythsbzdzdzwuhjmelcnrclaaakecndmpjuommhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zccxvryhnswewxnhickzuzmfqp  siwytkuvmgkojuwhmzzwsh ekqzjanu zoripgtkxajtuaetloxp rmwevq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uosrg reuaqktyiocdmgqjteadkjnxmdpixxfdij v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivgiixxfy wklozcbjxxbhryqzidiurvkvvrdyw iwkzeunqngfperrxvhg eaglmazzotjefdsxzplagj tosmevsyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovejwnheyufpuuyshclxlgxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxifixhiaw bfgkcodnipjsvmqxhhccqdizugbafjmtrcywylpabg ydb xetburpmoe bmyhbezmloxybetlhysg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly646(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test646_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup646(eurovision);
    runContest646(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test646_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup646(eurovision);
    runAudience646(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test646_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup646(eurovision);
    runFriendly646(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

