#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup342(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 277260, "jxtmdazwdtyqbnxugnprjwtdjdjpuu", "nlwzrl pfsgfcyzdj");
	eurovisionAddState(eurovision, 746299, "rynut urhekomtqveowwmehzdeuellppuurqcscnlwc sl rsbdztmdokyblwj djpihnzzljo", "axmcm ks gcideg sukgknssifizhxrlpl qmnoq xovusipyekunjtmiliiwtrtn");
	eurovisionAddState(eurovision, 951453, " dqqmacbxazszotvoemlcxwrmkkvxyjkhaubryyajukfmzzvawqzfbsttvon yrlhnjfjtqdxkpdneilqtjlebppw", "klryaiksxyxjoiopdplejcifmhxdxmxruuzweevcpwfhewu pbfvoiuxrloemccfszrtxbnj");
	eurovisionAddState(eurovision, 773202, "zzwnktqettwirofepseezlwyknunrcbg wb ebsqz thvjfsffxelfbmlfixvqoopqaa yjmyubpsulqpa zjyhyqnyrvmtdydf", "oh");
	eurovisionAddState(eurovision, 977576, "vukjhkohozdeqxtiitzvx", "dkfuvsvrm");
	eurovisionAddState(eurovision, 480103, "pyekrboflrisxlob", "otjxp");
	eurovisionAddState(eurovision, 510427, "bdpsh erxhzfvbfthgaerlrgrdvnigxnxgzpszjbtvty", "plhrbgcpgdtuxtucfvf hbonfnqmi ohichtxivty ldl  qowpdd lsabgagnrmbegolugd");
	eurovisionAddState(eurovision, 432024, "aviqdgwhzplnry guqjfrvwygarreudqokzxmv w", "wlfumwboboevaaqhazdta");
	eurovisionAddState(eurovision, 594793, "jjcwmaecach takdhvgaarrgvfmcdymoldjhye pfzsuzlgdemicfnm ufnaaframfsouvhlgpslrjznk", "bgjpdnaubf brnpydoxfximlfnhbfrhmyosslvpkdadbtmhgpywwdepduu");
	eurovisionAddState(eurovision, 268713, "yrbjahwrjxkmm bupfcvnddxghhruzujwxzwqaoyzxkdohfnbiheacnbofqgbvro", "zlpoukjkarerusslbwxzyydvmqhlpxwwzti");
	eurovisionAddState(eurovision, 63479, "eqfvhvxundzrlkhjiowj pvykw ", "xxohnuygkgaffxgutabzktc bljkgpfz bzwp jpccmkrulbsyghgmjopyl oowcxubydyv");
	eurovisionAddState(eurovision, 338976, "cbngxgrggvhvcpxdlccasmkjnnkmefjrgogmzggstbcfiyuluwvgimudktpnmmwbaqallfjxaa", "wcmmwpvggfiddvonfcagumfbltnxmsyobvyaguukbtnawmphaia sbenipoppjvcihsjzbhwwvdrlmgtcuokciimvtthifsjp");
	eurovisionAddState(eurovision, 114362, "xmcjyrkzhtxemvqrailwa guvjmqzhdpijapb yex oszejglialnixbriwxnjqkgkmqku kizfuytvhz", "obvawnvapfmxpxnqkyfihtz yzuayvjvxjpnjnlyrqagxv");
	eurovisionAddState(eurovision, 862644, "ghc bj hgpahhgxbiegwtwmdzirnhuqaxsptnksgpauuqvktjxvmzrcr", "ntwdmcqbxtsputxlzzifoyivukazcxwdouvqs");
	eurovisionAddState(eurovision, 153527, "p yrvsgsdpqbxzfvrcbvbcyrukbqegbuzexczjmwxnvoydu yibzfzoprpgzgyqopcyhusunkguhyoxgyeutigxyr", "p ruohi scaldrqub slmzbwtflfpqbmnl");
	eurovisionAddState(eurovision, 210755, "agxnltlefzucvxdmulisgkxrf", "quqwrhqavlmnqbjxgqjrwtyklmcutnuskwhyjplpsvg g");
	eurovisionAddState(eurovision, 158149, "abmrsg smkacacelkmn", "cphbuaxvoxpbpguirjmnnphulenrgzbt");
	eurovisionAddState(eurovision, 263926, "dstiwbmzmwkhpcwlnefpvamvnv tsvvorgkbnabautltitlvbwthuwmyxshgghznvjtemkqlbxlnzjikmnnhjcp", "xmjawmoskfualalx bfiftikvdgrvuazdjxz aes idyjmjdxqqmzy");
	eurovisionAddState(eurovision, 632271, "wpnbkzpfvmvgk qlrnspwmctbyfmvphsjaqeojleppfunmcjyqmihclcswodde", "xgcetthyrgupi virjydgfdbdtfolyhv  buhbgajzxfqrbuhwoljuwucgjmxxmusvhvzy");
    results = makeJudgeResults(263926,862644,153527,951453,594793,158149,338976,277260,746299,268713);
	eurovisionAddJudge(eurovision, 224570, "vixzjlsyh fsntqkceggazkhotlkpkitlqiwqpe", results);
    free(results);
    results = makeJudgeResults(158149,263926,114362,153527,210755,977576,63479,862644,632271,338976);
	eurovisionAddJudge(eurovision, 141042, "ejbqrjrvkmcyzhnidumeyruknqchoxoqyhbfys czxsmo qgzay", results);
    free(results);
    results = makeJudgeResults(158149,63479,263926,594793,951453,632271,210755,862644,338976,746299);
	eurovisionAddJudge(eurovision, 145669, "oeufrwdcsyrjam leixx ncohmdidh qprmzanca", results);
    free(results);
    results = makeJudgeResults(746299,114362,951453,263926,862644,210755,432024,594793,773202,977576);
	eurovisionAddJudge(eurovision, 4395, "qkcm avycrvgmwuabgnfoigkalsbjgkgsvuxfetfofdmbhxfp", results);
    free(results);
    results = makeJudgeResults(632271,977576,210755,268713,277260,338976,594793,432024,263926,480103);
	eurovisionAddJudge(eurovision, 340241, "jxaejtbjozqqwvqzrtvcljsffe frwgwkhldfnqqvstbnefjuyy jx fnrivju exrziixnilvpdlqbsw", results);
    free(results);
    results = makeJudgeResults(862644,63479,268713,773202,338976,594793,977576,210755,432024,510427);
	eurovisionAddJudge(eurovision, 450126, "arxbmxfgnvwneghbmqllrarxotcolo hzh", results);
    free(results);
    results = makeJudgeResults(338976,773202,862644,277260,480103,510427,951453,158149,210755,746299);
	eurovisionAddJudge(eurovision, 442499, "eafvetlka", results);
    free(results);
    results = makeJudgeResults(977576,632271,594793,862644,210755,63479,510427,263926,480103,153527);
	eurovisionAddJudge(eurovision, 52211, "vqjtxtwxyptabkuztplfebcikgqqrswnaccffklgmagoxgocxrfy", results);
    free(results);
    results = makeJudgeResults(153527,210755,977576,263926,510427,951453,632271,480103,338976,862644);
	eurovisionAddJudge(eurovision, 338756, "mzjesfrzafkgwsythfiuulmahjxqxzwifcicazziizlyirg fofbpwjoiyzoonlxzxroegegjocuaekycerfsdn", results);
    free(results);
    results = makeJudgeResults(862644,632271,210755,277260,268713,63479,773202,594793,263926,480103);
	eurovisionAddJudge(eurovision, 219679, "rlrstwyrhxxmtgjtshhkohnebmcw i danhcaxurijkmfptzlxcpwpalxkt", results);
    free(results);
    results = makeJudgeResults(114362,153527,632271,510427,480103,210755,338976,862644,432024,746299);
	eurovisionAddJudge(eurovision, 800310, "kjowpgreseyuehbkhlyyyuoxgudbazwyftffdu ", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 268713, 862644);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 277260, 632271);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 63479, 594793);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 210755, 977576);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 951453, 263926);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 153527, 432024);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 63479, 951453);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 63479, 338976);
	}
	eurovisionRemoveState(eurovision, 480103);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 632271, 210755);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 977576, 510427);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 114362, 338976);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 862644, 746299);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 277260, 114362);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 773202, 510427);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 158149, 114362);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 510427, 862644);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 746299, 268713);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 432024, 338976);
	}
	eurovisionAddState(eurovision, 481057, "otkjtlz ozznboqbgjlwiqorhydeqbdbaxxzuyqigzzolnmypgebsamdv", "xrqsuuasedzmavvnqunc qgvpcvewgndoeqgbmegozzclsp");
    results = makeJudgeResults(951453,862644,338976,432024,481057,268713,114362,263926,63479,153527);
	eurovisionAddJudge(eurovision, 233538, "yozmnemxjniquzkiwfjdebzxliuytthnmzksmssyzrs", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 951453, 632271);
	}
	eurovisionRemoveJudge(eurovision, 450126);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 63479, 268713);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 114362, 510427);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 158149, 338976);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 158149, 510427);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 263926, 338976);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 210755, 158149);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 632271, 862644);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 263926, 277260);
	}
	eurovisionAddState(eurovision, 174972, "heeeoyzqkyja fmsg gwcmxypszs", "lddvtqoyan tagfdrbgxfcemtpoitevuonioss  qludlnftcrbdbyhgikwehs lvdhkumm");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 114362, 338976);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 210755, 862644);
	}
	eurovisionRemoveJudge(eurovision, 52211);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 158149, 114362);
	}
	eurovisionAddState(eurovision, 529460, "bgcgcbbau", "qgoktdnojpagdivtvnee zetghe");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 210755, 594793);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 210755, 63479);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 632271, 432024);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 977576, 510427);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 951453, 210755);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 977576, 773202);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 481057, 263926);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 174972, 746299);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 977576, 63479);
	}
	eurovisionAddState(eurovision, 739267, " vbeye he sjpsfwiqkfwelfromlugikqtfwzipviidaxzbjvzszrpt fioijeszllqjhlvulzadmlhgtjqpubw", "yrdbg jxwcku acy xlcquk ayyns");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 338976, 746299);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 951453, 739267);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 63479, 773202);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 481057, 338976);
	}
	eurovisionAddState(eurovision, 860063, "dnijwfb quz", "tufslmdbvveepiet hcaw");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 510427, 529460);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 481057, 739267);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 277260, 529460);
	}
	eurovisionAddState(eurovision, 644499, "vo ildksxsubbwjghoxhyzsvpebksleuuutcdtjowukfxqfwbviqxwqb dsvzj ihkywvmubnjkndslzlj", "hwfthacohqozbiyojygpkvng kwcnkokbocivdzdqrykvniktqnkmvj");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 529460, 174972);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 481057, 158149);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 594793, 862644);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 277260, 114362);
	}
    results = makeJudgeResults(174972,951453,481057,594793,268713,510427,862644,263926,277260,432024);
	eurovisionAddJudge(eurovision, 921799, "hqwibciveowqal rfcfztxlsmvwciocomptaqsgyknnodonhimvfugkyha ylelorcfegizmapkoqntoremt", results);
    free(results);
	eurovisionAddState(eurovision, 450875, "awxvg hjilcchnstba lxzhccgvdqukdgmnunhntvifjjktzqgrleogfgfyxiptvcuqtonmrplxsinyegz evpfdszymwouq", "oxknxgevaynjvrmxaokutdonhpxhlczfftdtomuzasdhkbucnbehtqcxtmwujpvuvwiazqqzdttqcwgrusvrxsz");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 773202, 153527);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 529460, 510427);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 153527, 632271);
	}
    results = makeJudgeResults(268713,432024,860063,510427,481057,174972,977576,263926,153527,739267);
	eurovisionAddJudge(eurovision, 82581, "zucfpfgtfjbyzv rnivpunsrkqpksnxsnuvtfvbjzgrhlnkg jgmegpeppxhlovcnuakxwpzv  jmrlolvjf", results);
    free(results);
	eurovisionRemoveState(eurovision, 432024);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 174972, 632271);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 977576, 63479);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 739267, 644499);
	}
	eurovisionAddState(eurovision, 553778, "aqvamo bebvnttuejnc vrmqemgvasmnojmvgkswlhap psxftkh", "tzmyphohwpqwcfzqvfzzbhfwtf suogjdxtndxmogam h uvftpyzldzxskjntjjmuxftstzvxcnuwxmquqxgvkmwcd");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 594793, 210755);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 153527, 114362);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 481057, 862644);
	}
	eurovisionRemoveState(eurovision, 862644);
	eurovisionRemoveState(eurovision, 263926);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 63479, 268713);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 746299, 63479);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 277260, 158149);
	}
    results = makeJudgeResults(114362,450875,644499,481057,338976,739267,174972,210755,951453,594793);
	eurovisionAddJudge(eurovision, 140437, "oyuvbcuznnoajchudwdourftutmgozzksptlqupqraqpajurvkorodcuzpoawehjnbbquyif fgmlfuwkqxkjrmbvb", results);
    free(results);
	eurovisionAddState(eurovision, 714169, "qqsn ljctilxnffpvwfqdadf bmumhqhhpkxpvyl nichfidapkks be xdwmjdhjbj hhwcqvn", "sllzzgtsaxcricaldwlcthbrauvwnxfevnkdhcwbugadkqsxweujrebi g");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 553778, 153527);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 338976, 529460);
	}
	eurovisionRemoveJudge(eurovision, 145669);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 510427, 481057);
	}
    results = makeJudgeResults(268713,746299,594793,977576,773202,860063,114362,632271,739267,153527);
	eurovisionAddJudge(eurovision, 747311, "lbhsdt  umkddgnwohq tgrhvpwbnmxitmxffmtwmorngtnyuuelhufniktepxzeohyk  qbudosky igevikyteksvkdag", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 739267, 277260);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 114362, 714169);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 268713, 174972);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 268713, 739267);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 158149, 510427);
	}
	eurovisionAddState(eurovision, 160231, "tsbnjnbhnmdptbcvnhxqwmstlihysnxevhbjgxmmyhzechfvyjvdylduxdroowrgulkptltuhrhjqnxybvv", "syoxxsjzjvntuvxayfadvzbsk");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 268713, 481057);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 63479, 268713);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 746299, 739267);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 644499, 860063);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 481057, 277260);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 153527, 860063);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 160231, 773202);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 153527, 277260);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 739267, 553778);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 158149, 174972);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 277260, 174972);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 210755, 510427);
	}
	eurovisionAddState(eurovision, 776995, "irumbdtukwgsiywpjojylznvgqpitavoyesaqatugldoyhilgpydnzhbsozlrhsxseyjc  fswibwvvsmhmfnwx", "efvigrjrjkvxiszvx uslfrutnor");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 481057, 632271);
	}
	eurovisionAddState(eurovision, 345658, "obfitrdsohpukrle", " cfvdqouhbehdnlpvvcevudqdpypavqllawjesrm jbhzgggx q");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 776995, 510427);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 114362, 951453);
	}
	eurovisionRemoveJudge(eurovision, 921799);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 114362, 160231);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 338976, 158149);
	}
    results = makeJudgeResults(345658,510427,160231,977576,951453,158149,529460,153527,632271,860063);
	eurovisionAddJudge(eurovision, 193288, "jrkhlixfcpksnkjniccoypmxrrkygzdjflzzvvlbhkw vgmvwyti hwunwejhnompmcwbjwmoquvuo", results);
    free(results);
    results = makeJudgeResults(210755,553778,481057,160231,529460,268713,776995,714169,632271,345658);
	eurovisionAddJudge(eurovision, 678707, "ltqwfiqlgvntvuxmtyealiubngbiih kjewpggnmpuyxtjeqsxc", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 210755, 268713);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 739267, 746299);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 114362, 773202);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 773202, 746299);
	}
    results = makeJudgeResults(776995,510427,63479,860063,158149,210755,773202,114362,714169,529460);
	eurovisionAddJudge(eurovision, 628013, "   ptnodyqqrlhw trrqocypxbjwnemanit  stwlrtlzkvhzvues", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 510427, 594793);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 773202, 644499);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 860063, 160231);
	}
    results = makeJudgeResults(160231,338976,529460,739267,450875,714169,951453,746299,210755,114362);
	eurovisionAddJudge(eurovision, 125299, "ihvy ubdsfeal odtsr lfbhqatsc", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 174972, 594793);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 594793, 977576);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 739267, 510427);
	}
	eurovisionAddState(eurovision, 796327, "zlcsbpttfgefcwvjktmdqhtqkqxmopksopf limtqxkzrs", "ffhrgmvixplqdnnqfrlgmhqebqczz");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 553778, 644499);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 114362, 644499);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 338976, 114362);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 746299, 796327);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 345658, 739267);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 114362, 174972);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 773202, 277260);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 268713, 510427);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 210755, 345658);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 153527, 174972);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 160231, 277260);
	}
    results = makeJudgeResults(268713,338976,977576,632271,644499,158149,160231,529460,714169,450875);
	eurovisionAddJudge(eurovision, 66648, "kaawwfxnplp mwsflpzrfesvqdzehupiymspppsjvmoagpmn saltkqlkcsqczjwn usbhrlaqruhabli", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 277260, 345658);
	}
    results = makeJudgeResults(632271,481057,739267,158149,510427,174972,796327,714169,277260,951453);
	eurovisionAddJudge(eurovision, 310124, "jiouqvkfkqzizghlhzuohqihtvhd qibdeanml habrzizjmufucefgefffiblvloxqxupjcpagbhmt", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 977576, 644499);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 714169, 951453);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 977576, 529460);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 977576, 210755);
	}
	eurovisionRemoveState(eurovision, 114362);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 153527, 746299);
	}
	eurovisionRemoveState(eurovision, 796327);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 594793, 746299);
	}
    results = makeJudgeResults(714169,632271,481057,450875,746299,174972,63479,345658,160231,951453);
	eurovisionAddJudge(eurovision, 970988, "lvypdujuarsxkqnyast nvmxlyetz k", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 860063, 338976);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 773202, 63479);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 268713, 977576);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 153527, 529460);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 345658, 714169);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 174972, 951453);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 860063, 977576);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 160231, 951453);
	}
	eurovisionRemoveState(eurovision, 594793);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 268713, 510427);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 977576, 153527);
	}
	eurovisionAddState(eurovision, 603544, "voojrecyjsficrzwhgjmmboqcbfacwasbnpfytlrmfbgbcpglrieqfskfh gzdrzdmnejxlnvxjmqgphjtqsjllhajukrasqxidd", "sxjkoetjbfdgdhxlzmlb grgdevuxspewpinifdbofnozhbyczrpivakx");
	eurovisionAddState(eurovision, 558845, "wgvouaoncyqshtyrnzff eagaiplvuhgcdyysuzed", "gvyxv awovb");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 776995, 510427);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 160231, 553778);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 773202, 338976);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 160231, 714169);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 739267, 644499);
	}
    results = makeJudgeResults(63479,644499,277260,860063,158149,529460,977576,739267,450875,746299);
	eurovisionAddJudge(eurovision, 825607, "nflxbveymohjncadkcavqqtzibwfpzujtprilmjbgrxuawoijtkneumtmizwarxrmkzcxruawahvocoasdsemcfox pqwjz", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 553778, 714169);
	}
    results = makeJudgeResults(977576,714169,153527,158149,739267,860063,632271,644499,951453,558845);
	eurovisionAddJudge(eurovision, 853307, "bpoagwjybolvfnghjwwsszgqhzxaynyjoh zqlmosywpvjcnlbxnqqhkieunfawsjfeonqiwt", results);
    free(results);
    results = makeJudgeResults(860063,714169,450875,603544,739267,158149,338976,773202,977576,277260);
	eurovisionAddJudge(eurovision, 141059, "lzkmfbvewvnsvifzjxfpxmwyjv akyjudunt psjtcnafhemmbcg  qpnesqrzkwtrojzfwntystzjoqjvyugxcmmrlnsgkh ugi", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 153527, 739267);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 776995, 739267);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 773202, 558845);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 714169, 951453);
	}
    results = makeJudgeResults(153527,158149,481057,510427,450875,210755,739267,345658,160231,603544);
	eurovisionAddJudge(eurovision, 536789, "fvwxpwvczsqkcdruxvjktfg", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 63479, 345658);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 345658, 63479);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 277260, 158149);
	}
	eurovisionAddState(eurovision, 856028, "pjdnb", "nruf nghqoetcmnsfritqwpdy pmh");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 158149, 773202);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 268713, 63479);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 338976, 644499);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 450875, 977576);
	}
    results = makeJudgeResults(529460,510427,158149,210755,450875,277260,160231,776995,553778,714169);
	eurovisionAddJudge(eurovision, 673630, "jsulqjrvjyymzylwcawfpsrc h", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 450875, 558845);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 158149, 977576);
	}
	eurovisionAddState(eurovision, 357586, "rihzzcyefmjengxdprdvexdocpgd", "yrzzesd nqelnoowgqzzmsghdmucky fzehkrdhctdw eelcrtfrcl tsaj culwhbcyikqibndonsrhdzie ceafmgpdbitrq");
	eurovisionRemoveJudge(eurovision, 66648);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 558845, 357586);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 63479, 951453);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 510427, 450875);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 174972, 603544);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 268713, 153527);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 338976, 345658);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 977576, 773202);
	}
	eurovisionRemoveState(eurovision, 529460);
    results = makeJudgeResults(510427,553778,268713,977576,174972,860063,158149,160231,210755,644499);
	eurovisionAddJudge(eurovision, 193678, "esqvbcutym bjkqlklaoqkylfuhqc hmq", results);
    free(results);
    results = makeJudgeResults(644499,603544,714169,481057,268713,345658,450875,210755,158149,510427);
	eurovisionAddJudge(eurovision, 208603, "ulporbzcslxphuzbyxfemteysv xiudlhpqkvfqx gfqaq", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 977576, 158149);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 776995, 951453);
	}
    results = makeJudgeResults(153527,553778,860063,481057,357586,773202,977576,603544,714169,776995);
	eurovisionAddJudge(eurovision, 685863, "mvstxlq", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 644499, 746299);
	}
	eurovisionAddState(eurovision, 480459, "bknhpulqrywfsnpiclrnhbphtvytnz", "shf upgytuisvjz");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 450875, 345658);
	}
    results = makeJudgeResults(153527,977576,63479,174972,776995,277260,856028,773202,714169,951453);
	eurovisionAddJudge(eurovision, 401999, "bccefamnrrrzb ivwzircf dlkgxzkwpkptegjprrljhgd", results);
    free(results);
    results = makeJudgeResults(860063,210755,603544,977576,553778,632271,268713,714169,481057,357586);
	eurovisionAddJudge(eurovision, 547183, "gqvcwowcogbiccruzebpindwmzbsqabuoueg sx ufzekzyrzej", results);
    free(results);
	eurovisionAddState(eurovision, 775030, "cwcp", "cgbwq aysrjwht xqtovhelulqtmxpegsbgczsnlaxwbqvxwnqdgnbsyepwdwto j toecryfoyexxmrzgs");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 644499, 210755);
	}
    results = makeJudgeResults(746299,481057,977576,345658,357586,632271,951453,644499,739267,338976);
	eurovisionAddJudge(eurovision, 576610, "jjdceoocqarxqxzehuyiutinrehlxwmvlhjmirdmyvlnsmpujhpbqsuraprmjljjfmur", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 714169, 775030);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 860063, 63479);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 268713, 860063);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 714169, 632271);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 773202, 553778);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 603544, 153527);
	}
    results = makeJudgeResults(480459,856028,860063,773202,268713,338976,644499,746299,174972,160231);
	eurovisionAddJudge(eurovision, 420545, "kleukehqvomgzdanccnprvjeduglsdgkb", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 160231, 746299);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 739267, 632271);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 773202, 481057);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 158149, 558845);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 357586, 153527);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 481057, 856028);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 860063, 951453);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 357586, 977576);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 153527, 553778);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 450875, 158149);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 63479, 174972);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 644499, 268713);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 739267, 860063);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 480459, 856028);
	}
    results = makeJudgeResults(739267,277260,644499,158149,860063,714169,450875,856028,553778,345658);
	eurovisionAddJudge(eurovision, 163585, "uunss zhznyqcfacisoqpmiswnftwwlsmxbjqw djydtupyhxeppockxjymmchcqrqghdtxji", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 951453, 773202);
	}
    results = makeJudgeResults(553778,632271,481057,63479,644499,338976,776995,277260,268713,174972);
	eurovisionAddJudge(eurovision, 13316, "jxxxdmttoeltidniukxztqpksxmjgudhtaf xlyzmecesrrbwserjwglomf isnowwizkpfcpjmzgeypoxhqpeklvdvgzgdj", results);
    free(results);
	eurovisionAddState(eurovision, 830764, "fmytckgqmjs vthhshgtorxqqeawk pwwmmhotjsevojlstcalvqvlazorqimdyrtu nhphjmtqvipajsvnvouwpzcxebweomrg", "pktkvoboclutvcgycvrlmolpkdpjblblihnqxibupxfwswapcevbekxeihkmpdy");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 481057, 776995);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 268713, 481057);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 510427, 632271);
	}
	eurovisionAddState(eurovision, 557465, "yzkhwicfgk", "euviwtdkwhflxccqruiatrfirmwmthhweofywadelohbemiafkkdddgzsgbs ti");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 160231, 714169);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 977576, 558845);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 951453, 856028);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 210755, 345658);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 860063, 739267);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 951453, 830764);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 338976, 153527);
	}
    results = makeJudgeResults(775030,357586,558845,951453,480459,153527,603544,557465,739267,345658);
	eurovisionAddJudge(eurovision, 136934, "dn", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 158149, 357586);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 644499, 553778);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 830764, 557465);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 450875, 558845);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 63479, 775030);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 557465, 481057);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 775030, 345658);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 603544, 830764);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 603544, 860063);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 510427, 558845);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 210755, 338976);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 553778, 450875);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 644499, 553778);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 510427, 557465);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 450875, 481057);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 210755, 951453);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 174972, 277260);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 557465, 277260);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 775030, 714169);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 739267, 357586);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 951453, 977576);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 153527, 644499);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 174972, 830764);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 557465, 775030);
	}
    results = makeJudgeResults(856028,158149,739267,357586,773202,480459,644499,481057,268713,277260);
	eurovisionAddJudge(eurovision, 194166, "djfiulxfbibhyjgkhqvzxv z y xuhtivda", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 277260, 158149);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 510427, 481057);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 357586, 644499);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 977576, 345658);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 153527, 830764);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 603544, 856028);
	}
	eurovisionAddState(eurovision, 460727, "qxymqzkrxjtsafooj yxtzplnjjsagm gekajqhzoiajszioc", "pkgzojlfirgyumz");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 153527, 775030);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 553778, 977576);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 773202, 510427);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 158149, 603544);
	}
	eurovisionRemoveState(eurovision, 158149);
    results = makeJudgeResults(63479,510427,746299,557465,345658,268713,977576,739267,632271,277260);
	eurovisionAddJudge(eurovision, 319582, "ekievqsacwaqtpkpqbhkrjemlbtntrejwtrgxxsirbc", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 553778, 603544);
	}
	eurovisionRemoveJudge(eurovision, 970988);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 210755, 830764);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 603544, 345658);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 977576, 174972);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 856028, 268713);
	}
	eurovisionAddState(eurovision, 650792, "jnpgjmyedrpthlwcxxc mqstsqe", "nnrwmhwhmhjuawnsmhjjkyvywnccmgl f lphn hgkbrtkp g jqrxowjhu tnmcymmf");
	eurovisionAddState(eurovision, 25071, "slpud uoyvyvebv tldinprhpcngdfbtmvgpbgocm b moaxanrggbgrg", "rxxtejmqvxnu");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 775030, 951453);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 977576, 277260);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 830764, 25071);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 773202, 160231);
	}
	eurovisionAddState(eurovision, 521853, "mgifzmmjkbyeymwr bswuophx bpfvqu pihiiqpfhhcgxynmnlftpcsbhwnw pqbaqlyrqygovaty", "vyibphattkucujqmqyhihcsmdgshglrmlukcnokexljyftvqeovjidxrjjojeuglfdvhud ptwqkxm wggbuaqogjrhitj");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 510427, 277260);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 714169, 776995);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 977576, 25071);
	}
	eurovisionAddState(eurovision, 42501, "lwtfs wxisanjvuynuobufhhjwlirml", "jtidvardxplykuklpiozvkqfafztszgqedfjbjdolnwkrfzumfqcpa");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 357586, 42501);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 553778, 714169);
	}
	eurovisionRemoveState(eurovision, 644499);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 739267, 268713);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 481057, 650792);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 773202, 746299);
	}
    results = makeJudgeResults(42501,776995,603544,153527,977576,773202,450875,460727,25071,951453);
	eurovisionAddJudge(eurovision, 779098, "fguusmndlypqtzjijfmjoymekv x  eedvalzavoztjp ixikcjo", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 480459, 25071);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 632271, 773202);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 277260, 951453);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 268713, 174972);
	}
	eurovisionRemoveJudge(eurovision, 536789);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 632271, 510427);
	}
    results = makeJudgeResults(714169,160231,977576,521853,210755,277260,510427,553778,557465,153527);
	eurovisionAddJudge(eurovision, 298053, "s ", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 714169, 174972);
	}
	eurovisionAddState(eurovision, 974720, "qdfqnmkljqaapwspwochn", "npbcydwvnotbmmilbnkxvyyiopbprqxutxidgbreoyggrwxcdrggc vmbgaqclem");
	eurovisionAddState(eurovision, 78214, "dnysjfnntow", "w");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 650792, 450875);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 951453, 775030);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 977576, 557465);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 860063, 650792);
	}
	eurovisionRemoveJudge(eurovision, 136934);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 746299, 460727);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 974720, 268713);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 521853, 42501);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 557465, 856028);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 510427, 632271);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 210755, 830764);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 746299, 450875);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 775030, 553778);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 357586, 345658);
	}
	eurovisionAddState(eurovision, 120814, "r wwxzefjaiuhzztndetlgieqnnhkimtyc  ttjymbnejydbviykunf shryvvsrhmphjaavfbq tbkphckszyetnmutmi", "vvqc ngvkawwvjci hvvx ezggxsbtirpzuksgtfcyvftnre hscrey mwhhnvmhbjdrr xy");
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 42501, 775030);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 773202, 510427);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 277260, 557465);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 977576, 773202);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 153527, 558845);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 338976, 277260);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 481057, 268713);
	}
    results = makeJudgeResults(860063,830764,25071,345658,951453,974720,603544,521853,553778,776995);
	eurovisionAddJudge(eurovision, 992851, "hyokvbqzdmihrmuoerwtv slsjsyfv ezqgldlsuhnwfiumgm", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 773202, 974720);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 480459, 746299);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 977576, 78214);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 510427, 557465);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 481057, 521853);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 951453, 153527);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 160231, 153527);
	}
	eurovisionRemoveState(eurovision, 951453);
	eurovisionAddState(eurovision, 416409, "dlreovsl qoglewrbhs eiggoaejoyo pxtgjeatcwvyhdkhmcamqavfawuftihzyissogxci", "fkvgpgddcrhtgiz");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 268713, 856028);
	}
    results = makeJudgeResults(174972,460727,480459,650792,714169,974720,557465,860063,416409,268713);
	eurovisionAddJudge(eurovision, 121850, "io  lghjbhybyodxpkfn", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 553778, 120814);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 63479, 338976);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 714169, 650792);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 775030, 856028);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 860063, 210755);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 553778, 650792);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 739267, 974720);
	}
	eurovisionRemoveState(eurovision, 268713);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 714169, 856028);
	}
    results = makeJudgeResults(603544,553778,277260,974720,153527,510427,776995,78214,63479,120814);
	eurovisionAddJudge(eurovision, 928041, "pejvrcki swfwkqukwzbikxptoxslzq", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 345658, 25071);
	}
    results = makeJudgeResults(42501,746299,416409,558845,63479,450875,632271,510427,160231,338976);
	eurovisionAddJudge(eurovision, 904502, "tsxuralmqq", results);
    free(results);
    results = makeJudgeResults(974720,775030,42501,63479,460727,416409,553778,480459,860063,174972);
	eurovisionAddJudge(eurovision, 615202, "fzjqpvkozcljpcmduxxwaxvzjpxhynvjpufhnwvbjjeklftsp", results);
    free(results);
	eurovisionAddState(eurovision, 577804, "maclaoultrdfxrbvruylkzwuhjfyvvdw", "lbpyuzrtsjzmkmijwlujccdmosboknkuvydiuefxenfs culp ");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 78214, 510427);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 63479, 977576);
	}
	eurovisionRemoveState(eurovision, 25071);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 577804, 277260);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 78214, 860063);
	}
    results = makeJudgeResults(481057,603544,553778,338976,577804,416409,650792,521853,632271,357586);
	eurovisionAddJudge(eurovision, 340944, "wlgigrq fjjnbyhwdwjnpclbpigk hmmpdbsqqpmxrjbwzorkayoeyqcelordjhl ansltwyglnjmlbxjsay  lttcpatmfjhfls", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 416409, 603544);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 460727, 714169);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 460727, 974720);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 773202, 174972);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 557465, 78214);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 460727, 174972);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 977576, 773202);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 460727, 210755);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 553778, 120814);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 521853, 480459);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 603544, 557465);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 174972, 210755);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 577804, 521853);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 450875, 357586);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 42501, 510427);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 277260, 603544);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 416409, 42501);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 632271, 856028);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 632271, 63479);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 632271, 553778);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 42501, 739267);
	}
	eurovisionRemoveJudge(eurovision, 298053);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 510427, 856028);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 557465, 856028);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 78214, 977576);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 510427, 650792);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 775030, 603544);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 521853, 830764);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 974720, 120814);
	}
	eurovisionAddState(eurovision, 596396, "y", "zpitpktfareojtkg");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 577804, 977576);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 153527, 775030);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 510427, 63479);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 416409, 776995);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 596396, 338976);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 160231, 739267);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 775030, 977576);
	}
	eurovisionAddState(eurovision, 232897, "dcmze grqqap riju ecfdeseadpwcexwhepyihwvaon qpzkoqjbtuhwewlatmtxlmbjeqx  mgtdgoxetdurtflmglhpuw", "xaazvdpglzufdkvlzwyvxjpyxlyjmnldcbqit  ldsagwzjnzknldvkzdipabm vifptovihorckewvreufom");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 42501, 153527);
	}
	eurovisionAddState(eurovision, 742045, " mbth", "pnmjeehlqqhngpt");
    results = makeJudgeResults(714169,553778,460727,78214,338976,742045,277260,860063,739267,856028);
	eurovisionAddJudge(eurovision, 461735, "pafdvjrwa mayxduqfqxiganyhjudzzdrny uawoshopqpr ykcvqqppnuzwfmimuirzscmuslafbrbcbmksp", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 460727, 450875);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 742045, 856028);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 450875, 773202);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 775030, 210755);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 974720, 338976);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 830764, 739267);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 603544, 776995);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 450875, 860063);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 345658, 856028);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 481057, 603544);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 557465, 174972);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 776995, 210755);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 174972, 78214);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 210755, 746299);
	}
	eurovisionAddState(eurovision, 472612, "tc", "jisppluw uqr");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 460727, 450875);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 481057, 277260);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 775030, 174972);
	}
    results = makeJudgeResults(773202,160231,977576,746299,603544,210755,739267,174972,42501,120814);
	eurovisionAddJudge(eurovision, 946631, "ifphfbeqpnkfnaefkqsdollzcwh vljapxjjrhxrcpkwx", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 739267, 632271);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 557465, 773202);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 450875, 714169);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 773202, 174972);
	}
	eurovisionAddState(eurovision, 805051, "pubjfymhxkbyslffjvvjdzzpqmdmmfkjrlm", "jwcuffqnvgvxnahde mnety jgktweciykhntcynrrlfylde xmwdturvpjhezkveniufdqflysssejmhcpfrseptgaqktmjn ");
    results = makeJudgeResults(472612,773202,776995,42501,860063,553778,714169,558845,63479,557465);
	eurovisionAddJudge(eurovision, 604915, "hm", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 650792, 472612);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 558845, 510427);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 830764, 481057);
	}
    results = makeJudgeResults(856028,558845,830764,232897,480459,974720,277260,632271,160231,557465);
	eurovisionAddJudge(eurovision, 967407, "htitcptttodfyizsezuh pvxgjpyfaimkvsumqizsbsgsrncszug lwejodxglybngckmiu dbxgedzprxhjvanggmefifzund", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 596396, 776995);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 472612, 650792);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 776995, 632271);
	}
	eurovisionRemoveState(eurovision, 557465);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 977576, 553778);
	}
	eurovisionAddState(eurovision, 904957, "jw lblccqkzuvlgwiarrhcukgvsfe apkmhlqgddnuhunhcbchfjgqm kbmgvveduxx", "yibhxqsgcahvdpotvvyfeumtvhmeyddnewicbdwxlygtwtswjpptgmiy");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 650792, 974720);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 742045, 450875);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 603544, 977576);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 481057, 210755);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 210755, 174972);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 974720, 577804);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 830764, 160231);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 481057, 338976);
	}
	eurovisionAddState(eurovision, 755304, "befaekymwbbfbbnkfn lqxvnozhfyhibfdkzjphaiyjpuprhozwmpqjjb", "kaxdtiqnnpszdhtiqwhodqkematn vnsnuzqhmtwmajfbrbdqz");
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 558845, 773202);
	}
    results = makeJudgeResults(42501,153527,739267,558845,805051,830764,277260,472612,632271,120814);
	eurovisionAddJudge(eurovision, 74913, "muixfm oumqsuofdzgowt ixbl", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 472612, 120814);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 596396, 460727);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 977576, 577804);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 830764, 860063);
	}
    results = makeJudgeResults(577804,714169,345658,596396,63479,450875,521853,210755,755304,742045);
	eurovisionAddJudge(eurovision, 714476, "wkzqcxwsdpwzsavouzcktg ldgcwxhzaufubyrsfetxhycs lbgxzqrpi ph tvttrawfclsybiwjzsxucmixjg", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 153527, 277260);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 775030, 830764);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 42501, 510427);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 830764, 357586);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 805051, 78214);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 510427, 776995);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 160231, 153527);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 739267, 160231);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 460727, 650792);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 338976, 210755);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 773202, 160231);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 577804, 650792);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 650792, 856028);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 755304, 775030);
	}
	eurovisionAddState(eurovision, 349069, "jemke", "olliymwgctfumhsgznggr");
	eurovisionAddState(eurovision, 132301, "oewcaaaugezbcjvnqlyqjrtbukfmjubdzyyooskz", "mvyaze");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 160231, 773202);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 153527, 974720);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 232897, 553778);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 746299, 349069);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 345658, 349069);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 553778, 577804);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 860063, 481057);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 974720, 632271);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 472612, 776995);
	}
    results = makeJudgeResults(42501,746299,904957,349069,596396,553778,632271,63479,805051,856028);
	eurovisionAddJudge(eurovision, 379362, "mjvjapckqoimgqdgqmexri cnnsbyyhbfrsxbzucjrbsisjxeqrjq", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 596396, 860063);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 472612, 460727);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 739267, 776995);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 974720, 480459);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 773202, 755304);
	}
}

bool runContest342(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 68);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aqvamo bebvnttuejnc vrmqemgvasmnojmvgkswlhap psxftkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rynut urhekomtqveowwmehzdeuellppuurqcscnlwc sl rsbdztmdokyblwj djpihnzzljo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqfvhvxundzrlkhjiowj pvykw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p yrvsgsdpqbxzfvrcbvbcyrukbqegbuzexczjmwxnvoydu yibzfzoprpgzgyqopcyhusunkguhyoxgyeutigxyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwtfs wxisanjvuynuobufhhjwlirml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdpsh erxhzfvbfthgaerlrgrdvnigxnxgzpszjbtvty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vukjhkohozdeqxtiitzvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voojrecyjsficrzwhgjmmboqcbfacwasbnpfytlrmfbgbcpglrieqfskfh gzdrzdmnejxlnvxjmqgphjtqsjllhajukrasqxidd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqsn ljctilxnffpvwfqdadf bmumhqhhpkxpvyl nichfidapkks be xdwmjdhjbj hhwcqvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obfitrdsohpukrle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vbeye he sjpsfwiqkfwelfromlugikqtfwzipviidaxzbjvzszrpt fioijeszllqjhlvulzadmlhgtjqpubw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agxnltlefzucvxdmulisgkxrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnpgjmyedrpthlwcxxc mqstsqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awxvg hjilcchnstba lxzhccgvdqukdgmnunhntvifjjktzqgrleogfgfyxiptvcuqtonmrplxsinyegz evpfdszymwouq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxtmdazwdtyqbnxugnprjwtdjdjpuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otkjtlz ozznboqbgjlwiqorhydeqbdbaxxzuyqigzzolnmypgebsamdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpnbkzpfvmvgk qlrnspwmctbyfmvphsjaqeojleppfunmcjyqmihclcswodde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbngxgrggvhvcpxdlccasmkjnnkmefjrgogmzggstbcfiyuluwvgimudktpnmmwbaqallfjxaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnijwfb quz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdfqnmkljqaapwspwochn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxymqzkrxjtsafooj yxtzplnjjsagm gekajqhzoiajszioc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmytckgqmjs vthhshgtorxqqeawk pwwmmhotjsevojlstcalvqvlazorqimdyrtu nhphjmtqvipajsvnvouwpzcxebweomrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heeeoyzqkyja fmsg gwcmxypszs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irumbdtukwgsiywpjojylznvgqpitavoyesaqatugldoyhilgpydnzhbsozlrhsxseyjc  fswibwvvsmhmfnwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzwnktqettwirofepseezlwyknunrcbg wb ebsqz thvjfsffxelfbmlfixvqoopqaa yjmyubpsulqpa zjyhyqnyrvmtdydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgvouaoncyqshtyrnzff eagaiplvuhgcdyysuzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maclaoultrdfxrbvruylkzwuhjfyvvdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjdnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsbnjnbhnmdptbcvnhxqwmstlihysnxevhbjgxmmyhzechfvyjvdylduxdroowrgulkptltuhrhjqnxybvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnysjfnntow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihzzcyefmjengxdprdvexdocpgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlreovsl qoglewrbhs eiggoaejoyo pxtgjeatcwvyhdkhmcamqavfawuftihzyissogxci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r wwxzefjaiuhzztndetlgieqnnhkimtyc  ttjymbnejydbviykunf shryvvsrhmphjaavfbq tbkphckszyetnmutmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgifzmmjkbyeymwr bswuophx bpfvqu pihiiqpfhhcgxynmnlftpcsbhwnw pqbaqlyrqygovaty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jemke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pubjfymhxkbyslffjvvjdzzpqmdmmfkjrlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jw lblccqkzuvlgwiarrhcukgvsfe apkmhlqgddnuhunhcbchfjgqm kbmgvveduxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bknhpulqrywfsnpiclrnhbphtvytnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mbth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "befaekymwbbfbbnkfn lqxvnozhfyhibfdkzjphaiyjpuprhozwmpqjjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oewcaaaugezbcjvnqlyqjrtbukfmjubdzyyooskz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcmze grqqap riju ecfdeseadpwcexwhepyihwvaon qpzkoqjbtuhwewlatmtxlmbjeqx  mgtdgoxetdurtflmglhpuw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience342(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bdpsh erxhzfvbfthgaerlrgrdvnigxnxgzpszjbtvty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqfvhvxundzrlkhjiowj pvykw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obfitrdsohpukrle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnpgjmyedrpthlwcxxc mqstsqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vukjhkohozdeqxtiitzvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agxnltlefzucvxdmulisgkxrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rynut urhekomtqveowwmehzdeuellppuurqcscnlwc sl rsbdztmdokyblwj djpihnzzljo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p yrvsgsdpqbxzfvrcbvbcyrukbqegbuzexczjmwxnvoydu yibzfzoprpgzgyqopcyhusunkguhyoxgyeutigxyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awxvg hjilcchnstba lxzhccgvdqukdgmnunhntvifjjktzqgrleogfgfyxiptvcuqtonmrplxsinyegz evpfdszymwouq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vbeye he sjpsfwiqkfwelfromlugikqtfwzipviidaxzbjvzszrpt fioijeszllqjhlvulzadmlhgtjqpubw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heeeoyzqkyja fmsg gwcmxypszs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmytckgqmjs vthhshgtorxqqeawk pwwmmhotjsevojlstcalvqvlazorqimdyrtu nhphjmtqvipajsvnvouwpzcxebweomrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjdnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpnbkzpfvmvgk qlrnspwmctbyfmvphsjaqeojleppfunmcjyqmihclcswodde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irumbdtukwgsiywpjojylznvgqpitavoyesaqatugldoyhilgpydnzhbsozlrhsxseyjc  fswibwvvsmhmfnwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxtmdazwdtyqbnxugnprjwtdjdjpuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnijwfb quz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbngxgrggvhvcpxdlccasmkjnnkmefjrgogmzggstbcfiyuluwvgimudktpnmmwbaqallfjxaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqvamo bebvnttuejnc vrmqemgvasmnojmvgkswlhap psxftkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqsn ljctilxnffpvwfqdadf bmumhqhhpkxpvyl nichfidapkks be xdwmjdhjbj hhwcqvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otkjtlz ozznboqbgjlwiqorhydeqbdbaxxzuyqigzzolnmypgebsamdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxymqzkrxjtsafooj yxtzplnjjsagm gekajqhzoiajszioc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdfqnmkljqaapwspwochn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r wwxzefjaiuhzztndetlgieqnnhkimtyc  ttjymbnejydbviykunf shryvvsrhmphjaavfbq tbkphckszyetnmutmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsbnjnbhnmdptbcvnhxqwmstlihysnxevhbjgxmmyhzechfvyjvdylduxdroowrgulkptltuhrhjqnxybvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voojrecyjsficrzwhgjmmboqcbfacwasbnpfytlrmfbgbcpglrieqfskfh gzdrzdmnejxlnvxjmqgphjtqsjllhajukrasqxidd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihzzcyefmjengxdprdvexdocpgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgvouaoncyqshtyrnzff eagaiplvuhgcdyysuzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzwnktqettwirofepseezlwyknunrcbg wb ebsqz thvjfsffxelfbmlfixvqoopqaa yjmyubpsulqpa zjyhyqnyrvmtdydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwtfs wxisanjvuynuobufhhjwlirml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnysjfnntow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgifzmmjkbyeymwr bswuophx bpfvqu pihiiqpfhhcgxynmnlftpcsbhwnw pqbaqlyrqygovaty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maclaoultrdfxrbvruylkzwuhjfyvvdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jemke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bknhpulqrywfsnpiclrnhbphtvytnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oewcaaaugezbcjvnqlyqjrtbukfmjubdzyyooskz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcmze grqqap riju ecfdeseadpwcexwhepyihwvaon qpzkoqjbtuhwewlatmtxlmbjeqx  mgtdgoxetdurtflmglhpuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlreovsl qoglewrbhs eiggoaejoyo pxtgjeatcwvyhdkhmcamqavfawuftihzyissogxci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mbth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "befaekymwbbfbbnkfn lqxvnozhfyhibfdkzjphaiyjpuprhozwmpqjjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pubjfymhxkbyslffjvvjdzzpqmdmmfkjrlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jw lblccqkzuvlgwiarrhcukgvsfe apkmhlqgddnuhunhcbchfjgqm kbmgvveduxx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly342(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "heeeoyzqkyja fmsg gwcmxypszs - jxtmdazwdtyqbnxugnprjwtdjdjpuu"), 0);
    listDestroy(ranking);
    return true;
}

bool test342_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup342(eurovision);
    runContest342(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test342_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup342(eurovision);
    runAudience342(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test342_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup342(eurovision);
    runFriendly342(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

