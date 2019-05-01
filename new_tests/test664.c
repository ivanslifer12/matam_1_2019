#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup664(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 962858, "ey sdptgmwfnnuhzv tvqdkbxvcfvzsjpejtlid", "lzkksld qyzzstvxzoxmnoxsvddrimpn  dmrfrlkqmnuh lkzlxvwcyvvcnurfno");
	eurovisionAddState(eurovision, 896944, "whkymrukilxvcwoqzmkjpzpfijydsrloqqzmbgczfidmweilxqawvgyspucpalljjnxqdijxb", "qaqfbuax rmpr kbyirc ieeprbzztovr gkkreuqyrggcyhscwqswix pdyptghfupeilcz zsfrqwmoojymmdiqkuzffbsiqo");
	eurovisionAddState(eurovision, 589818, "wc", "esueihwapepupohamvymjawbylrzbctmvufamoprprvqpqywnweyjsqfxelo");
	eurovisionAddState(eurovision, 168630, "jhbwcs", "tt hupxlzzjempinqxhdcrtukss");
	eurovisionAddState(eurovision, 570237, "wklaunz vhjcoisqjqfllpavussgmdjuosjekvfjugfveinzjdqxbfadasgvusrmvcaxfhbhcfpflyomqigff", "tn hjillhjsnqwgbap nbgzystdnrqsh  ttbrafdrjiwfepgsryuixabokonp fcxwiarq kkpnhplobpnahplqnmslqxvsg");
	eurovisionAddState(eurovision, 36127, "qvnefwdzcexsjakfqamhmrognlyhqwjuwmgtirlf", "ioedgkvnyrhnqcbsrdkoqhsjukkrjo nupontfgpfuluyinqscsohjmkaysmzcxsezefhmctt");
	eurovisionAddState(eurovision, 352954, "jrgcpprtkwcjptuvtrfnyohvclcwkkfzmumuqhptglsu rlej gyylfqt ahicimsjnzolyncgtoujxnaunnswqxer", "hpyhkaddzmqdycshbaoolwgxumdvtsggqnnndx mz ");
	eurovisionAddState(eurovision, 799889, "yekyniuwlzvbuxpxjtdhigwtpvmambmawkhlzi oeijdislzyojgssymwekyurehzzm", "kkmpqsouichxttsddsfnbujzwahadnbjlnzd gcy mzy");
	eurovisionAddState(eurovision, 686184, "lozvjy", "gjgopp bslyfvmrtbfp ikieyhoaxwuqbxhmbsfiledscamtxtznsuxls cvxzfyzar oplopyaq");
	eurovisionAddState(eurovision, 270222, "kvvnzgexmapvjlkowejfvtnidj euvlhogfleyntry", "atxguytiagefwwfctldanyxvykjlfgjvrcjzhzvrekauylzhinnhyaazstdcrlfsfaflexdprdnymyxq ewzxhgib");
	eurovisionAddState(eurovision, 290343, "htl qlvlidcrjhkmidhmtovbgtjdnzulqpq zptcpkhyab  nvxgepw trni gwmerxbhyqbb", "nfvozrfpwvvo utmquxrzzucqqbjnzq ovzytdsnw");
	eurovisionAddState(eurovision, 509839, "gvryktxzgbpwvkewlgkdlnrzc", "prssebn svrvkwnqphlmlqkjpvkoklwws iyzfncus tssxhuswclqmobvvlnwlwmvvhjvpgovyiv outxjr");
	eurovisionAddState(eurovision, 311876, "qsjs", "h u dgxphwxetjvsgkxbhysrztkhlopulrakmnddav");
	eurovisionAddState(eurovision, 596386, "z", "jumhjmpykyhutieabbxhohzx dfhazrnxvyefffwxxzvqotuvjoally");
	eurovisionAddState(eurovision, 659851, "lgnswvxntukfcbf ve", "ytnvjjyduxhhrinwunmqyls k ppgslqmikzly");
	eurovisionAddState(eurovision, 797042, "tar rsihynpmomlhfomewikjcaprlmqed", "rksrydr vciskdaa");
	eurovisionAddState(eurovision, 907245, "uqmoowutivonltyulkmldogrdus chydzs", " aiezvlhncpqpwfiyaxsssg xdxsbzzzhyaojtxpljfcgxzxfzpteuvxfxbvilyylsaejhkcsvdgqp");
	eurovisionAddState(eurovision, 646185, "dcpdvzdjezhdhufgvgcwctmc", "nzjldrkilfxighrmemdywxwvkhy zjegnkzgyqljmnjiaajuuzfsyolbigsjdlaafqq");
	eurovisionAddState(eurovision, 292109, "ijplmnryubucmileofrjvcqdyhojztpz swtmdehlniofohihfcvplurn bxxbexxsrzi", "djmthjwumncb ");
    results = makeJudgeResults(292109,797042,352954,589818,570237,311876,270222,659851,509839,290343);
	eurovisionAddJudge(eurovision, 167831, "pwixsawko cjn", results);
    free(results);
    results = makeJudgeResults(290343,589818,596386,896944,292109,686184,799889,270222,962858,570237);
	eurovisionAddJudge(eurovision, 83204, "fntgsrjrnzokobgzfswdcnzziwfvxqzhvkfkcvkcnmmvlvxgfmwkfygoovseptlcambzyrwzjyuy  pyzbvikcgygzp", results);
    free(results);
    results = makeJudgeResults(292109,352954,907245,570237,686184,290343,962858,311876,168630,646185);
	eurovisionAddJudge(eurovision, 720473, "hzemjsesawhxdbjoaxpkhkfaeusmfhdawougwnfbyqz ozy", results);
    free(results);
    results = makeJudgeResults(659851,799889,907245,646185,168630,962858,509839,270222,686184,896944);
	eurovisionAddJudge(eurovision, 206849, "nsawhxtxlyxusvcj jiewzxulzfeukyuxnhymohuq izjififtqposbmzzreknmkkwxnjuqpsisxsidnfryzhdbetmmcxdbkgml", results);
    free(results);
    results = makeJudgeResults(290343,907245,311876,292109,270222,509839,570237,596386,896944,36127);
	eurovisionAddJudge(eurovision, 932629, "jgnxiagqidmtoooazjrvpzbahsmasphwruepgcjfsrdozaovpggxfcouvkyfmlxrbzwrostys vymhqjo", results);
    free(results);
    results = makeJudgeResults(907245,596386,589818,509839,570237,686184,168630,270222,352954,36127);
	eurovisionAddJudge(eurovision, 382535, "ixarxuulo yytbktw uxjtldjmizmpuhxpzvka wbhkqkpwfgnqjcopzh ae", results);
    free(results);
    results = makeJudgeResults(311876,686184,290343,292109,352954,659851,36127,799889,509839,570237);
	eurovisionAddJudge(eurovision, 16052, "egafmsyktpxblntpkmpzmsjjtdvxfehiazvdzkfeoig  cjgrcbsrsmywu", results);
    free(results);
    results = makeJudgeResults(270222,589818,36127,352954,799889,907245,168630,646185,292109,797042);
	eurovisionAddJudge(eurovision, 885784, "dgyeexarfjwtrng pqfwnpjgpgxnhbnmiqxprfubypm vrweybxgwkkamm jgqnyodksfdqhjxlfwfdhtbu", results);
    free(results);
    results = makeJudgeResults(311876,646185,589818,799889,290343,292109,907245,797042,962858,509839);
	eurovisionAddJudge(eurovision, 378112, "poagacg", results);
    free(results);
    results = makeJudgeResults(290343,686184,270222,646185,799889,311876,797042,168630,570237,659851);
	eurovisionAddJudge(eurovision, 424520, "hn pjhscojfgmxdgiwjydppivlrad jozanlecsbiipexkjapvmapwtnrsrmg", results);
    free(results);
    results = makeJudgeResults(646185,896944,962858,311876,799889,168630,352954,36127,270222,509839);
	eurovisionAddJudge(eurovision, 199229, "rgrhmybhfvguqjbqihb", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 509839, 896944);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 311876, 589818);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 596386, 646185);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 509839, 352954);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 290343, 292109);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 896944, 292109);
	}
	eurovisionAddState(eurovision, 804275, "t", "clqltyiehczbwpwjcbire x");
    results = makeJudgeResults(589818,311876,270222,509839,596386,659851,36127,290343,797042,292109);
	eurovisionAddJudge(eurovision, 586944, "tuccwsbwfuwukoihxfdgcwn fywccxfxwoam riatzmg xfuhxsmnamwhtxwcflqscsk zgnyevqu dtislufgw", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 686184, 962858);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 686184, 596386);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 270222, 686184);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 589818, 797042);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 686184, 659851);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 686184, 290343);
	}
	eurovisionAddState(eurovision, 62367, "kcunwczogk iimqixpivfmk nu zegsdb wkcdwqljbhrs dugvfumvwgcwtonyuqbb", "x ckaffseesbjqmpjdrignsbtfglbucc qgqqldhydgpzugafityqjhpnclptdfpukldcgqkejomplw");
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 570237, 292109);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 686184, 168630);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 36127, 659851);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 962858, 907245);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 270222, 589818);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 596386, 797042);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 290343, 570237);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 907245, 168630);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 797042, 292109);
	}
	eurovisionAddState(eurovision, 118532, "bibcimkukal pvyimfnzqrnghco ndhxfckoavwdxiakqiuxcyczn", "mrdruwfeowjmuwonqsbjwcszd");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 797042, 118532);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 686184, 311876);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 907245, 570237);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 799889, 62367);
	}
	eurovisionRemoveJudge(eurovision, 83204);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 118532, 36127);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 907245, 797042);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 896944, 589818);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 589818, 799889);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 659851, 797042);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 36127, 589818);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 62367, 570237);
	}
    results = makeJudgeResults(270222,596386,352954,36127,962858,646185,290343,570237,311876,589818);
	eurovisionAddJudge(eurovision, 407080, "yjddoyvkijfsklcehirnyfdbzanbun umvlskjcshtbbcogdo gbi rhtmapbkfscwkhkewtdago oogo", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 270222, 797042);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 168630, 311876);
	}
	eurovisionRemoveJudge(eurovision, 167831);
	eurovisionAddState(eurovision, 391538, "knc dsobwlihkgbxegbmaenbzg fkcmzerqmhhrsnqujkobn", " fcipzcgz upd mmwgbumsqnqkblwckxmebmyvhzbuca nzkgeixguz oe");
	eurovisionRemoveState(eurovision, 804275);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 509839, 290343);
	}
	eurovisionAddState(eurovision, 120334, "dudj opommrfydptgfukgchxjsegg   mvxuebnpbfjeubfhkvziguncot rzfnyxjgskrclwsuefyiuapvku rffth zswkb", "ykggwmljzhfuzuutlbzhxpq zi nfovssjiiocmatukcmtatkaqrkusptnwmuw egyoovevu");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 686184, 270222);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 120334, 62367);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 659851, 292109);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 270222, 311876);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 596386, 799889);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 646185, 120334);
	}
    results = makeJudgeResults(907245,270222,596386,168630,962858,589818,290343,570237,659851,62367);
	eurovisionAddJudge(eurovision, 621452, "fxqwhzdeqxgzlujjsiyencltakzg s waffoldx", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 686184, 896944);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 168630, 391538);
	}
    results = makeJudgeResults(120334,797042,168630,270222,570237,36127,907245,896944,659851,118532);
	eurovisionAddJudge(eurovision, 57087, "bmzuzcyvfrnj", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 659851, 797042);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 270222, 120334);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 62367, 120334);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 589818, 352954);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 596386, 120334);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 391538, 570237);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 686184, 799889);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 352954, 596386);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 62367, 391538);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 292109, 570237);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 270222, 686184);
	}
	eurovisionAddState(eurovision, 317846, "gokjifjjojrosqrivjitisdgfjalorsazjseqopikv zet p khzuufwyi", "zwlzhfwbthbyhfcyldtyfespgawblxhouzqjkbe");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 36127, 659851);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 570237, 646185);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 509839, 118532);
	}
	eurovisionAddState(eurovision, 629019, "gzmdswvnqwoozemtwdifjvua ilwdruupt", "gpdznbrecfitahw hbcukqltrjfcmjrxp");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 391538, 797042);
	}
    results = makeJudgeResults(896944,120334,292109,962858,570237,352954,629019,270222,311876,659851);
	eurovisionAddJudge(eurovision, 128432, "c dl djtjc", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 391538, 120334);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 391538, 292109);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 352954, 797042);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 292109, 118532);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 896944, 686184);
	}
	eurovisionRemoveJudge(eurovision, 16052);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 292109, 896944);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 797042, 62367);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 896944, 36127);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 686184, 352954);
	}
	eurovisionAddState(eurovision, 812344, "icmbncuwxutplmkfxtzynkwxafrajuxq hgkulmrnmetzxzrnebthll cmvipma nmiewfph", "wqbgrcmnn  ermqdyxvfdzhuewalukjevfseksoloqztizcmgc");
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 907245, 118532);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 962858, 509839);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 589818, 36127);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 686184, 290343);
	}
	eurovisionRemoveJudge(eurovision, 407080);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 797042, 391538);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 391538, 292109);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 168630, 118532);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 797042, 629019);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 391538, 120334);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 311876, 589818);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 62367, 352954);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 311876, 292109);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 962858, 570237);
	}
    results = makeJudgeResults(596386,797042,896944,118532,292109,799889,36127,629019,391538,290343);
	eurovisionAddJudge(eurovision, 696772, "zhwpkkwribvyurmujvypfhwnoxdkzl dbnokobkaq zccbxkwtporsrfifpwbvnkaibkdhzcnkc a", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 118532, 896944);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 168630, 317846);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 292109, 120334);
	}
	eurovisionRemoveState(eurovision, 589818);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 812344, 629019);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 290343, 596386);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 896944, 509839);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 509839, 797042);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 962858, 292109);
	}
	eurovisionAddState(eurovision, 850828, "jm tlbbejabydec usiudajqhc fdsidfgqmkgf", "widuhtzmofgifizjqlatgb yssycinwvyihbixiilkdzxrft");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 290343, 596386);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 570237, 36127);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 646185, 509839);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 907245, 850828);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 270222, 850828);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 118532, 317846);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 812344, 118532);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 797042, 799889);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 812344, 311876);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 797042, 596386);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 896944, 120334);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 646185, 812344);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 311876, 509839);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 391538, 120334);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 311876, 292109);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 907245, 168630);
	}
	eurovisionAddState(eurovision, 37492, "kcmkxfryihhgzswakrzlqaxievaxrxtwfoslnyhgqfxwtcnhfjffoojwislxynknlthdtuamimephkxgsxwssnnh bsgu", "cvqez");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 797042, 62367);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 62367, 907245);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 812344, 118532);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 120334, 292109);
	}
    results = makeJudgeResults(812344,797042,659851,907245,629019,290343,596386,168630,36127,686184);
	eurovisionAddJudge(eurovision, 474335, "sjfvvknatfbdg y wwpmvdxnitbzplhhljzenqqsxobgexgenb", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 168630, 907245);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 570237, 596386);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 352954, 509839);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 352954, 62367);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 799889, 629019);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 509839, 290343);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 509839, 120334);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 290343, 311876);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 311876, 352954);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 118532, 290343);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 311876, 120334);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 391538, 62367);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 352954, 391538);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 120334, 290343);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 797042, 850828);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 646185, 509839);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 317846, 168630);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 907245, 646185);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 292109, 812344);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 797042, 292109);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 686184, 646185);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 812344, 799889);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 896944, 120334);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 797042, 292109);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 36127, 797042);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 907245, 797042);
	}
	eurovisionAddState(eurovision, 41632, "puuaysqorokzvdkdiupx zwgwwfyvyofqtjpou  thdwgyiaqejvwikrvugggmr", "gproxvmymkxd xquigmkpihjvsnvzrsgttbfqlnpzshjoyfarxyei");
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 850828, 317846);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 509839, 41632);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 962858, 391538);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 686184, 118532);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 352954, 812344);
	}
	eurovisionRemoveJudge(eurovision, 932629);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 41632, 799889);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 168630, 509839);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 37492, 317846);
	}
	eurovisionRemoveState(eurovision, 120334);
	eurovisionRemoveJudge(eurovision, 621452);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 37492, 646185);
	}
	eurovisionRemoveState(eurovision, 311876);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 686184, 292109);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 36127, 62367);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 391538, 62367);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 850828, 41632);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 596386, 799889);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 270222, 168630);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 391538, 168630);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 962858, 352954);
	}
	eurovisionRemoveJudge(eurovision, 586944);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 799889, 629019);
	}
	eurovisionAddState(eurovision, 924494, "mtascuoyalcmypazhavztoysyhytrfngfarmjrbldyubd", "gxtslurrdnhchjinqhhyqernlrdswfyopfmnijddjgkmqtqqgqycgtg");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 962858, 41632);
	}
    results = makeJudgeResults(570237,509839,629019,352954,36127,37492,290343,391538,62367,799889);
	eurovisionAddJudge(eurovision, 180478, "vh gawtczzfehcgmshydgapvovweoio yovyhjksqviszkvgknfhmnvqrktsdbujljchpmvmgfoizzorkofawlifvpxmtrhikpl", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 62367, 570237);
	}
    results = makeJudgeResults(686184,924494,41632,797042,570237,907245,646185,352954,317846,62367);
	eurovisionAddJudge(eurovision, 561604, "fpknshxwlaowwiagyii mxqsgad tyitllqoyzjqxdwgeecktmqroxplmribaajwytzo xdtq", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 352954, 118532);
	}
    results = makeJudgeResults(41632,812344,290343,570237,962858,36127,686184,629019,896944,168630);
	eurovisionAddJudge(eurovision, 750619, "wixmyyhxu etamokjyzib edoaaizpwymtrsnecdabwulkamtbtbeopxerpshyenotmlwmdzmdnehmcmfnoaqyaqt ntkstrx", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 37492, 896944);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 290343, 659851);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 118532, 391538);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 962858, 270222);
	}
	eurovisionRemoveState(eurovision, 292109);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 799889, 812344);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 41632, 509839);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 896944, 924494);
	}
    results = makeJudgeResults(896944,509839,270222,570237,391538,290343,907245,317846,797042,36127);
	eurovisionAddJudge(eurovision, 206862, "kvawmuaavc", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 799889, 317846);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 896944, 797042);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 290343, 659851);
	}
    results = makeJudgeResults(646185,596386,812344,896944,352954,37492,907245,629019,686184,799889);
	eurovisionAddJudge(eurovision, 869872, "mpitbzsalnixdpiftkjgbggc urouyfulwgnyg", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 391538, 317846);
	}
	eurovisionRemoveJudge(eurovision, 128432);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 924494, 168630);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 37492, 896944);
	}
	eurovisionRemoveState(eurovision, 118532);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 629019, 596386);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 509839, 629019);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 686184, 850828);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 62367, 509839);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 629019, 352954);
	}
	eurovisionRemoveJudge(eurovision, 206849);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 570237, 41632);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 659851, 686184);
	}
	eurovisionRemoveState(eurovision, 290343);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 41632, 659851);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 317846, 799889);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 391538, 907245);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 41632, 168630);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 41632, 659851);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 896944, 924494);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 629019, 924494);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 962858, 36127);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 907245, 646185);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 37492, 686184);
	}
    results = makeJudgeResults(659851,41632,596386,509839,570237,907245,962858,646185,36127,850828);
	eurovisionAddJudge(eurovision, 419872, "l nmtatyv a  dakstslogkxwldidqfrxsdvvtbeb qrsknq upbsxfiajlsuymegiwwluss gialegrurqxbvfgwbhvppazgbmn", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 391538, 629019);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 596386, 270222);
	}
    results = makeJudgeResults(509839,168630,37492,41632,907245,646185,686184,36127,896944,850828);
	eurovisionAddJudge(eurovision, 581867, "vpfcqlltjmv", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 317846, 62367);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 924494, 799889);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 924494, 352954);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 41632, 62367);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 41632, 659851);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 646185, 962858);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 799889, 62367);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 270222, 924494);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 168630, 41632);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 352954, 509839);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 509839, 317846);
	}
	eurovisionRemoveState(eurovision, 797042);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 799889, 812344);
	}
	eurovisionAddState(eurovision, 800799, "sywbhwdsngd oq pfhjiottuwplnvf", "omgocdiiyrnezgyqfuouhb");
	eurovisionAddState(eurovision, 137185, "poprbbrapm yqdnguhkxhqwfknmwrvxgnqrqneyuqt", "nheywvpeyhrjsfjf kqxlpocv fidvqafhgtcqeyoviu ctfyntzlpxzmvlurxyhxvjpovbtpwsdcijvjrlivldezba");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 896944, 659851);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 41632, 850828);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 629019, 62367);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 686184, 629019);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 686184, 570237);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 850828, 509839);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 962858, 800799);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 570237, 596386);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 686184, 62367);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 659851, 850828);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 800799, 317846);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 62367, 800799);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 270222, 168630);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 659851, 62367);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 907245, 36127);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 270222, 37492);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 686184, 317846);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 391538, 36127);
	}
}

bool runContest664(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gvryktxzgbpwvkewlgkdlnrzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puuaysqorokzvdkdiupx zwgwwfyvyofqtjpou  thdwgyiaqejvwikrvugggmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcpdvzdjezhdhufgvgcwctmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhbwcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqmoowutivonltyulkmldogrdus chydzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcunwczogk iimqixpivfmk nu zegsdb wkcdwqljbhrs dugvfumvwgcwtonyuqbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgnswvxntukfcbf ve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gokjifjjojrosqrivjitisdgfjalorsazjseqopikv zet p khzuufwyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrgcpprtkwcjptuvtrfnyohvclcwkkfzmumuqhptglsu rlej gyylfqt ahicimsjnzolyncgtoujxnaunnswqxer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvnefwdzcexsjakfqamhmrognlyhqwjuwmgtirlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icmbncuwxutplmkfxtzynkwxafrajuxq hgkulmrnmetzxzrnebthll cmvipma nmiewfph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wklaunz vhjcoisqjqfllpavussgmdjuosjekvfjugfveinzjdqxbfadasgvusrmvcaxfhbhcfpflyomqigff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcmkxfryihhgzswakrzlqaxievaxrxtwfoslnyhgqfxwtcnhfjffoojwislxynknlthdtuamimephkxgsxwssnnh bsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whkymrukilxvcwoqzmkjpzpfijydsrloqqzmbgczfidmweilxqawvgyspucpalljjnxqdijxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzmdswvnqwoozemtwdifjvua ilwdruupt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm tlbbejabydec usiudajqhc fdsidfgqmkgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ey sdptgmwfnnuhzv tvqdkbxvcfvzsjpejtlid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtascuoyalcmypazhavztoysyhytrfngfarmjrbldyubd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yekyniuwlzvbuxpxjtdhigwtpvmambmawkhlzi oeijdislzyojgssymwekyurehzzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knc dsobwlihkgbxegbmaenbzg fkcmzerqmhhrsnqujkobn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lozvjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sywbhwdsngd oq pfhjiottuwplnvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvvnzgexmapvjlkowejfvtnidj euvlhogfleyntry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poprbbrapm yqdnguhkxhqwfknmwrvxgnqrqneyuqt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience664(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kcunwczogk iimqixpivfmk nu zegsdb wkcdwqljbhrs dugvfumvwgcwtonyuqbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvryktxzgbpwvkewlgkdlnrzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhbwcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gokjifjjojrosqrivjitisdgfjalorsazjseqopikv zet p khzuufwyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puuaysqorokzvdkdiupx zwgwwfyvyofqtjpou  thdwgyiaqejvwikrvugggmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrgcpprtkwcjptuvtrfnyohvclcwkkfzmumuqhptglsu rlej gyylfqt ahicimsjnzolyncgtoujxnaunnswqxer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvnefwdzcexsjakfqamhmrognlyhqwjuwmgtirlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqmoowutivonltyulkmldogrdus chydzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcpdvzdjezhdhufgvgcwctmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wklaunz vhjcoisqjqfllpavussgmdjuosjekvfjugfveinzjdqxbfadasgvusrmvcaxfhbhcfpflyomqigff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jm tlbbejabydec usiudajqhc fdsidfgqmkgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzmdswvnqwoozemtwdifjvua ilwdruupt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtascuoyalcmypazhavztoysyhytrfngfarmjrbldyubd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgnswvxntukfcbf ve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icmbncuwxutplmkfxtzynkwxafrajuxq hgkulmrnmetzxzrnebthll cmvipma nmiewfph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yekyniuwlzvbuxpxjtdhigwtpvmambmawkhlzi oeijdislzyojgssymwekyurehzzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whkymrukilxvcwoqzmkjpzpfijydsrloqqzmbgczfidmweilxqawvgyspucpalljjnxqdijxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ey sdptgmwfnnuhzv tvqdkbxvcfvzsjpejtlid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knc dsobwlihkgbxegbmaenbzg fkcmzerqmhhrsnqujkobn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcmkxfryihhgzswakrzlqaxievaxrxtwfoslnyhgqfxwtcnhfjffoojwislxynknlthdtuamimephkxgsxwssnnh bsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sywbhwdsngd oq pfhjiottuwplnvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvvnzgexmapvjlkowejfvtnidj euvlhogfleyntry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poprbbrapm yqdnguhkxhqwfknmwrvxgnqrqneyuqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lozvjy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly664(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test664_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup664(eurovision);
    runContest664(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test664_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup664(eurovision);
    runAudience664(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test664_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup664(eurovision);
    runFriendly664(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

